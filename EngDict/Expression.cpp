#include "Expression.h"

Expression::Expression()
{
	m_expression = "";
}

Expression::Expression(const std::string& t_expression)
{
	m_expression = t_expression;
}

Expression::Expression(const std::string & t_word, const std::string & t_definition, const std::string & t_origin, const std::string & t_usage)
{
	m_expression = getExpression(t_word, t_definition, t_origin, t_usage);
}

std::string Expression::getWordLowercase() const
{
	std::string word("");
	for (int i = 0; i < int(m_expression.length()); i++)
	{
		if (m_expression[i] == ' ' && i + 1 < int(m_expression.length()) 
			&& m_expression[i + 1] == ' ') break;

		if (m_expression[i] >= 'A' && m_expression[i] <= 'Z'
			|| m_expression[i] >= 'a' && m_expression[i] <= 'z'
			|| m_expression[i] == ' ')
		{
			word += tolower(m_expression[i]);
		}
	}
	return word;
}

std::string Expression::getExpression
(
	const std::string& t_word,
	const std::string& t_definition,
	const std::string& t_origin,
	const std::string& t_usage
) const
{
	std::string result("");
	result = t_word + "  " + t_definition + ".";

	if (t_origin != "") result = result + " [" + t_origin + "]";
	if (t_usage != "") result = result + "\n\nUsage  " + t_usage + ".";
	return result;
}

std::string Expression::getExpression() const
{
	return m_expression;
}

std::string Expression::getWord() const
{
	std::regex format("-?([A-Z a-z]+)-?\\s{2}(.*)\\.\\s*(?:\\[(.*)\\])?(?:\\s*Usage\\s{2}(.*)\\.)?");
	std::smatch result;
	std::regex_match(m_expression, result, format);
	return result[1].str();
}

std::string Expression::getDefinition() const
{
	std::regex format("-?([A-Z a-z]+)-?\\s{2}(.*)\\.\\s*(?:\\[(.*)\\])?(?:\\s*Usage\\s{2}(.*)\\.)?");
	std::smatch result;
	std::regex_match(m_expression, result, format);
	return result[2].str();
}

std::string Expression::getOrigin() const
{
	std::regex format("-?([A-Z a-z]+)-?\\s{2}(.*)\\.\\s*(?:\\[(.*)\\])?(?:\\s*Usage\\s{2}(.*)\\.)?");
	std::smatch result;
	std::regex_match(m_expression, result, format);
	return result[3].str();
}

std::string Expression::getUsage() const
{
	std::regex format("-?([A-Z a-z]+)-?\\s{2}(.*)\\.\\s*(?:\\[(.*)\\])?(?:\\s*Usage\\s{2}(.*)\\.)?");
	std::smatch result;
	std::regex_match(m_expression, result, format);
	return result[4].str();
}

void Expression::setExpression(const std::string & t_expression)
{
	m_expression = t_expression;
}

void Expression::setWord(const std::string & t_word)
{
	m_expression 
		= getExpression(
			t_word, getDefinition(), 
			getOrigin(), getUsage()
		);
}

void Expression::setDefinition(const std::string & t_definition)
{
	m_expression
		= getExpression(
			getWord(), t_definition,
			getOrigin(), getUsage()
		);
}

void Expression::setOrigin(const std::string & t_origin)
{
	m_expression
		= getExpression(
			getWord(), getDefinition(),
			t_origin, getUsage()
		);
}

void Expression::setUsage(const std::string & t_usage)
{
	m_expression
		= getExpression(
			getWord(), getDefinition(),
			getOrigin(), t_usage
		);
}

bool Expression::operator<(const Expression & rhs) const
{
	return getWordLowercase() < rhs.getWordLowercase();
}

bool Expression::operator<=(const Expression & rhs) const
{
	return getWordLowercase() <= rhs.getWordLowercase();
}

bool Expression::operator>(const Expression & rhs) const
{
	return getWordLowercase() > rhs.getWordLowercase();
}

bool Expression::operator>=(const Expression & rhs) const
{
	return getWordLowercase() >= rhs.getWordLowercase();
}

bool Expression::operator==(const Expression & rhs) const
{
	return getWordLowercase() == rhs.getWordLowercase();
}

bool Expression::operator!=(const Expression & rhs) const
{
	return getWordLowercase() != rhs.getWordLowercase();
}
