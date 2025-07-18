/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 12:38:15 by fcretin           #+#    #+#             */
/*   Updated: 2025/06/04 10:14:51 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AMATERIA_HPP
#define AMATERIA_HPP


#include <iostream>
#include "Character.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN  "\033[32m"
#define BLUE  "\033[34m"
#define YELLOW "\033[33m"


class AMateria
{
		protected:
		// {

			std::string	_Type;

			AMateria( void );
			AMateria( const AMateria &b );
			AMateria &operator=( const AMateria &b );
			/*------Canonical-------*/

		// }
		public:
		// {

			virtual ~AMateria( void );
			AMateria(std::string const & type);
			/*----constructor----destructor----*/


			std::string const & getType() const;//Returns the materia type

			virtual AMateria* clone() const = 0;
			virtual void use(ICharacter& target) const;
			/*----func----*/

		// }
};


#endif
// ICE ice("ice")
// ICE ice2 = ice;
