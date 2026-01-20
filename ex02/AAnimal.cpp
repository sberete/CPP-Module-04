#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    type = "AAnimal";
    std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &src)
{
    *this = src;
}

AAnimal::~AAnimal()
{
     std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal & AAnimal::operator=(AAnimal const &rhs)
{
    type = rhs.type;
    return *this;
}

// void AAnimal::makeSound()const
// {
//     std::cout << "AAnimal makes an unknown sound" << std::endl;
// }

std::string AAnimal::getType() const
{
    return type;
}