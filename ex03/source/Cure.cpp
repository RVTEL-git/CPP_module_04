/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 15:41:48 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/30 17:32:09 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure( void ) : AMateria("cure")
{
	std::cout << "Default Cure constructor called" << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
	std::cout << "Cpoy Cure constructor called" << std::endl;
}

Cure:: ~Cure( void )
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure& Cure::operator=(const Cure &rhs)
{
	if(this != &rhs)
		AMateria::operator=(rhs);
	return (*this);
}

AMateria* Cure::clone( void ) const
{
	return (new Cure( *this ));
}

void Cure::use( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}