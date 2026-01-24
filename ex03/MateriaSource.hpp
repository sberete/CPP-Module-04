#ifndef MATERIASOURCE_HPP
    #define MATERIASOURCE_HPP

#include <string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(MateriaSource const &);

        MateriaSource & operator=(MateriaSource const &);
        
    private:
};

#endif