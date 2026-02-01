#ifndef DOG_HPP
    #define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
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