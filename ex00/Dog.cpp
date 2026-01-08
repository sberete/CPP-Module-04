#include "Dog.hpp"

Dog::Dog() : Animal()
{
    type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog const &src): Animal()
{
    *this = src;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog & Dog::operator=(Dog const &rhs)
{
    type = rhs.type;
    return *this;
}

void Dog::makeSound()const
{
    std::cout << "Woof!" << std::endl;
}
