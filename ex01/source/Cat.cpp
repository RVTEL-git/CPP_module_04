/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 12:50:37 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/30 17:46:50 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat( void ) : Animal("Cat")
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->_brain = new Brain();
	return;
}

Cat::Cat( const Cat &copy)
{
	std::cout << "Copy constructor Cat class called" << std::endl;
	*this = copy;
	this->_brain = new Brain( *copy._brain );
	return ;
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
	return;
}

Cat &Cat::operator=( const Cat &rhs)
{
	std::cout << "Cat copy assignment called" << std::endl;
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		delete _brain;
		this->_brain = new Brain( *rhs._brain );
	}
	return (*this);
}

Brain* Cat::getBrain() const
{
	return (this->_brain);
}

void Cat::makeSound( void ) const
{
	std::cout << "MEOW MEOW" << std::endl;
	return;
}

void	Cat::setIdea( int index, std::string idea)
{
	this->_brain->setIdea(index, idea);
}

std::string		Cat::getIdea( int index ) const
{
	return (this->_brain->getIdea(index));
}