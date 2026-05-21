#include "AccountCreator.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool AccountCreator::registerNewCustomer(string uname, string pass, string email) {

    ofstream file("D:\\my projects\\New folder\\final project\\x64\\users.txt", ios::app);
    if (file.is_open()) {
        file << uname << "," << pass << "," << email << endl;
        file.close();
        return true; 
    }
    return false; 
}