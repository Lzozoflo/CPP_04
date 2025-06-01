
#include "base.hpp"


/*---------------constructor------Canonical-------destructor----------------*/

Base::Base( void )
{
	ConstructorCall("Defaut");
}


Base::Base( const Base &other )
{
	ConstructorCall("Copy");

}


Base &Base::operator=( const Base &other )
{

	std::cout << BLUE << "Operator '=' is Called" << RESET << std::endl;
	if (this != &other)
		;


	return	*this;
}


Base::~Base( void )
{
	DestructorCall("");
}

/*---------------constructor------Canonical-------destructor----------------*/


/*----utils----*/


void	Base::ConstructorCall( std::string str1 )
{
	std::cout << BLUE << "Constructor " << str1 << " is Called" << RESET << std::endl;
}

void	Base::DestructorCall( std::string str1 )
{
	std::cout << YELLOW << "Destructor " << str1 << " is Called" << RESET << std::endl;
}

/*----utils----*/
