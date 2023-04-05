#define RATIONAL_NUMBER_EXPORT
#include "../RationalNumber.h"
#include <string>
#define THIS_INT (*(std::string*)this->integer)
#define THIS_DEC (*(std::string*)this->decimal)
bool RationalNumber::operator!=(const RationalNumber& num) const {
	if (this->symbol != num.symbol)
		return true;
	if (this->getPureNumberSize() != num.getPureNumberSize())
		return true;
	std::string tmp1 = this->getPureNumber().c_str();
	std::string tmp2 = num.getPureNumber().c_str();
	size_t len;
	for (len = 0; len < tmp1.size() && tmp1[len] == tmp2[len]; len++);
	if (len != tmp1.size())return true;
	return false;
}

bool RationalNumber::operator!=(int num) const {
	return *this != RationalNumber(num);
}
bool RationalNumber::operator!=(long num) const {
    return *this != RationalNumber(num);
}
bool RationalNumber::operator!=(long long num) const {
    return *this != RationalNumber(num);
}

bool RationalNumber::operator!=(unsigned int num) const {
    return *this != RationalNumber(num);
}
bool RationalNumber::operator!=(unsigned long num) const {
    return *this != RationalNumber(num);
}
bool RationalNumber::operator!=(unsigned long long num) const {
    return *this != RationalNumber(num);
}

bool RationalNumber::operator!=(float num) const {
    return *this != RationalNumber(num);
}
bool RationalNumber::operator!=(double num) const {
    return *this != RationalNumber(num);
}
bool RationalNumber::operator!=(long double num) const {
    return *this != RationalNumber(num);
}

bool RationalNumber::operator!=(const char* num) const {
    return *this != RationalNumber(num);
}
bool operator!=(int n, const RationalNumber &r) {
    return RationalNumber(n) != r;
}
bool operator!=(long n, const RationalNumber &r) {
    return RationalNumber(n) != r;
}
bool operator!=(long long n, const RationalNumber &r) {
    return RationalNumber(n) != r;
}
bool operator!=(unsigned int n, const RationalNumber &r) {
    return RationalNumber(n) != r;
}
bool operator!=(unsigned long n, const RationalNumber &r) {
    return RationalNumber(n) != r;
}
bool operator!=(unsigned long long n, const RationalNumber &r) {
    return RationalNumber(n) != r;
}
bool operator!=(float n, const RationalNumber &r) {
    return RationalNumber(n) != r;
}
bool operator!=(double n, const RationalNumber &r) {
    return RationalNumber(n) != r;
}
bool operator!=(long double n, const RationalNumber &r) {
    return RationalNumber(n) != r;
}
bool operator!=(const char *n, const RationalNumber &r) {
    return RationalNumber(n) != r;
}
