/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 15:28:42 by fcretin           #+#    #+#             */
/*   Updated: 2025/06/04 09:48:58 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include <iostream>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN  "\033[32m"
#define BLUE  "\033[34m"
#define YELLOW "\033[33m"


class Cure : public AMateria
{
		private:
		// {

			Cure( const Cure &b );
			Cure &operator=( const Cure &b );
			~Cure( void );
			/*------Canonical-------*/

		// }
		public:
		// {

			Cure( void );
			Cure(std::string const & type);
			/*----constructor----destructor----*/


			std::string const & getType() const;//Returns the materia type

			virtual AMateria* clone() const;
			virtual void use(ICharacter& target) const;
			/*----func----*/

		// }
};


#endif
