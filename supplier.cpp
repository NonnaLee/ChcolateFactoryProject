#include <iostream>
#include <string>
#include <stdio.h>
#include "supplier.h"

using namespace std;

Supplier::Supplier(){};
Supplier::Supplier(int supplierID, string companyName, string supplyType, string paymentTerm){
    this->supplierID = supplierID;
    this->companyName = companyName;
    this->supplyType = supplyType;
    this->paymentTerm = paymentTerm;
};

void Supplier::setSupplierID(int supplierID){
    this->supplierID = supplierID;
};

int Supplier::getSupplierID(){
    return supplierID;
};

void Supplier::setCompanyName(string companyName){
    this->companyName = companyName;
};

string Supplier::getCompanyName(){
    return companyName;
};

void Supplier::setSupplyType(string supplyType){
    this->supplyType = supplyType;
};

string Supplier::getSupplyType(){
    return supplyType;
};

void Supplier::setPaymentTerm(string paymentTerm){
    this->paymentTerm = paymentTerm;
};

string Supplier::getPaymentTerm(){
    return paymentTerm;
};