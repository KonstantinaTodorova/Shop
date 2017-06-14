#pragma once
#include <cstring>
#include <iostream>
#include "Product.h"
#include "Cigarette.h"
#include "Alchohol.h"


class Shop
{
    public:
        Shop();
        ~Shop();

        Product* getProduct(int index);


        void addProduct(Product*);
        void removeProduct(Product*);

        int lowestNicotinePercent();
        int highestAlchoholPercent();


    private:
        int countOfProducts;
        int productCapacity;
        Product** product;

        void resize();

};


