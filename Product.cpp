#include "Product.h"
#include <iostream>

Product::Product(int i, string n, double p) {
    id = i;
    name = n;
    price = p;
}

void Product::display() const {
    cout << "Product ID: " << id << " | Name: " << name << " | Price: $" << price << endl;
}