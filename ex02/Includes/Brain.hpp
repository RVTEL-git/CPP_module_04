/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 13:39:06 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/30 15:31:47 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
	private:
		std::string	_ideas[100];
	public:
		Brain();
		Brain( Brain const &src );
		~Brain();

		Brain		&operator=( const Brain &rhs );

		void		setIdea( int index, std::string idea);
		std::string	getIdea( int index ) const ;
};

#endif