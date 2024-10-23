#include "Cat.hpp"

Cat::Cat() : Animal("cat")
{
    std::cout << "default constructor cat" << std::endl;
}

Cat::~Cat()
{
    std::cout << "default destructor cat" << std::endl;
}

void Cat::MakeSound( void ) const
{
    std::cout << "Meow!" << std::endl;
}