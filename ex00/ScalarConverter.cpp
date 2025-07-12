/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 16:23:54 by spitul            #+#    #+#             */
/*   Updated: 2025/07/12 18:32:21 by spitul           ###   ########.fr       */
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
		
	} 
	
}
