/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 14:27:31 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/05 14:06:06 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP


#include "Animal.hpp"


class Dog : public Animal
{
	protected:
	// {
	// }
	public:
	// {

/*---------------constructor------Canonical-------destructor----------------*/
		Dog( void );
		Dog( const Dog &b );
		Dog &operator=( const Dog &b );
		~Dog( void );


/*---func---*/
		void	makeSound( void ) const ;
	// }
};

#endif
