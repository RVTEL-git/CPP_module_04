/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 12:49:27 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/29 14:55:25 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*_brain;
	public:
		Cat( void );
		Cat( const Cat &copy );
		~Cat( void );

		Cat				&operator=(const Cat &rhs);

		virtual Brain* getBrain() const ;
		virtual void	makeSound( void ) const ;

		void			setIdea( int index, std::string idea);
		std::string		getIdea( int index ) const ;
};

#endif