#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
#include <ctime>
#include "finalProduct.h"


using namespace std;

FinalProduct::FinalProduct(){};
FinalProduct::FinalProduct(string name, string productID, double unitPrice, Date bestBefore):Product(name,productID,unitPrice){
    this->bestBefore = bestBefore;
};

Date FinalProduct::getBestBefore(){
    return bestBefore;
}
string FinalProduct::getBestBeforeAsString(){
    return to_string(bestBefore.month)+"-"+to_string(bestBefore.year);
}

void FinalProduct::setBestBefore(Date bestBefore){
    this->bestBefore = bestBefore;
}