#include "../RationalNumber.h"

bool RationalNumber::operator!=(RationalNumber num) {
	if (this->getSymbol() != num.getSymbol())
		return 1;
	if (this->getPureNumberSize() != num.getPureNumberSize())
		return 1;
	std::string tmp1 = this->getPureNumber().c_str();
	std::string tmp2 = num.getPureNumber().c_str();
	size_t len = 0;
	for (len = 0; len < tmp1.size() && tmp1[len] == tmp2[len]; len++);
	if (len != tmp1.size())return 1;
	return 0;
}

bool RationalNumber::operator!=(int num) {
	RationalNumber tmp = num;
	return *this != tmp;
}
bool RationalNumber::operator!=(long num) {
	RationalNumber tmp = num;
	return *this != tmp;
}
bool RationalNumber::operator!=(long long num) {
	RationalNumber tmp = num;
	return *this != tmp;
}

bool RationalNumber::operator!=(unsigned int num) {
	RationalNumber tmp = num;
	return *this != tmp;
}
bool RationalNumber::operator!=(unsigned long num) {
	RationalNumber tmp = num;
	return *this != tmp;
}
bool RationalNumber::operator!=(unsigned long long num) {
	RationalNumber tmp = num;
	return *this != tmp;
}

bool RationalNumber::operator!=(float num) {
	RationalNumber tmp = num;
	return *this != tmp;
}
bool RationalNumber::operator!=(double num) {
	RationalNumber tmp = num;
	return *this != tmp;
}
bool RationalNumber::operator!=(long double num) {
	RationalNumber tmp = num;
	return *this != tmp;
}

bool RationalNumber::operator!=(const char* num) {
	RationalNumber tmp = num;
	return *this != tmp;
}
