/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 12:50:37 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/23 13:06:47 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
	std::cout << "Default Cat constructor called" << std::endl;
	return;
}

Cat::Cat( const std::string &type ) : Animal("Cat")
{
	(void)type;
	std::cout << "string Cat constructor called" << std::endl;
	return;
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called" << std::endl;
	return;
}

Cat &Cat::operator=( const Cat &rhs)
{
	if (this != &rhs)
		Animal::operator=(rhs);
	return (*this);
}

void Animal::makeSound( void )
{
	std::cout << "MEOW MEOW" << std::endl;
	return;
}