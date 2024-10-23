#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("tata")
{
	std::cout << "default constructor WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "name constructor WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &model)
{
    std::cout << "copy constructeur WrongAnimal" << std::endl;
    *this = model;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &model)
{
	std::cout << "operator = WrongAnimal" << std::endl;
	this->_type = model._type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "default destructor WrongAnimal" << std::endl;
}


std::string WrongAnimal::getType() const
{
    return this->_type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Wrong animal..." << std::endl;
}