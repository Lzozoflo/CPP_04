/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:45:24 by fcretin           #+#    #+#             */
/*   Updated: 2025/06/05 14:21:52 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

/*------Canonical-------*/

MateriaSource::MateriaSource( void )
{
	for (size_t i = 0; i < 4; i++)
		this->_Inventory[i] = NULL;
}

MateriaSource::MateriaSource(  MateriaSource &other )
{
	for (size_t i = 0; i < 4; i++)
		this->_Inventory[i] = other._Inventory[i]->clone();

}

MateriaSource	&MateriaSource::operator=(  MateriaSource &other )
{
	if (this != &other)
	{
		for (size_t i = 0; i < 4; i++){

			if (this->_Inventory[i] != NULL)
				delete(this->_Inventory[i]);
			this->_Inventory[i] = NULL;
			if (other._Inventory[i] != NULL)
				this->_Inventory[i] = other._Inventory[i]->clone();
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
		if (this->_Inventory[i] != NULL)
			delete this->_Inventory[i];
}

/*------Canonical-------*/

/*----func----*/

void MateriaSource::learnMateria(AMateria *NewMateria)
{

	for (size_t i = 0; i < 4; i++){
		if (this->_Inventory[i] == NewMateria){
			std::cout << "This materia is already registered" << std::endl;
			return ;
		}
		if (this->_Inventory[i] == NULL){
			this->_Inventory[i] = NewMateria;
			return ;
		}
	}

}


AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (size_t i = 0; i < 4; i++){

		if (this->_Inventory[i] != NULL && this->_Inventory[i]->getType() == type){
			return (this->_Inventory[i]->clone());
		}
	}
	return (NULL);

}


/*----func----*/
