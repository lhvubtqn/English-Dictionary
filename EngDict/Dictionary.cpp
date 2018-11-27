#ifndef DICTIONARY_IMPL_
#define DICTIONARY_IMPL_

#include <fstream>
#include <regex>
#include <sstream>
#include <vector>
#include "Dictionary.h"

using namespace std;

Dictionary::Dictionary()
{
    m_data = new HashTable(1000003);
}

Dictionary::Dictionary(const std::string& fileInput, bool isFile)
{
	m_data = new HashTable(1000003);
	if (isFile)
	{
		load(fileInput);
		return;
	}
	string input = fileInput;
	stringstream strstream;
	strstream << fileInput;
	load(strstream);
}

Dictionary::~Dictionary()
{
    delete m_data;
}

int Dictionary::getTotal() const
{
	return m_data->getTotal();
}

bool Dictionary::search(const std::string &t_word)
{
	Expression expression;
	if (m_data->search(Expression(t_word), expression))
	{
		return true;
	}
	return false;
}

bool Dictionary::search(const std::string &t_word, std::string& result)
{
	Expression expression;
	if (m_data->search(Expression(t_word), expression))
	{
		result = expression.getExpression();
		return true;
	}
	return false;
}

bool Dictionary::search(const std::string &t_word, Expression& result)
{
	Expression expression;
	if (m_data->search(Expression(t_word), expression))
	{
		result = expression;
		return true;
	}
	return false;
}

void Dictionary::insert(const string &t_expression)
{
    m_data->insert(Expression(t_expression));
}

void Dictionary::modifyDefinition(const string &t_word, const string &t_definition)
{
	Expression expression;
	if (m_data->search(Expression(t_word), expression))
	{
		m_data->remove(t_word);
		expression.setDefinition(t_definition);
		m_data->insert(expression);
	}
}

void Dictionary::modifyOrigin(const string& t_word, const string& t_origin)
{
	Expression expression;
	if (m_data->search(Expression(t_word), expression))
	{
		m_data->remove(expression);
		expression.setOrigin(t_origin);
		m_data->insert(expression);
	}
}

void Dictionary::modifyUsage(const string& t_word, const string& t_usage)
{
	Expression expression;
	if (m_data->search(Expression(t_word), expression))
	{
		m_data->remove(expression);
		expression.setUsage(t_usage);
		m_data->insert(expression);
	}
}

void Dictionary::remove(const string &t_key)
{
    m_data->remove(Expression(t_key));
}

string getWord(const string& src)
{
	std::string word("");
	for (int i = 0; i < int(src.length()); i++)
	{
		if (src[i] == ' ' && i + 1 < int(src.length())
			&& src[i + 1] == ' ') break;

		if (src[i] >= 'A' && src[i] <= 'Z'
			|| src[i] >= 'a' && src[i] <= 'z'
			|| src[i] == ' ')
		{
			word += tolower(src[i]);
		}
	}
	return word;
}

bool Dictionary::load(const string &t_file)
{
    ifstream file;
    file.open(t_file);
    if (!file) return false;

	load(file);
    
    file.close();
    return true;
}

void Dictionary::load(std::istream & file)
{
	regex format("-?[A-Za-z]+-?\\s{2}.*|Usage.*");

	vector<string> string_input;
	string line;

	while (getline(file, line))
	{
		if (regex_match(line, format))
		{
			if (getWord(line) == "usage")
			{
				string_input[string_input.size() - 1] += "\n\n" + line;
			}
			else
			{
				string_input.push_back(line);
			}
		}
	}

	for (int i = 0; i < int(string_input.size()); i++)
	{
		Expression expression(string_input[i]);
		m_data->insert(expression);
	}
}

void Dictionary::save(const string &t_file)
{
	vector<Expression> res;
	m_data->inorderTraversal(res);

	ofstream out;
	out.open(t_file);

	for (int i = 0; i < int(res.size()); ++i)
	{
		out << res[i].getExpression() << "\n\n";
	}

    out.close();
}

void Dictionary::getAllExpression(std::vector<Expression>& vt)
{
	m_data->inorderTraversal(vt);
}

#endif // !DICTIONARY_IMPL_