#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    type = "WrongCat";
    std::cout << "Wrongcat constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal()
{
    *this = src;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat Meow...?" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const &rhs)
{
    type = rhs.type;
    return *this;
}