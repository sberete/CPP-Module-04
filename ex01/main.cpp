#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "=== Test 1: delete via Animal* ===\n";
    {
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        delete j;
        delete i;
    }

    std::cout << "\n=== Test 2: array half Dog / half Cat ===\n";
    {
        const int size = 10;
        Animal* animals[size];

        for (int k = 0; k < size; ++k)
        {
            if (k < size / 2)
                animals[k] = new Dog();
            else
                animals[k] = new Cat();
        }

        for (int k = 0; k < size; ++k)
            delete animals[k];
    }

    std::cout << "\n=== Test 3: WrongAnimal polymorphism should be WRONG ===\n";
    {
        const WrongAnimal* w = new WrongCat();
        w->makeSound();
        delete w;
    }

    std::cout << "\n=== Deep copy proof (Cat) ===\n";
    {
        Cat a;
        a.setIdea(0, "original");

        Cat b = a;                 // copie
        b.setIdea(0, "copy");      // modifie la copie

        std::cout << "a[0] = " << a.getIdea(0) << "\n";
        std::cout << "b[0] = " << b.getIdea(0) << "\n";
    }

    std::cout << "\n=== End ===\n";
    return 0;
}