#include "RationalNumber.h"

size_t divisionAccuracy = 24;

void setDivisionAccuracy(size_t num) {
	divisionAccuracy = num;
}
size_t getDivisionAccuracy() {
	return divisionAccuracy;
}
