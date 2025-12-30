/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 15:41:40 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/29 15:48:24 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure( void );
		Cure(const Cure &copy);
		~Cure();

		Cure& operator=(const Cure &rhs);
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif 