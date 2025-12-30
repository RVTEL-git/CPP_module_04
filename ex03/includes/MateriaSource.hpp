/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 15:23:29 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/30 17:09:21 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <string>

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_materia[4];
	public:
		MateriaSource();
		MateriaSource( const MateriaSource &src );
		virtual ~MateriaSource();
		
		MateriaSource	&operator=( const MateriaSource &rhs );
		void			learnMateria( AMateria *materia);
		AMateria		*createMateria( const std::string &type );
};

#endif