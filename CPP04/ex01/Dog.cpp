#include "Dog.hpp"

Dog::Dog() : Animal("dog")
{
	std::cout << "default constructor dog" << std::endl;
    this->_brain = new Brain();
}

Dog::Dog( const Dog& src )
{
    std::cout << "copy constructor dog" << std::endl;
    *this = src;
}

Dog& Dog::operator=( const Dog& src ) 
{
    std::cout << "operator = dog" << std::endl;
    Animal::operator=(src);
    this->_brain = new Brain(*src._brain);
    return *this;
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << "default destructor dog" << std::endl;
}

void    Dog::makeSound( void ) const
{
    std::cout << "Woof!" << std::endl;
}