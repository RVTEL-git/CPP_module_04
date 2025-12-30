/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 11:29:21 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/30 15:31:47 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Brain.hpp"
#include <string>

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal( void );
		Animal( const std::string &type );
		Animal( const Animal &copy );
		virtual ~Animal( void );

		Animal &operator=( const Animal &rhs);

		virtual const std::string &getType( void ) const ;
		virtual Brain *getBrain( void ) const;

		virtual void makeSound( void ) const = 0;
};

#endif