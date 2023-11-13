#pragma once

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &copy);
        WrongAnimal& operator = (const WrongAnimal &copy);
        std::string getType();
        void makeSound() const;
        virtual ~WrongAnimal();
};