/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 15:41:43 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/30 14:12:10 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice( void );
		Ice(const Ice &copy);
		~Ice();

		Ice& operator=(const Ice &rhs);
		AMateria* clone( void ) const;
		void use(ICharacter& target);
};

#endif 