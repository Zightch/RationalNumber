﻿#include "../RationalNumber.h"

bool RationalNumber::operator>=(const RationalNumber& num) const {
	if (*this == num || *this > num)return true;
	return false;
}

bool RationalNumber::operator>=(int num) const {
	return *this >= RationalNumber(num);
}
bool RationalNumber::operator>=(long num) const {
    return *this >= RationalNumber(num);
}
bool RationalNumber::operator>=(long long num) const {
    return *this >= RationalNumber(num);
}

bool RationalNumber::operator>=(unsigned int num) const {
    return *this >= RationalNumber(num);
}
bool RationalNumber::operator>=(unsigned long num) const {
    return *this >= RationalNumber(num);
}
bool RationalNumber::operator>=(unsigned long long num) const {
    return *this >= RationalNumber(num);
}

bool RationalNumber::operator>=(float num) const {
    return *this >= RationalNumber(num);
}
bool RationalNumber::operator>=(double num) const {
    return *this >= RationalNumber(num);
}
bool RationalNumber::operator>=(long double num) const {
    return *this >= RationalNumber(num);
}

bool RationalNumber::operator>=(const char* num) const {
    return *this >= RationalNumber(num);
}
