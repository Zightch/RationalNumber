#define RATIONAL_NUMBER_EXPORT
#include "../RationalNumber.h"
#include "../../Exception/ArrayIndexOutOfBoundsException/ArrayIndexOutOfBoundsException.h"
#include <string>
#define THIS_INT (*(std::string*)this->integer)
#define THIS_DEC (*(std::string*)this->decimal)
[[maybe_unused]]
unsigned long long RationalNumber::getAccuracy() const {
	return accuracy;
}
unsigned long long RationalNumber::getIntegerSize() const {
	return THIS_INT.size();
}
[[maybe_unused]]
unsigned long long RationalNumber::getDecimalSize() const {
	if (THIS_DEC == "0")return 0;
	return THIS_DEC.size();
}
RationalNumber RationalNumber::getInteger() const {
    return RationalNumber((std::string(symbol == 1 ? "" : "-") + THIS_INT).c_str());
}
RationalNumber RationalNumber::getDecimal() const {
	RationalNumber tmp;
	tmp.accuracy = accuracy;
	tmp = ((std::string)(symbol == 1 ? "0." : "-0.") + THIS_DEC).c_str();
	return tmp;
}
RationalNumber RationalNumber::getPureNumber() const {
    if (THIS_DEC == "0")
        return RationalNumber(THIS_INT.c_str());
    return RationalNumber((THIS_INT + THIS_DEC).c_str());
}

unsigned long long RationalNumber::getPureNumberSize() const {
	std::string tmp = getPureNumber().c_str();
	return tmp.size();
}

[[maybe_unused]]
bool RationalNumber::getSymbol() const {
	return symbol;
}

[[maybe_unused]]
char RationalNumber::getElement(unsigned long long num) {
	if (num >= (THIS_INT + THIS_DEC).size()) {
		throw ArrayIndexOutOfBoundsException("RationalNumber::getElement","数组越界");
	}
	if (num < THIS_INT.size()) {
		char tmp = THIS_INT[num];
		return tmp;
	}
	else {
		num -= THIS_INT.size();
		char tmp = THIS_DEC[num];
		return tmp;
	}
}
