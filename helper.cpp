#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

#ifndef HELPER_H
#define HELPER_H

void clearScreenAndPrintHeader(){
    system("CLS");
    cout << "JIA PING'S CHOCOLATE FACTORY" << endl
    << "            _  _" << endl 
    << "          // \\/ \\" << endl 
    << "          \\\\    /" << endl 
    << "           \\\\  /" << endl 
    << "            \\\\/" << endl 
    << endl;
}

#endif