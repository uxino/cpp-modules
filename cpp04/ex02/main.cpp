#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wrong = new WrongCat();

    i->makeSound();
    j->makeSound();
    wrong->makeSound();

    delete wrong;
    delete j;
    delete i;
    return 0;
}
