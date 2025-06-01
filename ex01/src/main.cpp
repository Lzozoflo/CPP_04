/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:06:45 by fcretin           #+#    #+#             */
/*   Updated: 2025/06/01 12:02:15 by fcretin          ###   ########.fr       */
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
	std::cout << "------------------------------------------------" << std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " const Animal* j = new Dog();" << std::endl;
		std::cout << i->getType() << " const Animal* i = new Cat();" << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();//will output the dog sound!
		meta->makeSound();

		delete i;
		delete j;
		delete meta;
	}
	std::cout << "------------------------------------------------" << std::endl;
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		std::cout << i->getType() << " const WrongAnimal* i = new WrongCat();" << std::endl;
		i->makeSound(); //will output the WrongAnimal sound!
		meta->makeSound(); //will output the WrongAnimal sound!

		delete i;
		delete meta;
	}
	std::cout << "------------------------------------------------" << std::endl;
	{
		Animal* tab[10];
		for (int i = 0; i <= 9; i++){

			if (i < 5)
				tab[i] = new Dog();
			else
				tab[i] = new Cat();
		}

		for (int i = 0; i <= 9; i++)
			delete tab[i];
	}

	return 0;
}


// Dans votre fonction main, créez et remplissez un tableau d’objets Animal dont la
// moitié est composée d’objets Dog et l’autre moitié d’objets Cat. À la fin de l’exécution
// du programme, parcourez ce tableau afin de delete chaque Animal. Vous devez delete
// directement les chiens et les chats en tant qu’Animal. Les destructeurs correspondants
// doivent être appelés dans le bon ordre.
