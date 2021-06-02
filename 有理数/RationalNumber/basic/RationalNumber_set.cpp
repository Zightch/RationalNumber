#include "../RationalNumber.h"

#include<sstream>

void RationalNumber::setAccuracy(unsigned long accuracy) {
	this->accuracy = accuracy;
}

void RationalNumber::setSymbol(bool i) {
	symbol = i;
}

void RationalNumber::setElement(RationalNumber num, char i) {
	if (num >= (integer + decimal).size()) {
		throw "数组越界";
	}
	std::stringstream tmp_s;
	tmp_s << num.integer;
	size_t len;
	tmp_s >> len;
	char* tmp = 0;
	if (len < integer.size()) {
		tmp = &integer[len];
	}
	else {
		len -= integer.size();
		tmp = &decimal[len];
	}
	if (i >= 0 && i <= 9)
		(*tmp) = i + 48;
	else if (i >= '0' && i <= '9')
		(*tmp) = i;
	else throw "数据不符合规范";
}

void RationalNumber::setElement(size_t num, char i) {
	RationalNumber tmp = num;
	this->setElement(tmp, i);
}
