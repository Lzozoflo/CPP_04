/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:22:01 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/31 10:07:59 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"


/*---------------constructor------Canonical-------destructor----------------*/

Cat::Cat( void )
{
	ConstructorCall("Cat Defaut");
	this->_type = "Cat";
}


Cat::Cat( const Cat &other )
{
	ConstructorCall("Cat Copy");
	this->_type = other._type;
}


Cat &Cat::operator=( const Cat &other )
{

	std::cout << BLUE << "Operator '=' is Called" << RESET << std::endl;
	if (this != &other)
		this->_type = other._type;


	return	*this;
}


Cat::~Cat( void )
{
	DestructorCall("Cat");
}


/*---------------constructor------Canonical-------destructor----------------*/


/*---func---*/


void	Cat::makeSound( void ) const
{
	std::cout << "Meow" << std::endl;
}


/*---func---*/
