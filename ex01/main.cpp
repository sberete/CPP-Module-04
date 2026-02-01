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
        w->makeSound(); // should call WrongAnimal::makeSound() (not virtual)
        delete w;
    }

    std::cout << "\n=== Test 4: Deep copy (activate when you can access ideas) ===\n";
    {
        Cat a;
        Cat b = a;

        // Pour prouver la deep copy, il faut pouvoir lire/écrire une idée.
        // Ajoute dans Cat (ou Brain) une petite méthode setIdea/getIdea,
        // puis décommente :
        //
        // a.setIdea(0, "original");
        // b.setIdea(0, "copy");
        // std::cout << "a[0] = " << a.getIdea(0) << "\n";
        // std::cout << "b[0] = " << b.getIdea(0) << "\n";
        //
        // Si a[0] reste "original" et b[0] devient "copy" => deep copy OK.
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

    std::cout << "\n=== Deep copy proof (Dog) ===\n";
    {
        Dog a;
        a.setIdea(0, "original");

        Dog b;
        b = a;                     // test operator=
        b.setIdea(0, "copy");

        std::cout << "a[0] = " << a.getIdea(0) << "\n";
        std::cout << "b[0] = " << b.getIdea(0) << "\n";
    }
    std::cout << "\n=== End ===\n";
    return 0;
}