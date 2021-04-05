#include <iostream>
#include <string>
#include <stdio.h>
#include "batch.h"
#include <ctime>

using namespace std;

int Batch::lastBatchNumber = 1000;
Batch::Batch(){};
Batch::Batch(Date batchDate, int totalProduction){
    this->batchDate = batchDate;
    this->totalProduction = totalProduction;
    batchNumber = lastBatchNumber;
    lastBatchNumber++;
};
Batch::Batch(int batchNumber, Date batchDate, int totalProduction){
    this->batchNumber = batchNumber;
    this->batchDate = batchDate;
    this->totalProduction = totalProduction;
};

int Batch::getBatchNumber(){
    return batchNumber;
};
void Batch::setBatchNumber(int batchNumber){
    this->batchNumber = batchNumber;
};

Date Batch::getBatchDate(){
    return batchDate;
};
void Batch::setBatchDate(Date batchDate){
    this->batchDate = batchDate;
};

int Batch::getTotalProduction(){
    return totalProduction;
};
void Batch::setTotalProduction(int totalProduction){
    this->totalProduction = totalProduction;
};
