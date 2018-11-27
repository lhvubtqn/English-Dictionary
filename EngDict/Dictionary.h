#ifndef DICTIONARY_H_
#define DICTIONARY_H_

#include "Expression.h"
#include "HashTable.h"

class Dictionary
{
private:
	HashTable* m_data;

public:
    Dictionary();
	Dictionary(const std::string& fileInput, bool isFile = true);
    ~Dictionary();

	int getTotal() const;
	bool search(const std::string &t_word);
    bool search(const std::string &t_word, std::string& result);
	bool search(const std::string &t_word, Expression& result);

    void insert(const std::string& t_key);
    void modifyDefinition(const std::string& t_word, const std::string& t_definition);
    void modifyOrigin(const std::string& t_word, const std::string& t_origin);
    void modifyUsage(const std::string& t_word, const std::string& t_usage);
    void remove(const std::string& t_key);

    bool load(const std::string& t_file);
	void load(std::istream& inp);
    void save(const std::string& t_file);

	void getAllExpression(std::vector<Expression>& vt);
};

#endif // !DICTIONARY_H_
