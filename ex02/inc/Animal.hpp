/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 14:27:31 by fcretin           #+#    #+#             */
/*   Updated: 2025/05/05 14:06:06 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP


#include <iostream>
#include "Brain.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN  "\033[32m"
#define BLUE  "\033[34m"
#define YELLOW "\033[33m"


class Animal
{
	protected:
	// {
		std::string type;
		static void	ConstructorCall( std::string str1 );
		static void	DestructorCall( std::string str1 );

		// }
		public:
		// {

		Animal( void );
		Animal( const Animal &b );
		Animal &operator=( const Animal &b );
		virtual ~Animal( void );


		std::string	getType( void ) const;


		virtual void		makeSound( void ) const = 0;
	// }
};

// Commencez par implémenter une classe simple de base Animal. Elle possède un attribut protégé :
// • std::string type;
// Implémentez une classe Dog (chien) qui hérite de Animal.
// Implémentez une classe Cat (chat) qui hérite de Animal.
// Ces deux classes dérivées doivent initialiser leur type en fonction de leur nom. Ainsi,
// le type de Dog sera “Dog”, et celui de Cat sera “Cat”. Le type de la classe Animal peut
// être laissé vide ou initialisé avec la valeur de votre choix.
// Chaque animal doit être capable d’utiliser la fonction membre :
#endif
