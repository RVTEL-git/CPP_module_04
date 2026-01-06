/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 11:39:46 by barmarti          #+#    #+#             */
/*   Updated: 2026/01/02 14:34:38 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal( void ) : _type("Default_type")
{
	std::cout << "Default constructor Animal class called" << std::endl;
	return ;
}

Animal::Animal ( const std::string &type ) : _type(type)
{
	std::cout << "String constructor Animal class called" << std::endl;
	return ;
}

Animal::Animal( const Animal &copy) : _type(copy._type)
{
	std::cout << "Copy constructor Animal class called" << std::endl;
	return ;
}

Animal::~Animal( void )
{
	std::cout << "Destructor Animal class called" << std::endl;
	return ;
}

Animal	&Animal::operator=( const Animal &rhs )
{
	std::cout << "Animal copy assignement called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

Brain *Animal::getBrain( void ) const
{
	return (NULL);
}

const std::string &Animal::getType( void ) const
{
	return (this->_type);
}

void Animal::makeSound( void ) const
{
	std::cout << "Some randome animal noise" << std::endl;
	return;
}