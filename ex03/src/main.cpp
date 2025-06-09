/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:06:45 by fcretin           #+#    #+#             */
/*   Updated: 2025/06/09 09:33:32 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


int main()
{

	AMateria* tmp;
	ICharacter* me = new Character("me");
	IMateriaSource* src = new MateriaSource();


	src->learnMateria(new Ice());
	src->learnMateria(new Cure());


	//add
	tmp = src->createMateria("ice");
	me->equip(tmp);

	//deleted
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->unequip(1);
	delete tmp;


	//add
	tmp = src->createMateria("ice");
	me->equip(tmp);
	//add
	tmp = src->createMateria("ice");
	me->equip(tmp);




	tmp = src->createMateria("ice");
	// tmp = src->createMateria("cure");
	me->equip(tmp);
	// me->unequip(3);
	// delete tmp;


	ICharacter* bob = new Character("mich");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);


	delete bob;
	delete me;
	delete src;

	return 0;
}
