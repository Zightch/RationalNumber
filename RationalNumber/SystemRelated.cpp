#include "RationalNumber.h"

size_t divisionAccuracy = 23;

[[maybe_unused]]
void RationalNumber::setDivisionAccuracy(size_t num) {
	divisionAccuracy = num;
}
size_t RationalNumber::getDivisionAccuracy() {
	return divisionAccuracy;
}
