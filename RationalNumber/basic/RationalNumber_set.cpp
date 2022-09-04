#include "../RationalNumber.h"
#include "../../Exception/ArrayIndexOutOfBoundsException/ArrayIndexOutOfBoundsException.h"
#include "../../Exception/DataNotSpecificationException/DataNotSpecificationException.h"

[[maybe_unused]]
void RationalNumber::setAccuracy(unsigned long accuracy_e) {
	this->accuracy = accuracy_e;
}

void RationalNumber::setSymbol(bool i) {
	symbol = i;
}

[[maybe_unused]] void RationalNumber::setElement(size_t num, char i) {
	if (num >= (integer + decimal).size()) {
		throw ArrayIndexOutOfBoundsException("RationalNumber::setElement","数组越界");
	}
	char* tmp;
	if (num < integer.size()) {
		tmp = &integer[num];
	}
	else {
		num -= integer.size();
		tmp = &decimal[num];
	}
	if (i >= 0 && i <= 9)
		(*tmp) = (char)(i + 48);
	else if (i >= '0' && i <= '9')
		(*tmp) = i;
	else throw DataNotSpecificationException("RationalNumber::setElement","数据不符合规范");
}
