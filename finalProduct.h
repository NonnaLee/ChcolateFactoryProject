#include <iostream>
#include <string>
#include <stdio.h>
#include <ctime>
#include "product.h"
#include "ingredient.h"
#include "batch.h"


using namespace std;

#ifndef FINALPRODUCT_H
#define FINALPRODUCT_H

class FinalProduct:public Product{
private:
    Date bestBefore;  
public:
    FinalProduct();
    FinalProduct(string name, string productID, double unitPrice, Date bestBefore);
    Date getBestBefore();
    string getBestBeforeAsString();
    void setBestBefore(Date bestBefore);
};

#endif