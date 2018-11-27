#ifndef _SINGLY_LINKED_LIST_H
#define _SINGLY_LINKED_LIST_H

#include <vector>
#include "Node.h"

template <class T>
class SinglyLinkedList
{
private:
	Node<T>* head;
	Node<T>* tail;
	int itemCount;

	Node<T>* hSearch(const T&) const;
	Node<T>* hRemove(Node<T>* node, Node<T>* root);
	void copyList(const SinglyLinkedList<T>&);

public:
	SinglyLinkedList();
	SinglyLinkedList(const SinglyLinkedList<T>&);
	~SinglyLinkedList();

public:
	bool isEmpty() const;
	int getLength() const;

	bool search(const T&, T&) const;

	Node<T>* getHead() const;
	Node<T>* getTail() const;

public:
	void insertFirst(const T&);
	void insertLast(const T&);
	void insert(const T&);

	void removeFirst();
	void removeLast();
	void remove(const T&);

	void clear();

	SinglyLinkedList<T>& operator=(const SinglyLinkedList<T>&);
	T operator[](const int&);
	std::vector<T> toVector() const;
};

#include "SinglyLinkedList.cpp" 
#endif // !_SINGLY_LINKED_LIST_H
