#ifndef SCRAVTRAP_HPP
# define SCRAVTRAP_HPP

#include "ClapTrap.hpp"

class Scravtrap : public ClapTrap
{
    public :
    Scravtrap(std::string name);
    ~Scravtrap();

    void attack(const std::string& target);
    void guardGate();

    private :
    Scravtrap();
};

#endif