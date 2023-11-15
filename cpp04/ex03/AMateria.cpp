
#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
    this->type = type;
}
virtual void use(ICharacter& target)
{

}

AMateria& AMateria::operator =(const AMateria &cpy)
{
    this->type = cpy.type;
    return(*this);
}

AMateria::AMateria(const AMateria &cpy)
{
    *this = cpy;
}
AMateria::~AMateria()
{
}

std::string const & AMateria::getType() const
{
    return (this->type);
}