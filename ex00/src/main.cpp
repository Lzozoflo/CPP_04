/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:06:45 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/31 10:19:31 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " const Animal* j = new Dog();" << std::endl;
		std::cout << i->getType() << " const Animal* i = new Cat();" << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		delete i;
		delete j;
		delete meta;
	}

	std::cout << "\n------------------------\n" << std::endl;

	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		// const WrongCat* i = new WrongCat();
		std::cout << i->getType() << " const WrongAnimal* i = new WrongCat();" << std::endl;
		i->makeSound(); //will output the WrongAnimal sound!
		meta->makeSound();

		delete i;
		delete meta;
	}

	return 0;
}
