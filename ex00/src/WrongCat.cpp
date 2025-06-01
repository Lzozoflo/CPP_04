/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:22:01 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/05 15:04:23 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"


/*---------------constructor------Canonical-------destructor----------------*/

WrongCat::WrongCat( void )
{
	ConstructorCall("WrongCat Defaut");
	this->_type = "WrongCat";
}


WrongCat::WrongCat( const WrongCat &other )
{
	ConstructorCall("WrongCat Copy");
	this->_type = other._type;
}


WrongCat &WrongCat::operator=( const WrongCat &other )
{

	std::cout << BLUE << "Operator '=' is Called" << RESET << std::endl;
	if (this != &other)
		this->_type = other._type;


	return	*this;
}


WrongCat::~WrongCat( void )
{
	DestructorCall("WrongCat");
}


/*---------------constructor------Canonical-------destructor----------------*/


/*----utils----*/
/*----utils----*/


/*---func---*/


void	WrongCat::makeSound( void ) const
{
	std::cout << "Meow" << std::endl;
}
