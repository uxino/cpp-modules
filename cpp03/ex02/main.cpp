#include "FragTrap.hpp"

int main()
{
    FragTrap a("elma");
    FragTrap b("armut");
    FragTrap c("araba");

    c = a;
    a.attack("armut");
    b.takeDamage(50);
    b.beRepaired(5);

}