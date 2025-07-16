/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 21:12:39 by spitul            #+#    #+#             */
/*   Updated: 2025/07/16 21:16:29 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(int val)	: _val(val)
{
	
}

Data::Data(const Data &other)	: _val(other._val)
{
	
}
		
Data& Data::operator=(const Data &other)
{
	if (this != &other)
		_val = other._val;
	return *this;
}

Data::~Data()
{
}
