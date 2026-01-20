#ifndef BRAIN_HPP
    #define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
    public:
        Brain();
        Brain(Brain const &);
        ~Brain();

        Brain & operator=(Brain const &);

        std::string ideas[100];
};

#endif