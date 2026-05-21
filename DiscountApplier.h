#pragma once
#include <string>

using namespace std;

class DiscountApplier {
public:
    static double applyPromoCode(const string& promoCode, double totalAmount);
};