/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:06:45 by fcretin           #+#    #+#             */
/*   Updated: 2025/06/09 08:57:52 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


int main()
{
	{
		Animal a;
		a.makeSound();
	}

	std::cout << "\n------------------------\n" << std::endl;

	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " const Animal* j = new Dog();" << std::endl;
		std::cout << i->getType() << " const Animal* i = new Cat();" << std::endl;
		j->makeSound();//will output the dog sound!
		i->makeSound(); //will output the cat sound!
		meta->makeSound();//will output the not define animal sound!

		delete i;
		delete j;
		delete meta;
	}

	std::cout << "\n------------------------\n" << std::endl;

	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		std::cout << i->getType() << " const WrongAnimal* i = new WrongCat();" << std::endl;
		i->makeSound(); //will output the WrongAnimal sound!
		meta->makeSound();

		delete i;
		delete meta;
	}

	std::cout << "\n------------------------\n" << std::endl;

	{

		const WrongCat* Wc = new WrongCat();
		const WrongAnimal* Wa = Wc;
		Wc->makeSound();
		Wa->makeSound();

		delete Wa;
	}

	return 0;
}
