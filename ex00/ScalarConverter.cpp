/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 16:23:54 by spitul            #+#    #+#             */
/*   Updated: 2025/07/15 08:50:10 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <climits>
#include <cfloat>
#include <cctype>
#include <iostream>
#include <cstdlib>
#include <iomanip>

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::~ScalarConverter()
{

}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other)
{
	(void)other;

	return (*this);
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	(void)other;
}

int ScalarConverter::getType(std::string &str)
{
	size_t	i = 0;
	int	dot = 0;
	bool	decimal = false;
	// bool	fl = false;
	
	if (str.compare("nanf") == 0 || str.compare("nan") == 0)
		return NAN;
	if (str.compare("-inff") == 0 || str.compare("-inf") == 0)
		return INF_NEG;
	if (str.compare("+inff") == 0 || str.compare("+inf") == 0)
		return INF_POS;
	
	if (str.length() == 1)
		return CHAR;
	while (i < str.length())
	{
		if ((i == str.length() - 1) && str[i] == 'f' && decimal && dot == 1)
			return FLOAT;
		if (str[i] == '.')
		{
			dot ++;
			i ++;			
			continue;
		}
		else if (isdigit(static_cast<unsigned char>(str[i])) == 0 || dot > 1)
			return MISMATCH;
		if(dot != 0)
			decimal = true;
		i ++;
	} 
	if (dot == 1 && decimal)
		return DOUBLE;
	else
		return INT;
}

void	ScalarConverter::printScalar(std::string str)
{
	double	dbl;
		
	dbl = atof(str.c_str());
	std::cout << "int: ";
	if (dbl > INT_MAX || dbl < INT_MIN)
		std::cout << "impossible" << std::endl;
	else 
		std::cout << static_cast<int>(dbl) << std::endl;
	
	std::cout << "float: ";
	if (dbl > FLT_MAX || dbl < -FLT_MAX)
		std::cout << "impossible" << std::endl;
	else
		std::cout << std::fixed << std:: setprecision(1) << static_cast<float>(dbl) << "f" << std::endl;

	std::cout << "double: ";
	std::cout << dbl << std::endl;		
}

void	ScalarConverter::printChar(int c)
{
	std::cout << "char: ";
	if (isprint(c))
		std::cout << "'" << static_cast<char>(c) << "'";
	else
	{
		if (c < 0 || c > 127)
			std::cout << "impossible";
		else
			std::cout << "non displayable";
	}
	std::cout << std::endl;
}

void	ScalarConverter::printPseudoLit(int type)
{
	std::cout << "char: impossible \nint: impossible \nfloat: " << std::endl;
	
	if (type == NAN)
		std::cout << "nanf \ndouble: nan";
	else if (type == INF_NEG)
		std::cout << "-inff \ndouble: -inf";
	else if (type == INF_POS)
		std::cout << "+inff \ndouble: +inf";
	std::cout << std::endl;	
}

void ScalarConverter::convert(std::string str)
{
	int	type;

	type = getType(str);
	
	switch (type)
	{
		case CHAR:
			printChar(str[0]);
			printScalar(str);
			break;
		case INT:
		case FLOAT:
		case DOUBLE:
			printScalar(str);
			break;
		case NAN:
		case INF_NEG:
		case INF_POS:
			printPseudoLit(type);
			break;
		case MISMATCH:
			std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible\n";
			break; 
	}
}
