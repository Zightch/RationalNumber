#define _CRT_SECURE_NO_WARNINGS
#include "../RationalNumber.h"
#include <string>
#define THIS_INT (*(std::string*)this->integer)
#define THIS_DEC (*(std::string*)this->decimal)
const char* RationalNumber::c_str() {
    delete[]this->ccstr;
    this->ccstr = nullptr;
    RationalNumber tmp = (*this);
    if (((std::string *) tmp.decimal)->size() > accuracy) {
        if ((*((std::string *) tmp.decimal))[accuracy] > '5') {
            RationalNumber in1;
            ((std::string *) in1.decimal)->append(accuracy - 2, '0');
            ((std::string *) in1.decimal)->append(1, '1');
            tmp += in1;
            std::string ans_decimal_tmp = *(std::string *) tmp.decimal;
            *(std::string *) tmp.decimal = "";
            ((std::string *) tmp.decimal)->append(ans_decimal_tmp, 0, accuracy);
        }
    }
    std::string tmp_s;
    if (tmp.symbol == 0 && (*(std::string *) tmp.integer != "0" || *(std::string *) tmp.decimal != "0")) {
        tmp += '-';
    }
    tmp_s += *(std::string *) tmp.integer;
    if (*(std::string *) tmp.decimal != "0") {
        tmp_s += ".";
        tmp_s += *(std::string *) tmp.decimal;
    }
    this->ccstr = new char[tmp_s.size() + 1];
    for (unsigned long long i = 0; i < tmp_s.size(); i++)
        ccstr[i] = tmp_s[i];
    ccstr[tmp_s.size()] = 0;
    return ccstr;
}

void RationalNumber::flush() {
    std::string tmp = THIS_INT;
    size_t i;
    for (i = 0; i < tmp.size() && tmp[i] == '0'; i++);
    if (i == tmp.size())THIS_INT = "0";
    else
        THIS_INT.assign(tmp, i, tmp.size());
    tmp = THIS_DEC;
    for (i = THIS_DEC.size(); i >= 1 && tmp[i - 1] == '0'; i--);
    if (i == 0)THIS_DEC = "0";
    else
        THIS_DEC.assign(tmp, 0, i);

    if (THIS_INT == "0" && THIS_DEC == "0")symbol = true;
}
