#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {}

HumanB::~HumanB()
{
	
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack() const
{
	if (_weapon == NULL)
		std::cout << this->_name << "attacks with nothing" << std::endl;
	else
		std::cout << this->_name << "attacks with their" << this->_weapon->getType() << std::endl;
}