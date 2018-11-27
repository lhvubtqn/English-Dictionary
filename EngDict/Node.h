#ifndef _NODE_H
#define _NODE_H

template <class T>
class Node
{
private:
    T m_key;
    Node<T>* m_next;
    
public:
    Node();
    Node(const T&);
    Node(const T&, const Node<T>*);
    Node(const Node<T>&);

public:
    T getKey() const;
    Node<T>* getNext() const;

public:
    void setKey(const T&);
    void setNext(Node<T>*);

public:
    Node<T>& operator=(const Node<T>&);
        
};

#include "Node.cpp"
#endif