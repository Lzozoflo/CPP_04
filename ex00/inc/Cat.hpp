/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 14:27:31 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/05 14:06:06 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP


#include "Animal.hpp"


class Cat : public Animal
{
	protected:
	// {
	// }
	public:
	// {

/*---------------constructor------Canonical-------destructor----------------*/
		Cat( void );
		Cat( const Cat &b );
		Cat &operator=( const Cat &b );
		~Cat( void );


/*---func---*/
		void	makeSound( void ) const ;
	// }
};

#endif
