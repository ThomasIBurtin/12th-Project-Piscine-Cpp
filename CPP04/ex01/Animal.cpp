#include "Animal.hpp"

Animal::Animal() : _type("toto")
{
	std::cout << "default constructor animal" << std::endl;
}
Animal::Animal(std::string type) : _type(type)
{
	std::cout << "name constructor animal" << std::endl;
}

Animal::Animal(const Animal &model)
{
	std::cout << "copy constructor animal" << std::endl;
	*this = model;
}

Animal& Animal::operator=(const Animal &model)
{
	std::cout << "operator = animal" << std::endl;
	this->_type = model._type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "default destructor animal" << std::endl;
}

std::string Animal::getType() const
{
	return this->_type;
}

void Animal::makeSound() const
{
	std::cout << "Animal sound..." << std::endl;
}