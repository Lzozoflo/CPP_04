/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 15:18:03 by fcretin           #+#    #+#             */
/*   Updated: 2025/06/04 09:47:59 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include <iostream>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN  "\033[32m"
#define BLUE  "\033[34m"
#define YELLOW "\033[33m"


class Ice : public AMateria
{
		private:
		// {

			Ice( const Ice &b );
			Ice &operator=( const Ice &b );
			~Ice( void );
			/*------Canonical-------*/

		// }
		public:
		// {

			Ice( void );
			Ice(std::string const & type);
			/*----constructor----destructor----*/


			std::string const & getType() const;//Returns the materia type

			virtual AMateria* clone() const;
			virtual void use(ICharacter& target) const;
			/*----func----*/

		// }
};


#endif
