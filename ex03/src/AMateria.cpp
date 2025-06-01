
#include "AMateria.hpp"


/*---------------constructor------Canonical-------destructor----------------*/

AMateria::AMateria( void )
{
	ConstructorCall("Defaut");
}


AMateria::AMateria( const AMateria &other )
{
	ConstructorCall("Copy");

}


AMateria &AMateria::operator=( const AMateria &other )
{

	std::cout << BLUE << "Operator '=' is Called" << RESET << std::endl;
	if (this != &other)
		;


	return	*this;
}


AMateria::~AMateria( void )
{
	DestructorCall("");
}


/*---------------constructor------Canonical-------destructor----------------*/


/*--------constructor----destructor--------*/


AMateria::AMateria(std::string const & type);


/*--------constructor----destructor--------*/


/*----utils----*/


void	AMateria::ConstructorCall( std::string str1 )
{
	std::cout << BLUE << "Constructor " << str1 << " is Called" << RESET << std::endl;
}

void	AMateria::DestructorCall( std::string str1 )
{
	std::cout << YELLOW << "Destructor " << str1 << " is Called" << RESET << std::endl;
}


/*----utils----*/


/*----func----*/


std::string const & AMateria::getType() const;
virtual AMateria* AMateria::clone() const = 0;
virtual void AMateria::use(ICharacter& target);


/*----func----*/
