/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:22:01 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/31 10:07:56 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"


/*---------------constructor------Canonical-------destructor----------------*/

Dog::Dog( void )
{
	ConstructorCall("Dog Defaut");
	this->_type = "Dog";
}


Dog::Dog( const Dog &other )
{
	ConstructorCall("Dog Copy");
	this->_type = other._type;
}


Dog &Dog::operator=( const Dog &other )
{

	std::cout << BLUE << "Operator '=' is Called" << RESET << std::endl;
	if (this != &other)
		this->_type = other._type;


	return	*this;
}


Dog::~Dog( void )
{
	DestructorCall("Dog");
}


/*---------------constructor------Canonical-------destructor----------------*/


/*---func---*/


void	Dog::makeSound( void ) const
{
	std::cout << "Woof" << std::endl;
}


/*---func---*/
