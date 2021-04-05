#include <iostream>
#include <string>
#include <stdio.h>
#include "date.cpp"

using namespace std;

#ifndef BATCH_H
#define BATCH_H

class Batch{
private: 
    int batchNumber;
    Date batchDate;
    int totalProduction;
    
public:
    static int lastBatchNumber;
    Batch();
    Batch(Date batchDate, int totalProduction);
    Batch(int batchNumber, Date batchDate, int totalProduction);

    int getBatchNumber();
    void setBatchNumber(int getBatchNumber);

    Date getBatchDate();
    void setBatchDate(Date batchDate);

    int getTotalProduction();
    void setTotalProduction(int totalProduction);

    
};

#endif