/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:09:09 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/30 17:45:29 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "AMateria.hpp"
#include <string>

class ICharacter
{
	public:
		virtual ~ICharacter() {}

		virtual std::string const &getName( void ) const = 0;
		virtual void equip( AMateria *materia ) = 0;
		virtual void unequip( int index ) = 0;
		virtual void use ( int index, ICharacter &target ) = 0;
};


#endif