/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:22:01 by fcretin           #+#    #+#             */
/*   Updated: 2025/06/01 11:54:42 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"


/*---------------constructor------Canonical-------destructor----------------*/

Cat::Cat( void )
{
	ConstructorCall("Cat Defaut");
	this->brain = new Brain();
	this->type = "Cat";
}


Cat::Cat( const Cat &other )
{
	ConstructorCall("Cat Copy");
	this->brain = new Brain();
	this->type = other.type;
}


Cat &Cat::operator=( const Cat &other )
{

	std::cout << BLUE << "Operator '=' is Called" << RESET << std::endl;
	this->brain = new Brain();
	if (this != &other)
		this->type = other.type;


	return	*this;
}


Cat::~Cat( void )
{
	delete this->brain;
	DestructorCall("Cat");
}


/*---------------constructor------Canonical-------destructor----------------*/


/*----utils----*/
/*----utils----*/


/*---func---*/


void	Cat::makeSound( void ) const
{
	std::cout << "Meow" << std::endl;
}
