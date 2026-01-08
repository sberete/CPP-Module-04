#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal const &src)
{
    *this = src;
}

Animal::~Animal(){
     std::cout << "Animal destructor called" << std::endl;
}

Animal & Animal::operator=(Animal const &rhs)
{
    type = rhs.type;
    return *this;
}

void Animal::makeSound()const
{
    std::cout << "Animal makes an unknown sound" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}
