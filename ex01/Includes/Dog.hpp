/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 11:50:00 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/29 14:55:32 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*_brain;
	public:
		Dog( void );
		Dog( const Dog &copy );
		~Dog( void );

		Dog				&operator=(const Dog &rhs);

		virtual void	makeSound( void ) const ;
		virtual Brain* getBrain() const ;
	
		void			setIdea( int index, std::string idea);
		std::string		getIdea( int index ) const ;
};

#endif