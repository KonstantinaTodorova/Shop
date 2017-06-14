#pragma once

#include <Product.h>
#include <cstring>
#include <iostream>

class Cigarette : public Product
{
    public:
        Cigarette(char*, unsigned int);
        Cigarette();
        ~Cigarette();
        Cigarette(const Cigarette& other);

        char* getCigaretteName() const;
        unsigned int getNicotinePercent() const;

        void setCigaretteName(char*);
        void setNicotinePercent(unsigned int);

        void print();

    protected:
        char* cigaretteName;
        unsigned int nicotinePercent;

    private:
        void copy(const Cigarette& other);
        void destroy();

};


