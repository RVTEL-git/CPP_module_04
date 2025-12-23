/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 12:34:32 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/23 13:12:11 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal("dog")
{
	std::cout << "Default Dog constructor called" << std::endl;
	return;
}

Dog::Dog( const std::string &type ) : Animal("dog")
{
	(void)type;
	std::cout << "string Dog constructor called" << std::endl;
	return;
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called" << std::endl;
	return;
}

Dog &Dog::operator=( const Dog &rhs)
{
	if (this != &rhs)
		Animal::operator=(rhs);
	return (*this);
}

void Animal::makeSound( void )
{
	std::cout << "WAF WAF" << std::endl;
	return;
}