/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:31:23 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/30 17:47:30 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal( void ) : _type("Default_type")
{
	std::cout << "Default constructor WrongAnimal class called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( const std::string &type ) : _type(type)
{
	std::cout << "String constructor WrongAnimal class called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal( const WrongAnimal &copy) : _type(copy._type)
{
	std::cout << "Copy constructor WrongAnimal class called" << std::endl;
	*this = copy;
	return ;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "Destructor WrongAnimal class called" << std::endl;
	return ;
}

WrongAnimal	&WrongAnimal::operator=( const WrongAnimal &rhs )
{
	std::cout << "WrongAnimal copy assignement called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

const std::string &WrongAnimal::getType( void ) const
{
	return (this->_type);
}

void WrongAnimal::makeSound( void ) const
{
	std::cout << "Some randome WrongAnimal noise" << std::endl;
	return;
}