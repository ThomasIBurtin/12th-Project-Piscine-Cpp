#include "Cat.hpp"

Cat::Cat() : Animal("cat")
{
	std::cout << "default constructor cat" << std::endl;
    this->_brain = new Brain();
}

Cat::Cat( const Cat& src )
{
    std::cout << "copy constructor cat" << std::endl;
    *this = src;
}

Cat& Cat::operator=( const Cat& src ) 
{
    std::cout << "operator = cat" << std::endl;
    Animal::operator=(src);
    this->_brain = new Brain(*src._brain);
    return *this;
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "default destructor cat" << std::endl;
}

void    Cat::makeSound( void ) const
{
    std::cout << "Miawwww" << std::endl;
}