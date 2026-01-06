/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:29:13 by barmarti          #+#    #+#             */
/*   Updated: 2026/01/02 14:24:52 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>


class WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongAnimal( void );
		WrongAnimal( const std::string &type );
		WrongAnimal( const WrongAnimal &copy );
		virtual ~WrongAnimal( void );

		WrongAnimal &operator=( const WrongAnimal &rhs);
		virtual const std::string &getType( void ) const ;

		void makeSound( void ) const ;
};

#endif