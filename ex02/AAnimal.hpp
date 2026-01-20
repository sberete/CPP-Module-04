#ifndef AANIMAL_HPP
    #define AANIMAL_HPP

#include <string>
#include <iostream>
#include <memory>

class AAnimal
{
    public:
        AAnimal();
        AAnimal(AAnimal const &);
        virtual ~AAnimal();

        AAnimal & operator=(AAnimal const &);

        virtual void makeSound() const = 0;

        std::string getType() const;

    protected:
        std::string type;
};

#endif