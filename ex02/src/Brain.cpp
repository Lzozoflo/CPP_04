/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:22:10 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/06 10:14:06 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"


/*---------------constructor------Canonical-------destructor----------------*/

Brain::Brain( void )
{
	ConstructorCall("Brain Defaut");
}


Brain::Brain( const Brain &other )
{
	ConstructorCall("Brain Copy");
	for (int i = 0; i <= 99; i++)
		this->ideas[i] = other.ideas[i];
}


Brain &Brain::operator=( const Brain &other )
{

	std::cout << BLUE << "Operator '=' is Called" << RESET << std::endl;
	if (this != &other){
		for (int i = 0; i <= 99; i++){
			this->ideas[i] = other.ideas[i];
		}
	}


	return	*this;
}


Brain::~Brain( void )
{
	DestructorCall("Brain");
}

/*---------------constructor------Canonical-------destructor----------------*/


/*----utils----*/


void	Brain::ConstructorCall( std::string str1 )
{
	std::cout << BLUE << "Constructor " << str1 << " is Called" << RESET << std::endl;
}

void	Brain::DestructorCall( std::string str1 )
{
	std::cout << YELLOW << "Destructor " << str1 << " is Called" << RESET << std::endl;
}

/*----utils----*/
