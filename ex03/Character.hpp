#ifndef CHARACTER_HPP
    #define CHARACTER_HPP

#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter  
{
    public:
        Character();
        ~Character();
        Character(Character const &);

        Character & operator=(Character const &);
        
    private:
        AMateria* inventory[4];
};

#endif