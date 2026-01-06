/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:20:26 by barmarti          #+#    #+#             */
/*   Updated: 2026/01/02 11:34:15 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character( std::string const &name) : _name(name)
{
	std::cout << "Default Character constructor called" << std::endl;
	std::fill(_inventory, _inventory + 4, static_cast<AMateria*>(NULL));
	_floor = new Environment("Ground");
}

Character::Character( const Character &cpy ) : _name(cpy._name)
{
	std::cout << "Copy Character constructor called" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		if(cpy._inventory[i] != NULL)
			this->_inventory[i] = cpy._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
}

Character::~Character( void )
{
	std::cout << "Character destructor called" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		if(this->_inventory[i] != NULL)
			delete _inventory[i];
	}
	delete _floor;
}

Character &Character::operator=(const Character &rhs)
{
	std::cout << "Copy assignment Character called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		for(int i = 0; i < 4; i++)
		{
			if(this->_inventory[i] != NULL)
				delete _inventory[i];
		}
		for(int i = 0; i < 4; i++)
		{
			if(rhs._inventory[i] != NULL)
				this->_inventory[i] = rhs._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return(*this);
}

const std::string &Character::getName( void ) const
{
	return(this->_name);
}

void Character::equip( AMateria *materia )
{
	for(int i = 0; i < 4; i++)
	{
		if(this->_inventory[i] == NULL)
		{
			this->_inventory[i] = materia;
			return;
		}
	}
	std::cout << this->getName() << "'s inventory is full" << std::endl;
	return;
}

void Character::unequip( int index )
{
	if(index < 0 || index > 3 || _inventory[index] == NULL)
		return;
	_floor->addItem(_inventory[index]);
	_inventory[index] = NULL;
}

void Character::use ( int index, ICharacter &target )
{
	if(index < 0 || index > 3 || _inventory[index] == NULL)
		return;
	_inventory[index]->use(target);
}