#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap default Constructor is called" << std::endl;
    this->hitPoints = 100;
    this->attackDamage = 30;
    this->energyPoints = 100;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap name Constructor is called" << std::endl;
    this->hitPoints = 100;
    this->attackDamage = 30;
    this->energyPoints = 100;
}

FragTrap::FragTrap(const FragTrap &cpy) : ClapTrap(cpy.name)
{
    std::cout << "FragTrap Copy constructor is called." << std::endl;
    this->energyPoints = cpy.energyPoints;
    this->attackDamage = cpy.attackDamage;
    this->hitPoints = cpy.hitPoints;
}

FragTrap &FragTrap::operator=(FragTrap &cpy)
{
    std::cout << "FragTrap copy assignment constructor is called." << std::endl;
    ClapTrap::operator=(cpy);
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "Again, add more tests to your program." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destruction is called." << std::endl;
}