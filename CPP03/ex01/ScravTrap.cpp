
#include "ScravTrap.hpp"

Scravtrap::Scravtrap(std::string name) : ClapTrap(name)
{
    this->_attach_damage = 20;
    this->_energy_points = 50;
    this->_hit_point = 100;
    std::cout << this->_name << " are a ScravTrap" << std::endl;
}

Scravtrap::~Scravtrap()
{
    std::cout << "destructor Scravtrap called" << std::endl;
}

void Scravtrap::attack(const std::string& target)
{
    if(this->_hit_point <= 0 || _energy_points <= 0)
    {
        std::cout << "Scravtrap as no energie or hit point" << std::endl;
        return;
    }
    std::cout << "Scravtrap " << this->_name << " attacks " << target << " , causing " << this->_attach_damage << " points of damage " << std::endl;
    this->_energy_points -= 1;
}

void Scravtrap::guardGate()
{
    std::cout << "ScavTrap is now in Gatekeeper mode" << std::endl;
}