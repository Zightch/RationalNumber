#define _CRT_SECURE_NO_WARNINGS

#include "../RationalNumber.h"
#include <cstring>

const char* RationalNumber::c_str() {
    delete[]this->ccstr;
    this->ccstr = nullptr;
    RationalNumber tmp = (*this);
    if (tmp.decimal.size() > accuracy) {
        if (tmp.decimal[accuracy] > '5') {
            RationalNumber in1;
            in1.decimal.append(accuracy - 2, '0');
            in1.decimal.append(1, '1');
            tmp += in1;
            std::string ans_decimal_tmp = tmp.decimal;
            tmp.decimal = "";
            tmp.decimal.append(ans_decimal_tmp, 0, accuracy);
        }
    }
    std::string tmp_s;
    if (tmp.symbol == 0 && (tmp.integer != "0" || tmp.decimal != "0")) {
        tmp += '-';
    }
    tmp_s += tmp.integer;
    if (tmp.decimal != "0") {
        tmp_s += ".";
        tmp_s += tmp.decimal;
    }
    this->ccstr = new char[tmp_s.size() + 1];
    strcpy(this->ccstr, tmp_s.c_str());
    this->ccstr[tmp_s.size()] = 0;
    return ccstr;
}

void RationalNumber::flush() {
	std::string tmp = integer;
	size_t i;
	for (i = 0; i < tmp.size() && tmp[i] == '0'; i++);
	if (i == tmp.size())integer = "0";
	else integer.assign(tmp, i, tmp.size());
	tmp = decimal;
	for (i = decimal.size(); i >= 1 && tmp[i - 1] == '0'; i--);
	if (i == 0)decimal = "0";
	else decimal.assign(tmp, 0, i);

	if (integer == "0" && decimal == "0")symbol = true;
}
