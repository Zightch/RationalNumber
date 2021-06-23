#include "../RationalNumber.h"
#include<sstream>

size_t RationalNumber::getAccuracy() {
	return accuracy;
}
size_t RationalNumber::getIntegerSize() {
	return integer.size();
}
size_t RationalNumber::getDecimalSize() {
	if (decimal == "0")return 0;
	return decimal.size();
}
RationalNumber RationalNumber::getInteger() {
	return RationalNumber((std::string(symbol == 1 ? "" : "-") + integer).c_str());
}
RationalNumber RationalNumber::getDecimal() {
	RationalNumber tmp;
	tmp.accuracy = accuracy;
	tmp = ((std::string)(symbol == 1 ? "0." : "-0.") + decimal).c_str();
	return tmp;
}
RationalNumber RationalNumber::getPureNumber() {
	if (decimal == "0")
		return RationalNumber(integer.c_str());
	return RationalNumber((integer + decimal).c_str());
}

size_t RationalNumber::getPureNumberSize() {
	std::string tmp = getPureNumber().c_str();
	return tmp.size();
}

bool RationalNumber::getSymbol() {
	return symbol;
}

char RationalNumber::getElement(size_t num) {
	if (num >= (integer + decimal).size()) {
		throw "数组越界";
	}
	if (num < integer.size()) {
		char tmp = integer[num];
		return tmp;
	}
	else {
		num -= integer.size();
		char tmp = decimal[num];
		return tmp;
	}
}
