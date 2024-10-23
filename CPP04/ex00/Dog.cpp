#include "Dog.hpp"

Dog::Dog() : Animal("dog")
{
	std::cout << "default constructor dog" << std::endl;
}

Dog::~Dog()
{
    std::cout << "default destrucot dog" << std::endl;
}

void    Dog::makeSound( void ) const
{
    std::cout << "Woof!" << std::endl;
}