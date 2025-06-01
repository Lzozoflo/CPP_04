/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 14:27:31 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/05 14:06:06 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP


#include "WrongAnimal.hpp"


class WrongCat : public  WrongAnimal
{
	protected:
	// {
	// }
	public:
	// {

		WrongCat( void );
		WrongCat( const WrongCat &b );
		WrongCat &operator=( const WrongCat &b );
		~WrongCat( void );

		void	makeSound( void ) const ;
	// }
};

#endif
