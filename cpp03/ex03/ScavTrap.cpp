#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap name Constructer is called." << std::endl;
    this->attackDamage = 20;
    this->energyPoints = 50;
    this->hitPoints = 100;
}

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap default Constructer is called." << std::endl;
    this->attackDamage = 20;
    this->energyPoints = 50;
    this->hitPoints = 100;
}

ScavTrap::ScavTrap(const ScavTrap &cpy) : ClapTrap(cpy.name)
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    this->hitPoints = cpy.hitPoints;
    this->energyPoints = cpy.hitPoints;
    this->attackDamage = cpy.attackDamage;
}
ScavTrap& ScavTrap::operator = (const ScavTrap &cpy)
{
    std::cout << "ScavTrap copy assignment constructor is called." << std::endl;
    ClapTrap::operator=(cpy);
    return (*this);
}
void ScavTrap::guardGate()
{
    std::cout << " ScavTrap is now in Gate keeper mode." << std::endl;
}
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor is called." << std::endl;
}