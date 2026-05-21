#include "Admin.h"
#include <iostream>

using namespace std;

Admin::Admin(string u, string p) : User(u, p) {}

void Admin::addProduct(Product* p) const {
    cout << "Admin [" << username << "] added a new product: " << p->getName() << endl;
}