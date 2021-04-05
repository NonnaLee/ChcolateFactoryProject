#include <iostream>
#include <string>
#include <stdio.h>
#include "product.h"

using namespace std;

#ifndef INGREDIENT_H
#define INGREDIENT_H

class Ingredient: public Product{
private:
//Product(string name, string productID, double unitPrice)
    // string productName;
    // string productID;
    // double unitPrice;
    int stock;
    string measurementUnit;
public:
    Ingredient();
    Ingredient(string measurementUnit, int stock);
    Ingredient(string name, string productID, double unitPrice, string measurementUnit, int stock);

    string getMeasuremeantUnit();
    void setMeasurementUnit(string measurementUnit);

    int getStock();
    void setStock(int stock);

};

#endif