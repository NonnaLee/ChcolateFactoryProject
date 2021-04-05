#include <iostream>
#include <string>
#include <stdio.h>
#include <iomanip>
#include "product.cpp"
#include <ctime>
#include <time.h>
#include "ingredient.cpp"
#include "finalProduct.cpp"
#include "chocolateBuilder.cpp"
#include "productIngredient.cpp"
#include "batch.cpp"
#include "helper.cpp"

using namespace std;



int main(){
     
    //Ingredient Testing
//     Ingredient milk("Full Cream Milk","#123",0.8,"litre",6000);
//     Ingredient sugar;
//     sugar.setName("Sugar");
//     sugar.setProductID("#854");
//     sugar.setUnitPrice(0.07);
//     sugar.setMeasurementUnit("kg");
//     sugar.setStock(15000);

//     cout << "Ingredient name: " << milk.getName() << endl
//          << "Ingredient Product ID: " << milk.getProductID() << endl
//          << "Ingredient Unit Price: " << milk.getUnitPrice() << endl
//          << "Ingredient Measurement Unit: " << milk.getMeasuremeantUnit() << endl
//          << "Ingredient Stock: " << milk.getStock() << endl;

//     cout << "Ingredient name: " << sugar.getName() << endl
//          << "Ingredient Product ID: " << sugar.getProductID() << endl
//          << "Ingredient Unit Price: " << sugar.getUnitPrice() << endl
//          << "Ingredient Measurement Unit: " << sugar.getMeasuremeantUnit() << endl
//          << "Ingredient Stock: " << sugar.getStock() << endl;

    // cout << "Final Product: " << endl
    //      << "Final Product name: " << miniFrog.getName() << endl
    //      << "Final Product product id: " << miniFrog.getProductID()<< endl
    //      << "Final unit price: " << miniFrog.getUnitPrice() << endl 
    //      << "Final best before: " << miniFrog.getBestBeforeAsString()<< endl;
     int totalBatches = 0;
     ChocolateBuilder chocolateBuilders[10];
     ProductIngredient productIngredient = ProductIngredient(); 
     bool keepGoing = true;
     while(keepGoing){
          clearScreenAndPrintHeader();
          cout << "Select an option from the menu" << endl
          << "\t 1. Create A Batch" << endl
          << "\t 2. View Old Batch" << endl
          << "\t 3. Exit Program" << endl;
          int option;
          cin >> option;

          ChocolateBuilder chocolateBuilder = ChocolateBuilder();
          char n;
          switch(option){
               case 1:
                    chocolateBuilder.createChocolateProduct();
                    chocolateBuilder.printOutReport();
                    chocolateBuilders[totalBatches] = chocolateBuilder;
                    totalBatches++;

                    cout << endl << "Enter 'A' To Go Back To Menu" << endl;
                    cin >> n;

                    break;
               case 2:
                    clearScreenAndPrintHeader();
                    cout << "Batches: " << endl;
                    for(int i = 0; i < totalBatches; i++){
                         cout << (i+1) << ": "<< chocolateBuilders[i].batch.getBatchNumber() << " - " << chocolateBuilders[i].finalProduct.getName() << endl;
                    }

                    cout << endl << endl << "Enter Batch Number To view Batch Or 0 To go back to menu" << endl;
                    int option;
                    cin >> option;
                    if(option == 0){

                    }else{
                         chocolateBuilders[option-1].printOutReport();
                         cout << endl << "Enter 'A' To Go Back To Menu" << endl;
                         cin >> n;
                    }

                    break;
               case 3:
                    keepGoing = false;
                    break;
          }
          
          
    }
    //chocolateBuilder.calculate();

    return 0;
}