#include <iostream>
#include <string>
#include <math.h>
#include "chocolateBuilder.h"
#include "helper.cpp"

using namespace std;

ProductIngredient ChocolateBuilder::productIngredient = ingredientsCreate();

struct OffSetProfit{
    double mini = 10;
    double small = mini*0.9;
    double medium = mini*0.8;
    double large = mini*0.75;
};
ChocolateBuilder::ChocolateBuilder(){};
 
void ChocolateBuilder::createChocolateProduct(){ 
    clearScreenAndPrintHeader();
    cout << "How many chcolate for this production is need? ";
    cin >> totalProduction;

    clearScreenAndPrintHeader();
    cout << "Type of chocolate: 1- Milk, 2-Dark ";
    cin >> chocoTypeOption;
    switch(chocoTypeOption){
        case 1:
            chocolateType = "Milk Chocolate";
            sugarPropotion = (double)40/(double)100;
            milkPropotion = (double)40/(double)100;
            cocoaPropotion = (double)20/(double)100;
            cout << "ChcotypeOption 1 DEBUG" <<endl;
            break;
        case 2:
            chocolateType = "Dark Chocolate";
            sugarPropotion = (double)30/(double)100;
            milkPropotion = (double)30/(double)100;
            cocoaPropotion = (double)40/(double)100;
            break;
    }
   
    clearScreenAndPrintHeader();
    cout << "Which mould would be used today? 1-Frog, 2-Heart, 3-Egg? ";
    cin >> chocoMouldOption;
    switch(chocoMouldOption){
        case 1:
            mould = "Frog";
            productGrams = 80;           
            break;
        case 2:
            mould = "Heart"; 
            productGrams = 60;          
            break;

        case 3:
            mould = "Egg"; 
            productGrams = 40;          
            break;
    }

    clearScreenAndPrintHeader();
    cout << "Which size would be produced today? 1-mini, 2-small, 3-medium, 4-large ";
    cin >> chocoSizeOption;
    switch(chocoSizeOption){
        case 1:
            mouldSize = "Mini";
            productGrams = productGrams*1;
            profitSet = OffSetProfit().mini;           
            break;
        case 2:
            mouldSize = "Small";
            productGrams = productGrams*1.5;
            profitSet = OffSetProfit().small;              
            break;

        case 3:
            mouldSize = "Medium";
            productGrams = productGrams*2;
            profitSet = OffSetProfit().medium;              
            break;

        case 4:
            mouldSize = "Large";
            productGrams = productGrams*2.5;
            profitSet = OffSetProfit().large;              
            break;
    }

     
    // sugarForBatch = sugarPropotion*totalProduction;
    // milkForBatch = milkPropotion*totalProduction;
    // cocoaForBatch = cocoaPropotion*totalProduction;

    sugarForBatch = productGrams*sugarPropotion*totalProduction;
    milkForBatch = productGrams*milkPropotion*totalProduction;
    cocoaForBatch = productGrams*cocoaPropotion*totalProduction;

    sugarForEach = sugarPropotion*productGrams;
    milkForEach = sugarPropotion*productGrams;
    cocoaForEach = sugarPropotion*productGrams;

    //current date/time based on current system
    time_t theTime = time(NULL);
    struct tm *aTime = localtime(&theTime);

    int day = aTime->tm_mday;
    int month = aTime->tm_mon + 1; 
    int year = aTime->tm_year + 1900; 

    bestBeforeDate = Date(); 
    int storagePeriod = 6; // months
    bestBeforeDate.month =  1 +  aTime->tm_mon + storagePeriod;
    bestBeforeDate.year =  aTime->tm_year + 1900;
    if(bestBeforeDate.month > 12){
        bestBeforeDate.month = bestBeforeDate.month-12;
        bestBeforeDate.year = bestBeforeDate.year+1;
    }

    batch = Batch(bestBeforeDate,totalProduction);

    updateCostForEachChoco();
    updateTotalCost();
    updateEachSalePrice();
    updateTotalSalePrice();
    updateProfit();

}

void ChocolateBuilder::updateCostForEachChoco(){
    eachCost = sugarForEach*productIngredient.sugar.getUnitPrice() + 
                   milkForEach*productIngredient.milk.getUnitPrice() +
                   cocoaForEach*productIngredient.cocoa.getUnitPrice();
}
void ChocolateBuilder::updateTotalCost(){
    totalCost = eachCost * totalProduction;

    //return totalCost;
}

void ChocolateBuilder::updateEachSalePrice(){
    eachSalePrice = eachCost+(eachCost*profitSet);
}

void ChocolateBuilder::updateTotalSalePrice(){
    totalSalePrice = eachCost*profitSet*totalProduction;
}
void ChocolateBuilder::updateProfit(){
    totalProfit = totalSalePrice - totalCost;
}
void ChocolateBuilder::printOutReport(){
    string chocoName = mouldSize+" "+chocolateType+" "+mould;
    finalProduct = FinalProduct(chocoName,"812",eachSalePrice,bestBeforeDate);
    finalProduct.setName(chocoName);
    clearScreenAndPrintHeader();
    cout << "PRINT INFO:" << endl;
    cout << "Name: " << finalProduct.getName() << endl
         << "Total Production: " << totalProduction << endl
         << "Batch Number: " <<batch.getBatchNumber() << endl
         << "Best Before Date: " << finalProduct.getBestBeforeAsString() << endl
         << "Total Cost for the batch: " << totalCost << endl
         << "Profit Set:" << profitSet << endl
         << "Indivisual Sale Price:" << eachSalePrice << endl
         << "Total Sale Price: " << totalSalePrice << endl
         << "Total Profit for the batch: " << totalProfit << endl;
        
}

//print out ingredient stock & value page
//Name:
//Product ID:
//Stock:
//Stock in value: