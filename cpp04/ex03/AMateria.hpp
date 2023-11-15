#pragma once

#include "iostream"

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria(std::string const & type);
        AMateria& operator = (const AMateria &cpy);
        AMateria(const AMateria &cpy);
        std::string const & getType() const; //Returns the materia type
        virtual ~AMateria();
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};