#ifndef _HASHTABLE_H
#define _HASHTABLE_H

#include <vector>
#include "Expression.h"
#include "SinglyLinkedList.h"

class HashTable
{
private:
	int m_rowCount;
	SinglyLinkedList<Expression>* m_table;
	int getHash(const Expression&) const;

public:
	HashTable();
	HashTable(int t_rowCount);
	~HashTable();

	int getRowCount() const;
	int getTotal() const;
	bool search(const Expression&, Expression&) const;

	void insert(const Expression&);
	void remove(const Expression&);

	void inorderTraversal(std::vector<Expression>& result);
};

#endif // !_HASHTABLE_H

