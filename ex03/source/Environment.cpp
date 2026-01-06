/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Environment.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 14:14:34 by barmarti          #+#    #+#             */
/*   Updated: 2026/01/02 11:37:59 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Environment.hpp"
#include <iostream>

Environment::Environment( std::string place ) : _name(place), _count(0), _capacity(0), _items(NULL)
{
	std::cout << "Environment string constructor called" << std::endl;
}

Environment::~Environment()
{
	std::cout << "Environment destructor called" << std::endl;
	for(unsigned int i = 0; i < _count; i++)
		delete this->_items[i];
	if (_items != NULL)
		delete[] _items;
}

void Environment::addItem( AMateria *item )
{
	if(item == NULL)
		return;
	if (_count >= _capacity)
	{
		unsigned int newCapacity = (_capacity == 0) ? 4 : _capacity * 2;
		AMateria **newItems = new AMateria*[newCapacity];

		for (unsigned int i = 0; i < _count; i++)
			newItems[i] = _items[i];
		delete[]_items;
		_items = newItems;
		_capacity = newCapacity;
	}
	_items[_count] = item;
	_count++;
}

const std::string &Environment::getName( void ) const
{
	return(this->_name);
}

unsigned int	Environment::getCount( void ) const
{
	return(this->_count);
}