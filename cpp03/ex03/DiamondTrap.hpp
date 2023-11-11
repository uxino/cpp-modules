#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

class DiamondTrap : public FragTrap , public  ScavTrap
{
    private:
        std::string  name;
    public:
        DiamondTrap(std::string name);
        DiamondTrap();
        void whoAmI();
        void attack(const std::string &target);
        DiamondTrap(const DiamondTrap &cpy);
        DiamondTrap &operator = (const DiamondTrap &cpy);
        ~DiamondTrap();
};

#endif