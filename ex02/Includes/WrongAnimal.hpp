/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:29:13 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/30 15:31:47 by barmarti         ###   ########.fr       */
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

		virtual void makeSound( void ) const ;
};

#endif