#ifndef _NODE_IMPL
#define _NODE_IMPL

#include "Node.h"

// CONSTRUCTOR & DESTRUCTOR
////////////////////////////
template <class T>
Node<T>::Node()
{
	m_next = nullptr;
}

template <class T>
Node<T>::Node(const T& t_key)
{
	m_key = t_key;
	m_next = nullptr;
}

template <class T>
Node<T>::Node(const T& t_key, const Node<T>* t_next)
{
	m_key = t_key;
	m_next = t_next;
}

template <class T>
Node<T>::Node(const Node<T>& src)
{
	*this = src;
}

// PUBLIC AREA
////////////////
template <class T>
T Node<T>::getKey() const
{
	return m_key;
}

template <class T>
Node<T>* Node<T>::getNext() const
{
	return m_next;
}

template <class T>
void Node<T>::setKey(const T& t_key)
{
	m_key = t_key;
}

template <class T>
void Node<T>::setNext(Node<T>* t_next)
{
	m_next = t_next;
}

// Operator Overloading
///////////////////////
template <class T>
Node<T>& Node<T>::operator=(const Node<T>& src)
{
	m_key = src.m_key;
	m_next = src.m_next;
}
#endif // !_NODE_IMPL
