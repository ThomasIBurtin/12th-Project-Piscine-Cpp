#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain created." << std::endl;
}

Brain::Brain(const Brain& src)
{
    *this = src;
}

Brain& Brain::operator=(const Brain& src)
{
    std::cout << "operator = brain" << std::endl;
    for ( int i = 0; i < 100; i++ )\
    {
        this->_ideas[i] = src._ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "default destructor Brain" << std::endl;
}