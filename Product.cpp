#include "Product.h"

Product::Product(double price)
{
    this->price = price;
}

Product::Product()
{
    price = 0;
}

Product::~Product()
{

}

Product::Product(const Product& other)
{
    this-> price = other.price;
}

double Product::getPrice() const
{
    return this->price;
}

void Product::setPrice(double price)
{
    this->price = price;
}

void Product::print()
{
    std::cout << "The price of the product is : " << getPrice() << std::endl;
}
