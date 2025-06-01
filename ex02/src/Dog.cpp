/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:22:01 by fcretin           #+#    #+#             */
/*   Updated: 2025/06/01 12:01:15 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"


/*---------------constructor------Canonical-------destructor----------------*/

Dog::Dog( void )
{
	ConstructorCall("Dog Defaut");
	this->brain = new Brain();
	this->type = "Dog";
}


Dog::Dog( const Dog &other )
{
	ConstructorCall("Dog Copy");
	this->brain = new Brain();
	this->type = other.type;
}


Dog &Dog::operator=( const Dog &other )
{

	std::cout << BLUE << "Operator '=' is Called" << RESET << std::endl;
	this->brain = new Brain();
	if (this != &other)
		this->type = other.type;


	return	*this;
}


Dog::~Dog( void )
{
	delete this->brain;
	DestructorCall("Dog");
}


/*---------------constructor------Canonical-------destructor----------------*/


/*----utils----*/
/*----utils----*/


/*---func---*/


void	Dog::makeSound( void ) const
{
	std::cout << "Woof" << std::endl;
}
