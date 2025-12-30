/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:32:02 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/30 17:47:32 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")
{
	std::cout << "Default WrongCat constructor called" << std::endl;
	return;
}

WrongCat::WrongCat( const WrongCat &copy)
{
	std::cout << "Copy constructor WrongCat class called" << std::endl;
	*this = copy;
	return ;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor called" << std::endl;
	return;
}

WrongCat &WrongCat::operator=( const WrongCat &rhs)
{
		std::cout << "WrongCat copy assignment called" << std::endl;
	if (this != &rhs)
		WrongAnimal::operator=(rhs);
	return (*this);
}

void WrongCat::makeSound( void ) const
{
	std::cout << "WRONG MEOW MEOW" << std::endl;
	return;
}