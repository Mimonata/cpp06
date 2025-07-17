/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 16:37:22 by spitul            #+#    #+#             */
/*   Updated: 2025/07/17 20:42:15 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"
#include <iostream>

int	main(void)
{
	Data	d(42);
	Data	*ptr = &d;
	
	uintptr_t	tmp = Serializer::serialize(ptr);
	
	std::cout << "Address hold by ptr: " << ptr << std::endl;
	std::cout << "Serialized address: " << tmp << std::endl;
	
	ptr = Serializer::deserialize(tmp);
	
	std::cout << "Deserialized address held by ptr: " << ptr << std::endl;
	
	return 0;
}
