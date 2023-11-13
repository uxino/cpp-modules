#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    int sel = std::stoi("123");
    (void)sel;
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    return 0;
}