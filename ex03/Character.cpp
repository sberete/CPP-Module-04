#include "Character.hpp"

Character::Character(std::string name) : _name(name) 
{
    for(int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i])
            delete _inventory[i];
    }
}

Character::Character(Character const & src)
{
    for(int i = 0; i < 4; i++)
        _inventory[i] = NULL;

    *this = src;
}
Character & Character::operator=(Character const & rhs)
{
    if (this == &rhs)
        return *this;

    _name = rhs._name;

    for (int i = 0; i < 4; i++)
    {
        delete _inventory[i];
        _inventory[i] = NULL;

        if (rhs._inventory[i])
            _inventory[i] = rhs._inventory[i]->clone();
    }
        
    return *this;    
}

std::string const & Character::getName() const
{
    return _name;
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
    
    delete m;
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
