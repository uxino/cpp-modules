#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Name constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 10;
    this->attackDamage = 0;
    this->energyPoints = 10;
}
ClapTrap::ClapTrap(const ClapTrap &cpy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = cpy;
}
ClapTrap& ClapTrap::operator = (const ClapTrap &cpy)
{
    std::cout << "Copy assigment constructor called" << std::endl;
    this->name = cpy.name;
    this->energyPoints = cpy.energyPoints;
    this->attackDamage = cpy.attackDamage;
    this->hitPoints = cpy.hitPoints;
    return (*this);
}
void ClapTrap::attack(const std::string& target)
{
    if (this->energyPoints <= 0 || this->hitPoints <= 0)
        std::cout << "There is no needed Energy point or hit points" << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target <<", causing " \
            << this->attackDamage << " points of damage!" << std::endl;
        this->energyPoints--;
    }
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->energyPoints <= 0 || this->hitPoints <= 0)
        std::cout << "There is no needed Energy point or hit points" << std::endl;
    else if ((int)amount >= this->hitPoints)
    {
        this->hitPoints -= (int)amount;
        std::cout << "ClapTrap " << this->name << " takes " << amount << " and dead."<< std::endl;
    }
    else if ((int)amount < this->hitPoints)
    {
        this->hitPoints -= (int)amount;
        std::cout << "ClapTrap " << this->name << " takes " << amount << " damage and " \
            << this->hitPoints << " is remaining" << std::endl;
    }
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitPoints <= 0 || this->energyPoints <= 0)
        std::cout << "There is no needed Energy point or hit points" << std::endl;
    else
    {
        this->energyPoints--;
        std::cout << "ClapTrap " << this->name << " takes " << amount << "repaired and " << this->name << " has " \
            << this->hitPoints << "hitpoints" << std::endl;
    }
}
ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}