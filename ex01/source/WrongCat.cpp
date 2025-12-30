/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:32:02 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/30 17:47:06 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")
{
	std::cout << "Default WrongCat constructor called" << std::endl;
	this->_brain = new Brain();
	return;
}

WrongCat::WrongCat( const WrongCat &copy)
{
	std::cout << "Copy constructor WrongCat class called" << std::endl;
	*this = copy;
	this->_brain = new Brain( *copy._brain );
	return ;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor called" << std::endl;
	delete _brain;
	return;
}

WrongCat &WrongCat::operator=( const WrongCat &rhs)
{
	std::cout << "WrongCat copy assignment called" << std::endl;
	if (this != &rhs)
	{
		WrongAnimal::operator=(rhs);
		delete _brain;
		this->_brain = new Brain( *rhs._brain );
	}
	return (*this);
}

void WrongCat::makeSound( void ) const
{
	std::cout << "WRONG MEOW MEOW" << std::endl;
	return;
}