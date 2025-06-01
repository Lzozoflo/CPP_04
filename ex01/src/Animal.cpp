/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:22:04 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/05 16:32:12 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"


/*---------------constructor------Canonical-------destructor----------------*/

Animal::Animal( void )	:	type( "Animal" )
{
	ConstructorCall("Animal Defaut");
}


Animal::Animal( const Animal &other )
{
	ConstructorCall("Animal Copy");
	this->type = other.type;
}


Animal &Animal::operator=( const Animal &other )
{

	std::cout << BLUE << "Operator '=' is Called" << RESET << std::endl;
	if (this != &other)
		this->type = other.type;


	return	*this;
}


Animal::~Animal( void )
{
	DestructorCall("Animal");
}

/*---------------constructor------Canonical-------destructor----------------*/


/*----utils----*/


void	Animal::ConstructorCall( std::string str1 )
{
	std::cout << BLUE << "Constructor " << str1 << " is Called" << RESET << std::endl;
}

void	Animal::DestructorCall( std::string str1 )
{
	std::cout << YELLOW << "Destructor " << str1 << " is Called" << RESET << std::endl;
}


/*----utils----*/


std::string	Animal::getType( void ) const
{
	return (this->type);
}


/*----utils----*/

/*---func---*/


void	Animal::makeSound( void ) const
{
	std::cout << "Animal Sound" << std::endl;
}
