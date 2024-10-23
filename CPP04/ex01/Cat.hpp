#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private:
	Brain *_brain;

	public:
	Cat();
	Cat(const Cat& src);
    Cat& operator=(const Cat& src);
	virtual ~Cat();

	virtual void makeSound( void ) const;
};

#endif