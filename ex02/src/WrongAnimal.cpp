/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:22:38 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/05 16:32:12 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"


/*---------------constructor------Canonical-------destructor----------------*/

WrongAnimal::WrongAnimal( void )	:	type( "WrongAnimal" )
{
	ConstructorCall("WrongAnimal Defaut");
}


WrongAnimal::WrongAnimal( const WrongAnimal &other )
{
	ConstructorCall("WrongAnimal Copy");
	this->type = other.type;
}


WrongAnimal &WrongAnimal::operator=( const WrongAnimal &other )
{

	std::cout << BLUE << "Operator '=' is Called" << RESET << std::endl;
	if (this != &other)
		this->type = other.type;


	return	*this;
}


WrongAnimal::~WrongAnimal( void )
{
	DestructorCall("WrongAnimal");
}

/*---------------constructor------Canonical-------destructor----------------*/


/*----utils----*/


void	WrongAnimal::ConstructorCall( std::string str1 )
{
	std::cout << BLUE << "Constructor " << str1 << " is Called" << RESET << std::endl;
}

void	WrongAnimal::DestructorCall( std::string str1 )
{
	std::cout << YELLOW << "Destructor " << str1 << " is Called" << RESET << std::endl;
}


/*----utils----*/


std::string	WrongAnimal::getType( void ) const
{
	return (this->type);
}


/*----utils----*/

/*---func---*/


void	WrongAnimal::makeSound( void ) const
{
	std::cout << "WrongAnimal Sound" << std::endl;
}
