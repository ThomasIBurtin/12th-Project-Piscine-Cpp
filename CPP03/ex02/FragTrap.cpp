#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) :ClapTrap(name)
{
	this->_attach_damage = 30;
    this->_energy_points = 100;
    this->_hit_point = 100;
    std::cout << this->_name << " are a Fragtrap" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "destructor Fragtrap called" << std::endl;
}

void FragTrap::highFivesGuys()
{
	if ( this->_hit_point <= 0 )
	{
        std::cout << "| FragTrap | - " << this->_name << " is alreday dead" << std::endl;
        return;
    }
	if ( this->_energy_points <= 0 )
	{
        std::cout << "| FragTrap | - " << this->_name << " is out of energy." << std::endl;
        return;
    }
    std::cout << "| FragTrap | - " << this->_name << " high fives everybody." << std::endl;
}