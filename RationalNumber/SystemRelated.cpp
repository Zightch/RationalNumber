#include "RationalNumber.h"
unsigned long long divisionAccuracy = 23;
[[maybe_unused]]
void RationalNumber::setDivisionAccuracy(unsigned long long num) {
    divisionAccuracy = num;
}
unsigned long long RationalNumber::getDivisionAccuracy() {
    return divisionAccuracy;
}
