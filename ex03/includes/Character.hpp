/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:16:17 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/30 18:03:32 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Environment.hpp"

class Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[4];
		Environment *_floor;
	public:
		Character( std::string const &name );
		Character( const Character &cpy );
		virtual ~Character();

		Character& operator=(const Character &rhs);

		virtual const std::string &getName( void ) const;
		virtual void equip( AMateria *materia );
		virtual void unequip( int index );
		virtual void use ( int index, ICharacter &target );
};

#endif