#include "Character.hpp"

Character::Character(std::string name) : _name(name) 
{
    for(int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character::~Character(){}

Character::Character(Character const & src)
{
    *this = src;
}
Character & Character::operator=(Character const & rhs)
{
    _name = rhs._name;
    for (int i = 0; i < 4; i++)
        _inventory[i] = rhs._inventory[i];
    return *this;    
}

std::string const & Character::getName() const
{
    return this->_name;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
    {
        std::cerr << "Index invalid" << std::endl;
        return ;
    }
    _inventory[idx] = NULL;
}

void Character::equip(AMateria* m)
{
    if (!m)
        return ;

    for(int i = 0; i < 4; i++)
    {
        if (!_inventory[i])
        {
            _inventory[i] = m;
            return ;
        }
    }

    std::cout << "No one slot availaible" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3)
    {
        std::cerr << "Index invalid" << std::endl;
        return ;
    }
    if (_inventory[idx])
        _inventory[idx]->use(target);
}
