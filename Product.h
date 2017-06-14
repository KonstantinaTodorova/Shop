#pragma once
#include <iostream>

class Product
{
    public:
        Product(double);
        Product();
        ~Product();
        Product(const Product& other);

        double getPrice() const;
        void setPrice(double);

        void print();

    protected:
        double price;

};


