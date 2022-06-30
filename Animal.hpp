#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <iomanip>

class Animal {
    
    private:
        std::string idade;
        std::string familia;
        std::string nome;

    public:
        void print();
        void print_oi();
};

#endif
