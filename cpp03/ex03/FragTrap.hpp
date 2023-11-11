#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
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