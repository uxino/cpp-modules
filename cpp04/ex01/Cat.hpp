#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        void makeSound() const;
        Cat& operator =(const Cat& cpy);
        Cat(const Cat &cpy);
        ~Cat();
};

