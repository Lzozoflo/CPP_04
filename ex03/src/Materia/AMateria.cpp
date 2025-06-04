/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 13:38:54 by fcretin           #+#    #+#             */
/*   Updated: 2025/06/04 11:33:31 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"


/*---------------constructor------Canonical-------destructor----------------*/

AMateria::AMateria( void ) : _Type("Materia")
{
}


AMateria::AMateria( const AMateria &other )
{
	this->_Type = other._Type;
}


AMateria &AMateria::operator=( const AMateria &other )
{

	std::cout << BLUE << "Operator AMateria '=' is Called" << RESET << std::endl;
	if (this != &other)
		this->_Type = other._Type;


	return	*this;
}


AMateria::~AMateria( void )
{
}


/*---------------constructor------Canonical-------destructor----------------*/


/*--------constructor----destructor--------*/


AMateria::AMateria(std::string const & type)
{
	this->_Type = type;
}


/*--------constructor----destructor--------*/




/*----func----*/


std::string const & AMateria::getType() const {return (this->_Type);}



void AMateria::use(ICharacter& target) const
{
	(void)target;
	std::cout << "Use a random Materia on " << target.getName() << std::endl;
}

/*----func----*/

