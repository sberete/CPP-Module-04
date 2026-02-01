#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const & type) : type(type) {}

AMateria::~AMateria() {}

AMateria::AMateria(AMateria const & src)
{
    *this = src;
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
    type = rhs.type;

    return *this;
}

std::string const & AMateria::getType() const
{
    return type;
}

void AMateria::use(ICharacter& target) 
{
    (void) target;
}
