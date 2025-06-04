/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 12:38:15 by fcretin           #+#    #+#             */
/*   Updated: 2025/06/04 13:14:40 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHARACTER_HPP
#define CHARACTER_HPP


#include <iostream>
#include "ICharacter.hpp"
// #include "AMateria.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN  "\033[32m"
#define BLUE  "\033[34m"
#define YELLOW "\033[33m"
// class ICharacter;

class Character : public ICharacter
{
	private:
	// {

		std::string	_Name;
		AMateria	*_Inventory[4];

		Character( void );


		public:
		// {

		Character( const Character &other );
		Character &operator=( const Character &other );
		virtual ~Character();
		/*------Canonical-------*/

		// Character	&operator=( const ICharacter *other );
		Character( const std::string &name );
		/*------Constructor-------*/

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
		/*------func-------*/

	// }
};

#endif
