#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

#ifndef SUPPLIER_H
#define SupplierH

class Supplier{
private:
    int supplierID;
    string companyName;
    string supplyType;
    string paymentTerm;

public:
    Supplier();
    Supplier(int supplierID, string companyName, string supplyType, string paymentTerm);

    int getSupplierID();
    void setSupplierID(int supplierID);

    string getCompanyName();
    void setCompanyName(string companyName);

    string getSupplyType();
    void setSupplyType(string supplyType);

    string getPaymentTerm();
    void setPaymentTerm(string paymentTerm);

};

#endif