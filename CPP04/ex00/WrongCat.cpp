#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "default constructor WrongCat" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "default constructor WrongCat" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong Meow!" << std::endl;
}