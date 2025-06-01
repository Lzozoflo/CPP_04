/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 14:27:31 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/05 14:06:06 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP


#include <iostream>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN  "\033[32m"
#define BLUE  "\033[34m"
#define YELLOW "\033[33m"


class WrongAnimal
{
	protected:
	// {
		std::string type;
		static void	ConstructorCall( std::string str1 );
		static void	DestructorCall( std::string str1 );
	// }
	public:
	// {

		WrongAnimal( void );
		WrongAnimal( const WrongAnimal &b );
		WrongAnimal &operator=( const WrongAnimal &b );
		~WrongAnimal( void );


		std::string	getType( void ) const;


		void		makeSound( void ) const;
	// }
};

#endif
