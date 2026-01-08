#include "Cat.hpp"

Cat::Cat() : Animal()
{
    type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const &src) : Animal()
{
    *this = src;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat & Cat::operator=(Cat const &rhs)
{
    type = rhs.type;
    return *this;
}

void Cat::makeSound()const
{
    std::cout << "Meow!" << std::endl;
}

