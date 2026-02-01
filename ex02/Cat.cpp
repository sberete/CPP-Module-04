#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
    _brain = new Brain();
    type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const &src) : AAnimal(src)
{
    _brain = new Brain();
    *_brain = *src._brain;
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat & Cat::operator=(Cat const &rhs)
{
    if (this == &rhs)
        return *this;
    type = rhs.type;
    *_brain = *rhs._brain;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}

void Cat::setIdea(int index, const std::string& idea)
{
    if (index < 0 || index >= 100)
        return;
    _brain->ideas[index] = idea;
}

std::string const & Cat::getIdea(int index) const
{
    if (index < 0 || index >= 100)
        return "";
    return _brain->ideas[index];
}