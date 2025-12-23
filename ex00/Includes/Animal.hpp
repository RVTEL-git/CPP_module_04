/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 11:29:21 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/23 13:15:07 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>


class Animal
{
	protected:
		std::string	_type;
	public:
		Animal( void );
		Animal( const std::string &type );
		virtual ~Animal( void );

		Animal &operator=( const Animal &rhs);
		virtual const std::string &getType( void ) const ;

		virtual void makeSound( void ) const ;
};

#endif