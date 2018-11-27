#ifndef _SINGLY_LINKED_LIST_IMPL
#define _SINGLY_LINKED_LIST_IMPL

#include "SinglyLinkedList.h"

#define FOR(p, a) for(Node<T>* p = a; p; p = p->getNext())

// CONSTRUCTOR & DESTRUCTOR
//////////////////////////////
template <class T>
SinglyLinkedList<T>::SinglyLinkedList()
{
	itemCount = 0;
	head = nullptr;
	tail = nullptr;
}

template <class T>
SinglyLinkedList<T>::SinglyLinkedList(const SinglyLinkedList& src)
{
	itemCount = 0;
	head = nullptr;
	tail = nullptr;

	copyList(src);
}

template <class T>
SinglyLinkedList<T>::~SinglyLinkedList()
{
	clear();
}

template<class T>
Node<T>* SinglyLinkedList<T>::hSearch(const T &t_key) const
{
	for (Node<T>* p = head; p != nullptr; p = p->getNext())
	{
		if (p->getKey() == t_key) return p;
	}
	return nullptr;
}

template<class T>
Node<T>* SinglyLinkedList<T>::hRemove(Node<T>* node, Node<T>* root)
{
	if (root->getNext() == node)
	{
		root->setNext(node->getNext());
		delete node;
		return root;
	}
	root->setNext(hRemove(node, root->getNext()));
	return root;
}

// PRIVATE AREA
////////////////
template <class T>
void SinglyLinkedList<T>::copyList(const SinglyLinkedList<T>& src)
{
	clear();
	FOR(p, src.head)
	{
		insertLast(p->getKey());
	}
}

// PUBLIC AREA
////////////////
template <class T>
bool SinglyLinkedList<T>::isEmpty() const
{
	return itemCount == 0;
}

template <class T>
int SinglyLinkedList<T>::getLength() const
{
	return itemCount;
}

template<class T>
bool SinglyLinkedList<T>::search(const T &t_key, T& result) const
{
	Node<T>* node = hSearch(t_key);
	if (node)
	{
		result = node->getKey();
		return true;
	}
	return false;
}

template <class T>
Node<T>* SinglyLinkedList<T>::getHead() const
{
	return head;
}

template <class T>
Node<T>* SinglyLinkedList<T>::getTail() const
{
	return tail;
}

template <class T>
void SinglyLinkedList<T>::insertFirst(const T& value)
{
	if (isEmpty())
	{
		head = new Node<T>(value);
		tail = head;
	}
	else
	{
		Node<T>* tmp = new Node<T>(value);
		tmp->setNext(head);
		head = tmp;
	}
	itemCount++;
}

template <class T>
void SinglyLinkedList<T>::insertLast(const T& value)
{
	if (isEmpty())
	{
		head = new Node<T>(value);
		tail = head;
	}
	else
	{
		tail->setNext(new Node<T>(value));
		tail = tail->getNext();
	}
	itemCount++;
}

template<class T>
void SinglyLinkedList<T>::insert(const T &t_key)
{
	if (isEmpty() || t_key <= head->getKey())
		return insertFirst(t_key);

	if (t_key > tail->getKey())
		return insertLast(t_key);

	Node<T>* p = head;
	while (t_key > p->getKey())
	{
		p = p->getNext();
	}

	Node<T>* q = head;
	while (q->getNext() != p)
	{
		q = q->getNext();
	}

	Node<T>* node = new Node<T>(t_key);
	q->setNext(node);
	node->setNext(p);
	itemCount++;
}

template <class T>
void SinglyLinkedList<T>::removeFirst()
{
	if (isEmpty()) return;

	if (head == tail)
	{
		delete head;
		head = tail = nullptr;
		itemCount--;
		return;
	}

	Node<T>* tmp = head->getNext();
	delete head;
	head = tmp;
	itemCount--;
}

template <class T>
void SinglyLinkedList<T>::removeLast()
{
	if (isEmpty()) return;

	if (head == tail) 
		return removeFirst();

	Node<T>* prev = head;
	while (prev->getNext() != tail)
		prev = prev->getNext();

	delete tail;
	tail = prev;
	itemCount--;
}

template<class T>
void SinglyLinkedList<T>::remove(const T& t_key)
{
	Node<T>* node = hSearch(t_key);
	if (!node) return;

	if (node == head)
		return removeFirst();

	if (node == tail)
		return removeLast();

	head = hRemove(node, head);
	itemCount--;
}

template <class T>
void SinglyLinkedList<T>::clear()
{
	while (!isEmpty())
	{
		removeFirst();
	}
}

// OPERATOR OVERLOADING
///////////////////////
template <class T>
SinglyLinkedList<T>& SinglyLinkedList<T>::operator=(const SinglyLinkedList<T>& src)
{
	copyList(src);
}

template<class T>
T SinglyLinkedList<T>::operator[](const int &index)
{
	Node<T>* p = head;
	while (index > 0)
	{
		p = p->getNext();
		index--;
	}
	return p->getKey();
}

template<class T>
std::vector<T> SinglyLinkedList<T>::toVector() const
{
	std::vector<T> result;
	for (Node<T>* p = head; p != nullptr; p = p->getNext())
		result.push_back(p->getKey());
	return result;
}

#endif // !_SINGLY_LINKED_LIST_IMPL
