#define RATIONAL_NUMBER_EXPORT
#include "../RationalNumber.h"
#include "../../Exception/ArrayIndexOutOfBoundsException/ArrayIndexOutOfBoundsException.h"
#include "../../Exception/DataNotSpecificationException/DataNotSpecificationException.h"
#include <string>
#define THIS_INT (*(std::string*)this->integer)
#define THIS_DEC (*(std::string*)this->decimal)
[[maybe_unused]]
RationalNumber &RationalNumber::setAccuracy(unsigned long long accuracy_e) {
	this->accuracy = accuracy_e;
    return *this;
}
[[maybe_unused]]
RationalNumber &RationalNumber::setSymbol(bool i) {
	symbol = i;
    return *this;
}

[[maybe_unused]]
RationalNumber &RationalNumber::setElement(unsigned long long num, char i) {
	if (num >= (THIS_INT + THIS_DEC).size()) {
		throw ArrayIndexOutOfBoundsException("RationalNumber::setElement","数组越界");
	}
	char* tmp;
	if (num < THIS_INT.size()) {
		tmp = &(THIS_INT)[num];
	}
	else {
		num -= THIS_INT.size();
		tmp = &(THIS_DEC)[num];
	}
	if (i >= 0 && i <= 9)
		(*tmp) = (char)(i + 48);
	else if (i >= '0' && i <= '9')
		(*tmp) = i;
	else throw DataNotSpecificationException("RationalNumber::setElement","数据不符合规范");
    return *this;
}
