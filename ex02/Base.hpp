/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 21:00:38 by spitul            #+#    #+#             */
/*   Updated: 2025/07/17 21:08:22 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

class Base
{
	public:
		virtual ~Base();
};

class A	: public Base
{
	
};

class B	: public Base
{
	
};

class C	: public Base
{
	
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
