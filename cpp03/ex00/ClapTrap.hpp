#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "iostream"

class ClapTrap
{
    private:
        std::string name;
        int hitPoints;
        int energyPoints;
        int attackDamage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &cpy);
        ClapTrap &operator = (const ClapTrap &cpy);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ~ClapTrap();

};

#endif
