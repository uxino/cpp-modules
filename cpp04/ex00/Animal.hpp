#pragma once

#include "iostream"

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal &operator =(const Animal &cpy);
        Animal(const Animal &cpy);
        virtual void makeSound() const;
        std::string getType() const;
        virtual ~Animal();
};


