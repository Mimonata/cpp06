/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 21:08:39 by spitul            #+#    #+#             */
/*   Updated: 2025/07/18 20:13:10 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <typeinfo>

Base::~Base(){}

Base	*generate(void)
{
	//std::srand(std::time(0));
	int	r = std::rand() % 3;
	
	switch(r)
	{
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
		default:
			return NULL;
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Object class type pointed to = A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "Object class type pointed to = B\n";	
	else if (dynamic_cast<C*>(p))
		std::cout << "Object class type pointed to = C\n";
}

void identify(Base& p)
{
	try
	{
		A &tmp = dynamic_cast<A&>(p);
		std::cout << "Object class type = A\n" << &tmp;
		return ;
	}
	catch(const std::bad_cast& e)
	{
	}

	try
	{
		B &tmp = dynamic_cast<B&>(p);
		std::cout << "Object class type = B\n"<< &tmp;
		return ;

	}
	catch(const std::bad_cast& e)
	{
	}
	
	try
	{
		C &tmp = dynamic_cast<C&>(p);
		std::cout << "Object class type = C\n"<< &tmp;
		return ;
	}
	catch(const std::bad_cast& e)
	{
	}
	
	std::cout << "Unknown type\n";
}
