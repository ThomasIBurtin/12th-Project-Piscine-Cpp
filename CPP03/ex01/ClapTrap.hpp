#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    public:
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &model);
    ~ClapTrap();

    ClapTrap& operator=(const ClapTrap &model);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    private:
    ClapTrap();

    protected:
    std::string _name;
    unsigned int _hit_point;
    unsigned int _energy_points;
    unsigned int _attach_damage;
};

#endif