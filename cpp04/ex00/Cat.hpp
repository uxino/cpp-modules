#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        void makeSound() const;
        Cat& operator =(const Cat& cpy);
        Cat(const Cat &cpy);
        ~Cat();
};

