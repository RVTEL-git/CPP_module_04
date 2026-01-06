/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 12:53:31 by barmarti          #+#    #+#             */
/*   Updated: 2026/01/02 14:43:10 by barmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	const Animal* meta = new Animal();
	const Animal* i = new Dog();
	const Animal* j = new Cat();


	std::cout << i->getType() << " ";
	i->makeSound();
	if (i->getBrain())
	{
		i->getBrain()->setIdea(5, "Play with the ball");
		std::cout << i->getType() << " " << i->getBrain()->getIdea(5) << std::endl;
	}
	std::cout << j->getType() << " ";
	j->makeSound();
	std::cout << meta->getType() << " ";
	meta->makeSound();

	delete meta;
	delete i;
	delete j;


	return (0);
}