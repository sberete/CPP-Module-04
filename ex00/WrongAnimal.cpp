#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "WrongAnimal";
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
    *this = src;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const &rhs)
{
    type = rhs.type;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal makes a strange noise" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return type;
}
