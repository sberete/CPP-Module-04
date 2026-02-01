#ifndef CURE_HPP
    #define CURE_HPP

#include <string>
#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        ~Cure();
        Cure(Cure const &);

        Cure & operator=(Cure const &);

        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif