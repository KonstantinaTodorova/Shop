#include "Cigarette.h"


void Cigarette::copy(const Cigarette& other)
{
    this->cigaretteName = new char[strlen(other.cigaretteName) + 1];
    strcpy(this->cigaretteName, other.cigaretteName);
}
void Cigarette::destroy()
{
    delete[] cigaretteName;
}
Cigarette::Cigarette(char* cigaretteName, unsigned int nicotinePercent):Product(price)
{
    setCigaretteName(cigaretteName);
    setNicotinePercent(nicotinePercent);
}
Cigarette::Cigarette():Product(price)
{
    cigaretteName = NULL;
    nicotinePercent = 0;
}

Cigarette::~Cigarette()
{
    destroy();
}

Cigarette::Cigarette(const Cigarette& other)
{
    copy(other);
}
char* Cigarette::getCigaretteName() const
{
    return cigaretteName;
}
unsigned int Cigarette::getNicotinePercent() const
{
    return nicotinePercent;
}

void Cigarette::setCigaretteName(char* cigaretteName)
{
    delete[] cigaretteName;
    this->cigaretteName = new char[strlen(cigaretteName) + 1];
    strcpy(this->cigaretteName, cigaretteName);
}
void Cigarette::setNicotinePercent(unsigned int nicotinePercent)
{
    this->nicotinePercent = nicotinePercent;
}
void Cigarette::print()
{
    Product::print();
    std::cout << "The cigarette name is :" << getCigaretteName() << std::endl;
    std::cout << "The nicotine percent is :" << getNicotinePercent() << std::endl;
}
