/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 12:38:15 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/06 12:59:45 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AMATERIA_HPP
#define AMATERIA_HPP


#include <iostream>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN  "\033[32m"
#define BLUE  "\033[34m"
#define YELLOW "\033[33m"


class AMateria
{
		protected:
		// {
			std:string	&type;
			static void	ConstructorCall( std::string str1 );
			static void	DestructorCall( std::string str1 );
			AMateria( void );
			AMateria( const AMateria &b );
			AMateria &operator=( const AMateria &b );
			~AMateria( void );

		// }
		public:
		// {

			/*------Canonical-------*/



			/*----constructor----destructor----*/

			AMateria(std::string const & type);

			/*----func----*/

			std::string const & getType() const;
			virtual AMateria* clone() const = 0;
			virtual void use(ICharacter& target);

		// }
};


#endif
