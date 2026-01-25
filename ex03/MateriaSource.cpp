#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : IMateriaSource()
{
    for (int i = 0; i < 4; i++)
        _storage[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (_storage[i])
            delete _storage[i];
    }
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    for (int i = 0; i < 4; i++)
        _storage[i] = NULL;

    *this = src;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs)
{
    if (this == &rhs)
        return *this;

    for (int i = 0; i < 4; i++)
    {
        delete _storage[i];
        _storage[i] = NULL;

        if (rhs._storage[i])
            _storage[i] = rhs._storage[i]->clone();
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
     if (!m)
        return ;

    for(int i = 0; i < 4; i++)
    {
        if (!_storage[i])
        {
            _storage[i] = m->clone();
            delete m;
            return ;
        }
    }
    
    delete m;
    std::cout << "Can't stock more" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (_storage[i] && _storage[i]->getType() == type)
            return _storage[i]->clone();
    }

    return 0;
}