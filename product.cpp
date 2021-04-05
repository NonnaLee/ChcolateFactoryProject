#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include "product.h"

using namespace std;

Product::Product(){};
Product::Product(string name, string productID, double unitPrice){
    this->name = name;
    this->unitPrice = unitPrice;
    this->productID = productID;
};

void Product::setName(string name){
    this->name = name;
};

string Product::getName(){
    return name;
};

void Product::setUnitPrice(double unitPrice){
    this->unitPrice = unitPrice;
};

double Product::getUnitPrice(){
    return unitPrice;
};

void Product::setProductID(string productID){
    this->productID = productID;
};

string Product::getProductID(){
    return productID;
};
