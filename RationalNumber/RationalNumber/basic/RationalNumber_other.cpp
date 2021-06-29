#define _CRT_SECURE_NO_WARNINGS

#include "../RationalNumber.h"
#include <string.h>

const char* RationalNumber::c_str() {
	std::string tmp;
	if (symbol == 0 && (integer != "0" || decimal != "0")) {
		tmp += '-';
	}
	tmp += integer;
	if (decimal != "0") {
		tmp += ".";
		std::string tmp_d;
		tmp_d.assign(decimal, 0, accuracy);
		tmp += tmp_d;
	}
	if (this->ccstr != 0)delete[]this->ccstr;
	this->ccstr = new char[tmp.size() + 1];
	strcpy(this->ccstr, tmp.c_str());
	this->ccstr[tmp.size()] = 0;
	return ccstr;
}

void RationalNumber::flush() {
	std::string tmp = integer;
	size_t i = 0;
	for (i = 0; i < tmp.size() && tmp[i] == '0'; i++);
	if (i == tmp.size())integer = "0";
	else integer.assign(tmp, i, tmp.size());
	tmp = decimal;
	for (i = decimal.size(); i >= 1 && tmp[i - 1] == '0'; i--);
	if (i == 0)decimal = "0";
	else decimal.assign(tmp, 0, i);

	if (integer == "0" && decimal == "0")symbol = 1;
}
