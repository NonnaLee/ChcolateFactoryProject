#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include "ingredient.h"

using namespace std;


Ingredient::Ingredient(){};
Ingredient::Ingredient(string name, string productID, double unitPrice, string measurementUnit, int stock):Product(name, productID, unitPrice){
    this-> measurementUnit = measurementUnit;
    this-> stock = stock;
};


string Ingredient::getMeasuremeantUnit(){
    return measurementUnit;
};

void Ingredient::setMeasurementUnit(string measurementUnit){
    this->measurementUnit = measurementUnit;
};

int Ingredient::getStock(){
    return stock;
};

void Ingredient::setStock(int stock){
    this ->stock = stock;
}



