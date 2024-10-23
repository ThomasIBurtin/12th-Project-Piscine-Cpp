#ifndef HumanB_HPP
# define HumanB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public:
	HumanB(std::string name);
	~HumanB();
	void attack(void) const;
	void setWeapon(Weapon &weapon);

	private:
		std::string _name;
		Weapon *_weapon;
};

#endif