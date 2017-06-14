#include "Shop.h"

Shop::Shop()
{
    this->countOfProducts = 0;
    this->productCapacity = 4;
    this->product = new Product*[productCapacity];
}

Shop::~Shop()
{
    for(int i = 0; i < productCapacity; i++)
        delete[] product[i];
    delete[] product;

}

Product* Shop::getProduct(int index)
{
    return product[index];
}

void Shop::addProduct(Product* elemToAdd)
{
    if(countOfProducts == productCapacity)
        resize();

    this->product[countOfProducts] = elemToAdd;
    countOfProducts++;
}
void Shop::removeProduct(Product* elemToRemove)
{
    if(countOfProducts == productCapacity)
        resize();

    this->product[countOfProducts] = elemToRemove;
    countOfProducts--;
}
int Shop::lowestNicotinePercent()
{


}
int Shop::highestAlchoholPercent()
{

}
void Shop::resize()
{
    Product** temp = new Product*[productCapacity * 2];
    this->productCapacity *= 2;

    for(int i = 0; i < countOfProducts; i++)
    {
        temp[i] = product[i];
    }

    delete[] product;

    product = temp;

}
