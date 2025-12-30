/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:29:56 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/29 14:33:02 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include "Brain.hpp"

class WrongCat : public WrongAnimal
{
	private:
		Brain *_brain;
	public:
		WrongCat( void );
		WrongCat( const WrongCat &copy );
		~WrongCat( void );

		WrongCat		&operator=(const WrongCat &rhs);
		virtual void	makeSound( void ) const ;
		void			setIdea( int index, std::string idea);
		std::string		getIdea( int index ) const ;
};

#endif