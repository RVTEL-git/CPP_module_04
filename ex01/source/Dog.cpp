/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 12:34:32 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/30 17:46:53 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog( void ) : Animal("Dog")
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->_brain = new Brain();
	return;
}

Dog::Dog( const Dog &copy)
{
	std::cout << "Copy constructor Dog class called" << std::endl;
	*this = copy;
	this->_brain = new Brain( *copy._brain );
	return ;
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
	return;
}

Dog &Dog::operator=( const Dog &rhs)
{
	std::cout << "Dog copy assignment called" << std::endl;
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		delete _brain;
		this->_brain = new Brain( *rhs._brain );
	}
	return (*this);
}

Brain* Dog::getBrain() const
{
	return (this->_brain);
}

void Dog::makeSound( void ) const
{
	std::cout << "WAF WAF" << std::endl;
	return;
}

void	Dog::setIdea( int index, std::string idea)
{
	this->_brain->setIdea(index, idea);
}

std::string		Dog::getIdea( int index ) const
{
	return (this->_brain->getIdea(index));
}