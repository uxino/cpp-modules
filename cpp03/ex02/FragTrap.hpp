#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap& operator=(FragTrap &cpy);
        FragTrap(const FragTrap &cpy);
        void highFivesGuys(void);
        ~FragTrap();
};


#endif