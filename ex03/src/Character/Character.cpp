/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:45:24 by fcretin           #+#    #+#             */
/*   Updated: 2025/06/04 13:14:38 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

/*------Canonical-------*/

Character::Character( void ) : _Name("Steve")
{
	for (size_t i = 0; i < 4; i++)
		this->_Inventory[i] = NULL;
}

Character::Character( const Character &other ) : _Name(other._Name)
{
	for (size_t i = 0; i < 4; i++)
		this->_Inventory[i] = other._Inventory[i]->clone();

}

Character	&Character::operator=( const Character &other )
{
	if (this != &other)
	{
		for (size_t i = 0; i < 4; i++){

			if (this->_Inventory[i] != NULL){
				delete(this->_Inventory[i]);
			}
			this->_Inventory[i] = NULL;
			if (other._Inventory[i] != NULL){
				std::cout << "test" << std::endl;
				this->_Inventory[i] = other._Inventory[i]->clone();
			}
		}
		this->_Name = other._Name;
	}
	return (*this);
}


Character::~Character( void )
{
	for (size_t i = 0; i < 4; i++)
		if (this->_Inventory[i] != NULL)
			delete this->_Inventory[i];
}

/*------Canonical-------*/

Character::Character( const std::string &name )	: _Name(name)
{
	for (size_t i = 0; i < 4; i++)
		this->_Inventory[i] = NULL;
}

std::string const & Character::getName() const {return (this->_Name);}


void Character::equip(AMateria* m)
{

	for (size_t i = 0; i < 4; i++){
		if (this->_Inventory[i] == NULL){
			this->_Inventory[i] = m;
			return ;
		}
	}

}


void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && this->_Inventory[idx] != NULL)
		this->_Inventory[idx] = NULL;

}


void Character::use(int idx, ICharacter& target)
{
	if ((idx >= 0 && idx < 4) && this->_Inventory[idx] != NULL)
		this->_Inventory[idx]->use(target);

}

