#ifndef _EXPRESSION_H
#define _EXPRESSION_H

#include <regex>
#include <string>

class Expression
{
private:
	std::string m_expression;

	std::string getExpression
	(
		const std::string& t_word,
		const std::string& t_definition,
		const std::string& t_origin,
		const std::string& t_usage
	) const;

public:
	Expression();
	Expression(const std::string& t_expression);
	Expression(
		const std::string& t_word,
		const std::string& t_definition,
		const std::string& t_origin,
		const std::string& t_usage
	);

public:
	std::string getExpression() const;
	std::string getWord() const;
	std::string getWordLowercase() const;
	std::string getDefinition() const;
	std::string getOrigin() const;
	std::string getUsage() const;

	void setExpression(const std::string& t_expression);
	void setWord(const std::string& t_word);
	void setDefinition(const std::string& t_definition);
	void setOrigin(const std::string& t_origin);
	void setUsage(const std::string& t_usage);

	bool operator<(const Expression& rhs) const;
	bool operator<=(const Expression& rhs) const;
	bool operator>(const Expression& rhs) const;
	bool operator>=(const Expression& rhs) const;
	bool operator==(const Expression& rhs) const;
	bool operator!=(const Expression& rhs) const;
};

#endif // !_EXPRESSION_H