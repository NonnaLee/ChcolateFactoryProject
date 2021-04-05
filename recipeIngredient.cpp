#include <iostream>
#include <string>
#include <stdio.h>
#include "recipeIngredient.h"

using namespace std;

RecipeIngredient::RecipeIngredient(){};
RecipeIngredient::RecipeIngredient(Ingredient ingredient, int qty){
    this-> ingredient = ingredient;
    this-> qty = qty;
};

Ingredient RecipeIngredient::getIngredient(){
    return ingredient;
}

void RecipeIngredient::setIngredient(Ingredient ingredient){
    this-> ingredient = ingredient;
}


int RecipeIngredient::getQty(){
    return qty;
}

void RecipeIngredient::setQty(int qty){
    this-> qty = qty;
}