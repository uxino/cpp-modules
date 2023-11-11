#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
    std::cout << "DiamondDTrap name constructor called." << std::endl;
    this->name = name;
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
}
DiamondTrap::DiamondTrap(): ClapTrap("Default clap_trap")
{
    std::cout << "DiamondDTrap default constructor called." << std::endl;
    this->name = "Default name ";
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
}
DiamondTrap::DiamondTrap(const DiamondTrap &cpy) : ClapTrap(cpy), FragTrap(cpy), ScavTrap(cpy)
{
    std::cout << "DiamondTrap copy constructor called." << std::endl;
    *this = cpy;
}
DiamondTrap& DiamondTrap::operator = (const DiamondTrap &cpy)
{
    std::cout << "DiamondTrap copy assignment constructor is called." << std::endl;
    this->name = cpy.name + "_clap_name";
    this->hitPoints = cpy.hitPoints;
    this->energyPoints = cpy.energyPoints;
    this->attackDamage = cpy.attackDamage;
    return (*this);
}
void DiamondTrap::whoAmI()
{
    std::cout << "I am " << this->name << "and inherited from " << ClapTrap::name << std::endl;
}
void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Diamond deconstructor called." << std::endl;
}