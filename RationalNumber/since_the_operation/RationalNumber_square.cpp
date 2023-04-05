#define RATIONAL_NUMBER_EXPORT
#include "../RationalNumber.h"

RationalNumber& RationalNumber::operator*=(const RationalNumber& num) {
	(*this) = (*this) * num;
	return *this;
}

RationalNumber& RationalNumber::operator*=(int num) {
	return *this *= RationalNumber(num);
}
RationalNumber& RationalNumber::operator*=(long num) {
    return *this *= RationalNumber(num);
}
RationalNumber& RationalNumber::operator*=(long long num) {
    return *this *= RationalNumber(num);
}

RationalNumber& RationalNumber::operator*=(unsigned int num) {
    return *this *= RationalNumber(num);
}
RationalNumber& RationalNumber::operator*=(unsigned long num) {
    return *this *= RationalNumber(num);
}
RationalNumber& RationalNumber::operator*=(unsigned long long num) {
    return *this *= RationalNumber(num);
}

RationalNumber& RationalNumber::operator*=(float num) {
    return *this *= RationalNumber(num);
}
RationalNumber& RationalNumber::operator*=(double num) {
    return *this *= RationalNumber(num);
}
RationalNumber& RationalNumber::operator*=(long double num) {
    return *this *= RationalNumber(num);
}

RationalNumber& RationalNumber::operator*=(const char* num) {
    return *this *= RationalNumber(num);
}
