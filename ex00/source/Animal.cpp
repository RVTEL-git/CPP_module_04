/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 11:39:46 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/23 13:11:50 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

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

const std::string &Animal::getType( void ) const
{
	return (this->_type);
}