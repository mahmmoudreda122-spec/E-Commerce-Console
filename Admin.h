#pragma once
#pragma once
#include "User.h"
#include "Product.h"
#include <iostream>
#include <string>

using namespace std;

class Admin : public User {
public:
    Admin(string u, string p);
    void addProduct(Product* p) const;
};