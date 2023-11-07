#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("elma");
    ClapTrap b("armut");
    ClapTrap c("araba");

    a.attack("araba");
    b.attack("araba");

    c.takeDamage(5);
    c.takeDamage(5);

}