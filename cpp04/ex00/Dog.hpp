#pragma  once

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        void makeSound() const;
        Dog& operator =(const Dog& cpy);
        Dog(const Dog &cpy);
        ~Dog();
};

