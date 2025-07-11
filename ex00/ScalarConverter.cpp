/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 16:23:54 by spitul            #+#    #+#             */
/*   Updated: 2025/07/11 17:22:45 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <limits>

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
	if (str.compare("nanf") == 0 || str.compare("nan") == 0)
		return NAN;
	if (str.compare("-inff") == 0 || str.compare("-inf") == 0)
		return INF_NEG;
	if (str.compare("+inff") == 0 || str.compare("+inf") == 0)
		return INF_POS;
	
	
}
