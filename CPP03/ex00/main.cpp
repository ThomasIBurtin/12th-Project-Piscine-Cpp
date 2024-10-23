#include "ClapTrap.hpp"

int main()
{
    ClapTrap instance("toto");
    instance.attack("juju");
    instance.takeDamage(6);
    instance.takeDamage(6);
    instance.attack("juju");
    return 0;
}