/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:49:34 by spitul            #+#    #+#             */
/*   Updated: 2025/07/18 20:11:44 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main(void)
{
	Base	*obj = generate();
	identify(obj);
	Base	&ref = *obj;
	identify(&ref);
	
	obj = generate();
	identify(obj);
	identify(&ref);
	
	obj = generate();
	identify(obj);
	identify(&ref);
	
	obj = generate();
	identify(obj);
	identify(&ref);
	
	obj = generate();
	identify(obj);
	identify(&ref);
	
	obj = generate();
	identify(obj);
	identify(&ref);
	
	obj = generate();
	identify(obj);
	identify(&ref);
	
	obj = generate();
	identify(obj);
	identify(&ref);
	
	obj = generate();
	identify(obj);
	identify(&ref);
	
	obj = generate();
	identify(obj);
	identify(&ref);
	
	Base *obj2 = generate();
	identify(obj2);
	Base	&ref2 = *obj2;
	identify(&ref2);
	return 0;
}
