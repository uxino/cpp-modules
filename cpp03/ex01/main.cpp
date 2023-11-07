#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("elma");
    ScavTrap b("armut");
    ScavTrap c("araba");

    c = a;
    a.attack("armut");
    b.takeDamage(35);
    b.guardGate();
    b.beRepaired(0);

}