#include <iostream>
#include <string>
#include <stdio.h>
#include "ingredient.h"

using namespace std;

#ifndef PRODUCTINGREDIENT_H
#define PRODUCTINGREDIENT_H

class ProductIngredient{
public:
    Ingredient milk;
    Ingredient sugar;
    Ingredient cocoa; 
};



ProductIngredient ingredientsCreate(){
    ProductIngredient productIngredient = ProductIngredient();
    Ingredient milk;
    milk.setName("Milk") ;
    milk.setProductID("789");
    milk.setUnitPrice(0.0008);
    milk.setMeasurementUnit("ml");
    milk.setStock(20000);

    Ingredient sugar;
    sugar.setName("Sugar") ;
    sugar.setProductID("754");
    sugar.setUnitPrice(0.0005);
    sugar.setMeasurementUnit("gm");
    sugar.setStock(8000000);

    Ingredient cocoa;
    cocoa.setName("Cocoa") ;
    cocoa.setProductID("777");
    cocoa.setUnitPrice(0.003);
    cocoa.setMeasurementUnit("gm");
    cocoa.setStock(1200000);    

    productIngredient.milk = milk;
    productIngredient.sugar = sugar;
    productIngredient.cocoa = cocoa;
    return productIngredient;
}
#endif