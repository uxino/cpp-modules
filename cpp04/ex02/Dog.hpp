#pragma  once

#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        void makeSound() const;
        Dog& operator =(const Dog& cpy);
        Dog(const Dog &cpy);
        ~Dog();
};

