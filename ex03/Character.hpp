#ifndef CHARACTER_HPP
    #define CHARACTER_HPP

#include <string>
#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter  
{
    public:
        Character(std::string);
        ~Character();
        Character(Character const &);

        Character & operator=(Character const &);
        
        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
        
    private:
        AMateria* _inventory[4];
        std::string _name;
};

#endif