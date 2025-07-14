/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 16:23:54 by spitul            #+#    #+#             */
/*   Updated: 2025/07/13 20:41:10 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <limits>
#include <cctype>

// ScalarConverter::ScalarConverter()
// {

// }

// ScalarConverter::~ScalarConverter()
// {

// }

// ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other)
// {
// 	(void)other;

// 	return (*this);
// }

// ScalarConverter::ScalarConverter(const ScalarConverter &other)
// {
// 	(void)other;
// }

int ScalarConverter::getType(std::string &str)
{
	int	i = 0;
	bool	dot = false;
	bool	decimal = false;
	
	if (str.compare("nanf") == 0 || str.compare("nan") == 0)
		return NAN;
	if (str.compare("-inff") == 0 || str.compare("-inf") == 0)
		return INF_NEG;
	if (str.compare("+inff") == 0 || str.compare("+inf") == 0)
		return INF_POS;
	
	if (str.length() == 1 && isprint(static_cast<unsigned char>(str[0])))
		return CHAR;
	while (i < str.length())
	{
		if (str[i] == '.')
			dot = true;
		if (isdigit(static_cast<unsigned char>(str[i])) == 0)
			return MISMATCH;
		if(dot)
		{
			decimal = true;
			if ()
		
				
	} 
	
}
