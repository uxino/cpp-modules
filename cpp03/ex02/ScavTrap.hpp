#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ScavTrap();
        ScavTrap(const ScavTrap &cpy);
        ScavTrap &operator = (const ScavTrap &cpy);
        void guardGate();
        ~ScavTrap();
};

#endif