#include <iostream>
#include <string>
#include "finalProduct.h"
#include "batch.h"
#include "productIngredient.cpp"

using namespace std;

#ifndef CHOCOLATEBUILDER_H
#define CHOCOLATEBUILDER_H

class ChocolateBuilder{
public:
    ChocolateBuilder();
    ChocolateBuilder(ProductIngredient productIngredient);
    static ProductIngredient productIngredient;
    int option = 0;
    string chocolateType;
    double sugarPropotion;
    double milkPropotion;
    double cocoaPropotion;
    double sugarForBatch,sugarForEach;
    double milkForBatch,milkForEach;
    double cocoaForBatch,cocoaForEach;
    int totalProduction;
    string mould;
    string mouldSize;
    int productGrams;
    double profitSet = 0.0;
    double totalCost = 0.0;
    double eachCost = 0.0;
    double totalProfit = 0.0;
    double totalSalePrice = 0.0;
    int chocoTypeOption;
    int chocoSizeOption;
    int chocoMouldOption;
    Date bestBeforeDate;
    double eachSalePrice = 0.0;

    FinalProduct finalProduct;

    void createChocolateProduct();
    void updateTotalCost();
    void updateCostForEachChoco();
    void updateTotalSalePrice();
    void updateEachSalePrice();
    void updateProfit();
    void printOutReport();
    Batch batch;


};

#endif



