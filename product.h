#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

#ifndef PRODUCT_H
#define PRODUCT_H

class Product{
private:
    string name;
    double unitPrice;
    string productID;

public:
    Product();
    Product(string name, string productID, double unitPrice);

    string getName();
    void setName(string name);

    double getUnitPrice();
    void setUnitPrice(double unitPrice);

    string getProductID();
    void setProductID(string productID);

};

#endif