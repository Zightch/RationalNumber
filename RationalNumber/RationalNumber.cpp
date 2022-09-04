#include "RationalNumber.h"

RationalNumber::RationalNumber() = default;

RationalNumber::RationalNumber(int num) {
	*this = num;
}
RationalNumber::RationalNumber(long num) {
	*this = num;
}
RationalNumber::RationalNumber(long long num) {
	*this = num;
}

RationalNumber::RationalNumber(unsigned int num) {
	*this = num;
}
RationalNumber::RationalNumber(unsigned long num) {
	*this = num;
}
RationalNumber::RationalNumber(unsigned long long num) {
	*this = num;
}

RationalNumber::RationalNumber(float num, size_t accuracy) {
	this->accuracy = accuracy;
	*this = num;
}
RationalNumber::RationalNumber(double num, size_t accuracy) {
	this->accuracy = accuracy;
	*this = num;
}
RationalNumber::RationalNumber(long double num, size_t accuracy) {
	this->accuracy = accuracy;
	*this = num;
}

RationalNumber::RationalNumber(const char* num_tmp) {
	std::string num = num_tmp;
	*this = num.c_str();
}

RationalNumber::~RationalNumber() {
    delete[]ccstr;
    ccstr = nullptr;
}
