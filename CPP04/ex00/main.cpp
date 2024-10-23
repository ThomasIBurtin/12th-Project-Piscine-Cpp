#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* a = new Animal();
	const Animal* b = new Dog();
	const Animal* c = new Cat();
	std::cout << a->getType() << " " << std::endl;
	std::cout << b->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl;
	a->makeSound();
	b->makeSound();
	c->makeSound();
	delete a;
	delete b;
	delete c;

	std::cout << "----------------------------------------" << std::endl;

	const WrongAnimal *d = new WrongAnimal();
    const WrongAnimal *e = new WrongCat();
    std::cout << d->getType() << " " << std::endl;
	std::cout << e->getType() << " " << std::endl;
    d->makeSound();
	e->makeSound();
    delete  d;
    delete  e;
}