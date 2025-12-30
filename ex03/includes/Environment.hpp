/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Environment.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 14:09:59 by barmarti          #+#    #+#             */
/*   Updated: 2025/12/30 18:01:06 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENVIRONMENT_HPP
#define ENVIRONMENT_HPP

#include "AMateria.hpp"
#include <string>

class Environment
{
	private:
		const std::string _name;
		unsigned int	_count;
		unsigned int	_capacity;
		AMateria		**_items;
	public:
		Environment( std::string place );
		~Environment();

		void				addItem( AMateria *item );
		const std::string	&getName( void ) const;
		unsigned int		getCount( void ) const;
};

#endif