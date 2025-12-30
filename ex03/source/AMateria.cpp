/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 15:28:13 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/30 15:32:05 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria( std::string const & type ) : type(type)
{
	std::cout << "AMateria constructor called" << std:: endl;
}

AMateria::AMateria( const AMateria &copy ) : type(copy.type)
{
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria& AMateria::operator=( const AMateria &rhs )
{
	(void)rhs;
	return *this;
}

std::string const & AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}