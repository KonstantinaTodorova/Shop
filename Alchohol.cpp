#include "Alchohol.h"


void Alchohol::copy(const Alchohol& other)
{
    this->alchoholName = new char[strlen(other.alchoholName) + 1];
    strcpy(this->alchoholName, other.alchoholName);
}
void Alchohol::destroy()
{
    delete[] alchoholName;
}
Alchohol::Alchohol(char* alchoholName,unsigned int alchoholPercent):Product(price)
{
    setAlchoholName(alchoholName);
    setAlchoholPercent(alchoholPercent);
}
Alchohol::Alchohol():Product(price)
{
    alchoholName = NULL;
    alchoholPercent = 0;
}

Alchohol::~Alchohol()
{
    destroy();
}

Alchohol::Alchohol(const Alchohol& other)
{
    copy(other);
}
char* Alchohol::getAlchoholName() const
{
    return this->alchoholName;
}
unsigned int Alchohol::getAlchoholPercent() const
{
    return this->alchoholPercent;
}

void Alchohol::setAlchoholName(char* alchoholName)
{
    delete[] alchoholName;
    this->alchoholName = new char[strlen(alchoholName) + 1];
    strcpy(this->alchoholName, alchoholName);
}
void Alchohol::setAlchoholPercent(unsigned int alchoholPercent)
{
    this->alchoholPercent = alchoholPercent;
}
void Alchohol::print()
{
    Product::print();
    std::cout << "The alcohol name is :" << getAlchoholName() << std::endl;
    std::cout << "The alcohol percent is :" << getAlchoholPercent() << std::endl;
}

