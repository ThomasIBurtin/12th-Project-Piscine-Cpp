#include "Zombie.hpp"

int main()
{
    Zombie zombie1("toto");
    zombie1.announce();
    
    Zombie *zombie2 = newZombie("mama");
    zombie2->announce();
    delete zombie2;
    randomChump("pap");
}