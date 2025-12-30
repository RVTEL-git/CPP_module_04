/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:43:48 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/30 17:46:20 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain( void )
{
	std::cout << "Brain default constructor called" << std::endl;
	return ;
}

Brain::Brain( Brain const &src )
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
	return ;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

Brain &Brain::operator=( const Brain &rhs )
{
	if (this != &rhs)
	{
		std::cout << "Brain copy assignment called" << std::endl;
		for (int i = 0; i < 100; i++)
			_ideas[i] = rhs._ideas[i];
	}
	return ( *this );
}

void Brain::setIdea( int index, std::string idea )
{
	if (index >= 0 && index < 100)
		_ideas[index] = idea;
}

std::string Brain::getIdea( int index ) const
{
	if (index >= 0 && index < 100)
		return (_ideas[index]);
	return ( NULL );
}
