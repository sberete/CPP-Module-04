#ifndef WRONGANIMAL_HPP
    #define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal const &);
        ~WrongAnimal();

        WrongAnimal & operator=(WrongAnimal const &);

        void makeSound() const;

        std::string getType() const;
        
    protected:
        std::string type;
};

#endif