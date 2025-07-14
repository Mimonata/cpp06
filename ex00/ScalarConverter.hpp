/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 16:23:50 by spitul            #+#    #+#             */
/*   Updated: 2025/07/13 20:40:03 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>

class ScalarConverter
{
  private:
  
	enum	type
	{
		CHAR = 1,
		INT = 2,
		FLOAT = 3,
		DOUBLE = 4,
		NAN = 5,
		INF_NEG = 6,
		INF_POS = 7,
		MISMATCH = 8
	};

	ScalarConverter();
	~ScalarConverter();
	ScalarConverter &operator=(const ScalarConverter &other);
	ScalarConverter(const ScalarConverter &other);

	int getType(std::string &str);

  public:
	static void convert(std::string str);
};

#endif
