#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_point(10), _energy_points(10), _attach_damage(0)
{
    std::cout << this->_name << " are a new ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &model)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = model;
}


ClapTrap::~ClapTrap()
{
    std::cout << "destructor ClapTrap called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &model)
{
    this->_name = model._name;
    this->_attach_damage = model._attach_damage;
    this->_energy_points = model._energy_points;
    this->_hit_point = model._hit_point;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if(this->_hit_point <= 0 || _energy_points <= 0)
    {
        std::cout << "ClapTrap as no energie or hit point" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_name << " attacks " << target << " , causing " << this->_attach_damage << " points of damage " << std::endl;
    this->_energy_points -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount >= this->_hit_point)
    {
        this->_hit_point = 0;
        std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
        return;
    }
    this->_hit_point -= amount;
    std::cout << "ClapTrap " << this->_name << " lose " << amount << " hit points, he was attaqued " << std::endl;
}


void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hit_point == 0)
    {
        std::cout << " ClapTrap " << this->_name << " is already dead!" << std::endl;
        return;
    }
    if (this->_energy_points <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
        return;
    }
    this->_hit_point += amount;
    std::cout << "ClapTrap " << this->_name << " gets " << amount << " hit points back" << std::endl;
    this->_energy_points -= 1;
}


