/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:22:12 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/05 16:22:27 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_HPP
#define BRAIN_HPP


#include <iostream>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN  "\033[32m"
#define BLUE  "\033[34m"
#define YELLOW "\033[33m"


class Brain
{
	protected:
	// {
		std::string	ideas[100];
		static void	ConstructorCall( std::string str1 );
		static void	DestructorCall( std::string str1 );
	// }
	public:
	// {

		Brain( void );
		Brain( const Brain &b );
		Brain &operator=( const Brain &b );
		~Brain( void );


	// }
};


#endif
