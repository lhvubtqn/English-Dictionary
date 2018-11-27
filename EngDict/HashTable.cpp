#ifndef _HASHTABLE_IMPL
#define _HASHTABLE_IMPL

#include <functional>
#include "HashTable.h"

int HashTable::getHash(const Expression &src) const
{
	std::string key = src.getWordLowercase();
	std::hash<std::string> hash;
	return (hash(key) % m_rowCount + m_rowCount) % m_rowCount;
}

HashTable::HashTable()
{
	m_table = nullptr;
}

HashTable::HashTable(int t_rowCount)
{
	m_rowCount = t_rowCount;
	m_table = new SinglyLinkedList<Expression>[t_rowCount];
}

HashTable::~HashTable()
{
	delete[] m_table;
}

int HashTable::getRowCount() const
{
	return m_rowCount;
}

int HashTable::getTotal() const
{
	int total = 0;
	for (int i = 0; i < m_rowCount; ++i)
		total += m_table[i].getLength();
	return total;
}

bool HashTable::search(const Expression &t_expression, Expression& result) const
{
	SinglyLinkedList<Expression> list = m_table[getHash(t_expression)];
	return list.search(t_expression, result);
}

void HashTable::insert(const Expression &t_expression)
{
	Expression tmp;
	if (search(t_expression, tmp)) return;
	m_table[getHash(t_expression)].insert(t_expression);
}

void HashTable::remove(const Expression &t_expression)
{
	m_table[getHash(t_expression)].remove(t_expression);
}

void HashTable::inorderTraversal(std::vector<Expression>& result)
{
	for (int i = 0; i < m_rowCount; ++i)
	{
		std::vector<Expression> tmp = m_table[i].toVector();
		for (int j = 0; j < int(tmp.size()); ++j)
			result.push_back(tmp[j]);
	}
}

#endif // !_HASHTABLE_IMPL
