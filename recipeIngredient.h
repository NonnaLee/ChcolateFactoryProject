#include <iostream>
#include <string>
#include <stdio.h>
#include "ingredient.h"

using namespace std;

#ifndef RECIPEINGREDIENT_H
#define RECIPEINGREDIENT_H

class RecipeIngredient{
private:
    Ingredient ingredient;
    int qty;
public:
    RecipeIngredient();
    RecipeIngredient(Ingredient ingredient, int qty);
   
    Ingredient getIngredient();
    void setIngredient(Ingredient ingredient);

    int getQty();
    void setQty(int qty);

};

#endif