#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::~Zombie()
{

}

void Zombie::add_name(std::string name)
{
    this->name = name;
}

void Zombie::announce() const
{
    std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}