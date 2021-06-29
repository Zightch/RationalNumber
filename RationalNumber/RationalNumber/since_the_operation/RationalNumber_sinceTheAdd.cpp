#include "../RationalNumber.h"

RationalNumber RationalNumber::operator+=(RationalNumber num) {
	(*this) = (*this) + num;
	return *this;
}

RationalNumber RationalNumber::operator+=(int num) {
	RationalNumber tmp = num;
	return *this += tmp;
}
RationalNumber RationalNumber::operator+=(long num) {
	RationalNumber tmp = num;
	return *this += tmp;
}
RationalNumber RationalNumber::operator+=(long long num) {
	RationalNumber tmp = num;
	return *this += tmp;
}

RationalNumber RationalNumber::operator+=(unsigned int num) {
	RationalNumber tmp = num;
	return *this += tmp;
}
RationalNumber RationalNumber::operator+=(unsigned long num) {
	RationalNumber tmp = num;
	return *this += tmp;
}
RationalNumber RationalNumber::operator+=(unsigned long long num) {
	RationalNumber tmp = num;
	return *this += tmp;
}

RationalNumber RationalNumber::operator+=(float num) {
	RationalNumber tmp = num;
	return *this += tmp;
}
RationalNumber RationalNumber::operator+=(double num) {
	RationalNumber tmp = num;
	return *this += tmp;
}
RationalNumber RationalNumber::operator+=(long double num) {
	RationalNumber tmp = num;
	return *this += tmp;
}

RationalNumber RationalNumber::operator+=(const char* num) {
	RationalNumber tmp = num;
	return *this += tmp;
}
