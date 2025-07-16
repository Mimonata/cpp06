/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 21:07:09 by spitul            #+#    #+#             */
/*   Updated: 2025/07/16 21:12:28 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

class Data
{
	private:
		int	_val;
	
	public:
		Data(int val);
		Data(const Data &other);
		Data& operator=(const Data &other);
		~Data();
};

#endif
