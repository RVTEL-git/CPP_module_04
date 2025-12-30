/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 17:10:37 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/30 17:45:10 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>
#include <algorithm>

MateriaSource::MateriaSource()
{
	std::cout << "Default MateriaSource constructor called" << std::endl;
	std::fill(_materia, _materia + 4, static_cast<AMateria*>(NULL));
}

MateriaSource::MateriaSource( const MateriaSource &src )
{
	std::cout << "Copy MateriaSource constructor called" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		if (src._materia[i] != NULL)
			this->_materia[i] = src._materia[i]->clone();
		else
			this->_materia[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		if (this->_materia[i] != NULL)
			delete _materia[i];
	}
}

MateriaSource &MateriaSource::operator=( const MateriaSource &rhs )
{
	std::cout << "Copy assignment called" << std::endl;
	
	if(this != &rhs)
	{
		for(int i = 0; i < 4; i++)
		{
			if (this->_materia[i] != NULL)
				delete _materia[i];
		}
		for(int i = 0; i < 4; i++)
		{
			if (rhs._materia[i] != NULL)
				this->_materia[i] = rhs._materia[i]->clone();
			else
				this->_materia[i] = NULL;
		}
	}
	return(*this);
}

void	MateriaSource::learnMateria( AMateria *materia)
{
	if(materia == NULL)
		return;
	for(int i = 0; i < 4; i++)
	{
		if(this->_materia[i] == NULL)
		{
			this->_materia[i] = materia->clone();
			return;
		}
	}
	std::cout << "can't learn inventory is full" << std::endl;
	return;
}

AMateria		*MateriaSource::createMateria( const std::string &type )
{
	for(int i = 0; i < 4; i++)
	{
		if(this->_materia[i] != NULL)
		{
			if(this->_materia[i]->getType() == type)
				return (this->_materia[i]->clone());
		}
	}
	return (NULL);
}