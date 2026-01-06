/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 12:34:32 by barmarti          #+#    #+#             */
/*   Updated: 2026/01/06 11:25:48 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog( void ) : Animal("Dog")
{
	std::cout << "Default Dog constructor called" << std::endl;
	return;
}

Dog::Dog( const Dog &copy) :  Animal(copy)
{
	std::cout << "Copy constructor Dog class called" << std::endl;
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called" << std::endl;
	return;
}

Dog &Dog::operator=( const Dog &rhs)
{
	std::cout << "Dog copy assignment called" << std::endl;
	if (this != &rhs)
		Animal::operator=(rhs);
	return (*this);
}

void Dog::makeSound( void ) const
{
	std::cout << "WAF WAF" << std::endl;
	return;
}