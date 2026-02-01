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
        
        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);

    private:
        AMateria* _storage[4];
};

#endif