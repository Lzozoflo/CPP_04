/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 13:38:54 by fcretin           #+#    #+#             */
/*   Updated: 2025/06/04 11:37:25 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Ice.hpp"


/*---------------constructor------Canonical-------destructor----------------*/

Ice::Ice( void ) : AMateria("ice")
{
}


Ice::Ice( const Ice &other ) : AMateria(other._Type)
{
}


Ice &Ice::operator=( const Ice &other )
{

	std::cout << BLUE << "Operator Ice '=' is Called" << RESET << std::endl;
	if (this != &other)
		this->_Type = other._Type;


	return	*this;
}


Ice::~Ice( void )
{
}


/*---------------constructor------Canonical-------destructor----------------*/


/*--------constructor----destructor--------*/


Ice::Ice(std::string const & type) : AMateria(type)
{
}


/*--------constructor----destructor--------*/




/*----func----*/


std::string const & Ice::getType() const {return (this->_Type);}


AMateria* Ice::clone() const
{
	return (new Ice("ice"));
}


void Ice::use(ICharacter& target) const
{
	(void)target;
	// * shoots an ice bolt at <name> *
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

/*----func----*/

