#include "../RationalNumber.h"

#include<sstream>

void RationalNumber::setAccuracy(unsigned long accuracy) {
	this->accuracy = accuracy;
}

void RationalNumber::setSymbol(bool i) {
	symbol = i;
}

void RationalNumber::setElement(size_t num, char i) {
	if (num >= (integer + decimal).size()) {
		throw "数组越界";
	}
	char* tmp = 0;
	if (num < integer.size()) {
		tmp = &integer[num];
	}
	else {
		num -= integer.size();
		tmp = &decimal[num];
	}
	if (i >= 0 && i <= 9)
		(*tmp) = i + 48;
	else if (i >= '0' && i <= '9')
		(*tmp) = i;
	else throw "数据不符合规范";
}
