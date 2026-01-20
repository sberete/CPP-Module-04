#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    std::cout << "=== Basic polymorphism test ===" << std::endl;
    {
        const AAnimal* a = new Dog();
        const AAnimal* b = new Cat();

        a->makeSound();
        b->makeSound();

        delete a;
        delete b;
    }
    std::cout << "\n=== Array test ===" << std::endl;
    {
        const int size = 4;
        AAnimal* animals[size];

        animals[0] = new Dog();
        animals[1] = new Dog();
        animals[2] = new Cat();
        animals[3] = new Cat();

        for (int i = 0; i < size; i++)
            animals[i]->makeSound();

        for (int i = 0; i < size; i++)
            delete animals[i];
    }
    std::cout << "\n=== End ===" << std::endl;
    return 0;
}
