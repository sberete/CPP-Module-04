#ifndef DOG_HPP
    #define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal
{
    public:
        Dog();
        Dog(Dog const &);
        ~Dog();

        Dog & operator=(Dog const &);

        virtual void makeSound() const;
        void setIdea(int, const std::string&);
        std::string getIdea(int) const;

    private:
        Brain* _brain;
};

#endif