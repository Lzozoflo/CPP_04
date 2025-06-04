/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcretin <fcretin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 16:07:05 by fcretin           #+#    #+#             */
/*   Updated: 2025/06/04 10:05:54 by fcretin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP


#include <iostream>
#include "IMateriaSource.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN  "\033[32m"
#define BLUE  "\033[34m"
#define YELLOW "\033[33m"

class AMateria;

class MateriaSource : public IMateriaSource
{
	private:
	// {
		AMateria	*_Inventory[4];
	// }
	public:
	// {

		MateriaSource();
		MateriaSource( MateriaSource &other);
		MateriaSource &operator=( MateriaSource &other);
		virtual ~MateriaSource();

		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
		/*----func----*/

	// }
};


#endif
// ICE ice("ice")
// ICE ice2 = ice;
