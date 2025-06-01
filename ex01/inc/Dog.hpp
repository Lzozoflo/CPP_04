/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:22:18 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/05 16:23:07 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
#define DOG_HPP


#include "Animal.hpp"


class Dog : public Animal
{

	private:
	// {
		Brain	*brain;
	// }
	protected:
	// {
	// }
	public:
	// {

		Dog( void );
		Dog( const Dog &b );
		Dog &operator=( const Dog &b );
		~Dog( void );

		void	makeSound( void ) const ;
	// }
};

#endif
