#include "Dog.hpp"

Dog::Dog() : Animal()
{
    _brain = new Brain();
    type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog const &src) : Animal(src)
{
    _brain = new Brain();
    *_brain = *src._brain;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog & Dog::operator=(Dog const &rhs)
{
    if (this == &rhs)
        return *this;
    type = rhs.type;
    *_brain = *rhs._brain;
    return *this;
}

void Dog::makeSound()const
{
    std::cout << "Woof!" << std::endl;
}

void Dog::setIdea(int idx, const std::string& idea)
{
    if (idx < 0 || idx >= 100)
        return;
    _brain->ideas[idx] = idea;
}

std::string Dog::getIdea(int idx) const
{
    if (idx < 0 || idx >= 100)
        return "";
    return _brain->ideas[idx];
}
