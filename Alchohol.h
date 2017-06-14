#pragma once

#include <Product.h>
#include <cstring>
#include <iostream>

class Alchohol : public Product
{
    public:
        Alchohol(char*, unsigned int);
        Alchohol();
        ~Alchohol();
        Alchohol(const Alchohol& other);

        char* getAlchoholName() const;
        unsigned int getAlchoholPercent() const;

        void setAlchoholName(char*);
        void setAlchoholPercent(unsigned int);

        void print();

    protected:
        char* alchoholName;
        unsigned int alchoholPercent;

    private:
        void copy(const Alchohol& other);
        void destroy();

};

