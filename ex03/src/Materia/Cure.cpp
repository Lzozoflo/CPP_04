/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 13:38:54 by fcretin           #+#    #+#             */
/*   Updated: 2025/06/04 11:38:14 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cure.hpp"


/*---------------constructor------Canonical-------destructor----------------*/

Cure::Cure( void ) : AMateria("cure")
{

}


Cure::Cure( const Cure &other )
{
	this->_Type = other._Type;
}


Cure &Cure::operator=( const Cure &other )
{

	std::cout << BLUE << "Operator Cure '=' is Called" << RESET << std::endl;
	if (this != &other)
		this->_Type = other._Type;


	return	*this;
}


Cure::~Cure( void )
{
}


/*---------------constructor------Canonical-------destructor----------------*/


/*--------constructor----destructor--------*/


Cure::Cure(std::string const & type) : AMateria(type)
{
	// this->_Type = type;
}


/*--------constructor----destructor--------*/




/*----func----*/


std::string const & Cure::getType() const {return (this->_Type);}


AMateria* Cure::clone() const
{
	return (new Cure("cure"));
}

void Cure::use(ICharacter& target) const
{

// msg a revoir etre sur TODO



	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

/*----func----*/

