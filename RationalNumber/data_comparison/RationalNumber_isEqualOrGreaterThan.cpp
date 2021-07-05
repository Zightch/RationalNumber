#include "../RationalNumber.h"

bool RationalNumber::operator>=(RationalNumber num) {
	if (*this == num || *this > num)return 1;
	return 0;
}

bool RationalNumber::operator>=(int num) {
	RationalNumber tmp = num;
	return *this >= tmp;
}
bool RationalNumber::operator>=(long num) {
	RationalNumber tmp = num;
	return *this >= tmp;
}
bool RationalNumber::operator>=(long long num) {
	RationalNumber tmp = num;
	return *this >= tmp;
}

bool RationalNumber::operator>=(unsigned int num) {
	RationalNumber tmp = num;
	return *this >= tmp;
}
bool RationalNumber::operator>=(unsigned long num) {
	RationalNumber tmp = num;
	return *this >= tmp;
}
bool RationalNumber::operator>=(unsigned long long num) {
	RationalNumber tmp = num;
	return *this >= tmp;
}

bool RationalNumber::operator>=(float num) {
	RationalNumber tmp = num;
	return *this >= tmp;
}
bool RationalNumber::operator>=(double num) {
	RationalNumber tmp = num;
	return *this >= tmp;
}
bool RationalNumber::operator>=(long double num) {
	RationalNumber tmp = num;
	return *this >= tmp;
}

bool RationalNumber::operator>=(const char* num) {
	RationalNumber tmp = num;
	return *this >= tmp;
}
