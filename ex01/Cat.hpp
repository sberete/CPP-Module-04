#ifndef CAT_HPP
    #define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(Cat const &);
        ~Cat();

        Cat & operator=(Cat const &);

        virtual void makeSound() const;
        void setIdea(int, const std::string&);
        std::string getIdea(int) const;

    private:
        Brain* _brain;
};

#endif