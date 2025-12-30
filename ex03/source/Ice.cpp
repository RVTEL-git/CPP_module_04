/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 15:41:50 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/30 17:34:19 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice")
{
	std::cout << "Default Ice constructor called" << std::endl;
}

Ice::Ice(const Ice &copy) : AMateria(copy)
{
	std::cout << "Cpoy Ice constructor called" << std::endl;
}

Ice:: ~Ice( void )
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice& Ice::operator=(const Ice &rhs)
{
	if(this != &rhs)
		AMateria::operator=(rhs);
	return (*this);
}

AMateria* Ice::clone( void ) const
{
	return (new Ice( *this ));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}