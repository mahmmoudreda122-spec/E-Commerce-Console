#include "DiscountApplier.h"

double DiscountApplier::applyPromoCode(const string& promoCode, double totalAmount) {
    if (promoCode == "DIS10") {
        return totalAmount * 0.9;   
    }
    else if (promoCode == "DIS20") {
        return totalAmount * 0.8;   
    }
    return totalAmount;
}