#include "../RationalNumber.h"
#include "../../Exception/ArrayIndexOutOfBoundsException/ArrayIndexOutOfBoundsException.h"

[[maybe_unused]]
size_t RationalNumber::getAccuracy() const {
	return accuracy;
}
size_t RationalNumber::getIntegerSize() const {
	return integer.size();
}
size_t RationalNumber::getDecimalSize() const {
	if (decimal == "0")return 0;
	return decimal.size();
}
RationalNumber RationalNumber::getInteger() const {
	return {(std::string(symbol == 1 ? "" : "-") + integer).c_str()};
}
RationalNumber RationalNumber::getDecimal() const {
	RationalNumber tmp;
	tmp.accuracy = accuracy;
	tmp = ((std::string)(symbol == 1 ? "0." : "-0.") + decimal).c_str();
	return tmp;
}
RationalNumber RationalNumber::getPureNumber() const {
	if (decimal == "0")
		return {integer.c_str()};
	return {(integer + decimal).c_str()};
}

size_t RationalNumber::getPureNumberSize() const {
	std::string tmp = getPureNumber().c_str();
	return tmp.size();
}

bool RationalNumber::getSymbol() const {
	return symbol;
}

[[maybe_unused]]
char RationalNumber::getElement(size_t num) {
	if (num >= (integer + decimal).size()) {
		throw ArrayIndexOutOfBoundsException("RationalNumber::getElement","数组越界");
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
