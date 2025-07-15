/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:08:33 by spitul            #+#    #+#             */
/*   Updated: 2025/07/15 08:30:38 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (std::cout << "Wrong Input" << std::endl, 1);
	
	ScalarConverter::convert(argv[1]);
	return 0;
}
