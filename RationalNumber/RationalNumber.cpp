#include "RationalNumber.h"
#include <string>
#define THIS_INT (*(std::string*)this->integer)
#define THIS_DEC (*(std::string*)this->decimal)

RationalNumber::RationalNumber() {
    integer = new std::string;
    decimal = new std::string;
    THIS_INT = "0";
    THIS_DEC = "0";
}

RationalNumber::RationalNumber(int num) {
    integer = new std::string;
    decimal = new std::string;
    THIS_INT = "0";
    THIS_DEC = "0";
    *this = num;
}
RationalNumber::RationalNumber(long num) {
    integer = new std::string;
    decimal = new std::string;
    THIS_INT = "0";
    THIS_DEC = "0";
    *this = num;
}
RationalNumber::RationalNumber(long long num) {
    integer = new std::string;
    decimal = new std::string;
    THIS_INT = "0";
    THIS_DEC = "0";
    *this = num;
}

RationalNumber::RationalNumber(unsigned int num) {
    integer = new std::string;
    decimal = new std::string;
    THIS_INT = "0";
    THIS_DEC = "0";
    *this = num;
}
RationalNumber::RationalNumber(unsigned long num) {
    integer = new std::string;
    decimal = new std::string;
    THIS_INT = "0";
    THIS_DEC = "0";
    *this = num;
}
RationalNumber::RationalNumber(unsigned long long num) {
    integer = new std::string;
    decimal = new std::string;
    THIS_INT = "0";
    THIS_DEC = "0";
    *this = num;
}

RationalNumber::RationalNumber(float num, unsigned long long accuracy) {
    integer = new std::string;
    decimal = new std::string;
    THIS_INT = "0";
    THIS_DEC = "0";
    this->accuracy = accuracy;
    *this = num;
}
RationalNumber::RationalNumber(double num, unsigned long long accuracy) {
    integer = new std::string;
    decimal = new std::string;
    THIS_INT = "0";
    THIS_DEC = "0";
    this->accuracy = accuracy;
    *this = num;
}
RationalNumber::RationalNumber(long double num, unsigned long long accuracy) {
    integer = new std::string;
    decimal = new std::string;
    THIS_INT = "0";
    THIS_DEC = "0";
    this->accuracy = accuracy;
    *this = num;
}

RationalNumber::RationalNumber(const char* num_tmp) {
    integer = new std::string;
    decimal = new std::string;
    THIS_INT = "0";
    THIS_DEC = "0";
    *this = num_tmp;
}

RationalNumber::RationalNumber(const RationalNumber &rn) {
    delete (std::string *) integer;
    delete (std::string *) decimal;
    integer = new std::string;
    decimal = new std::string;
    THIS_INT = *(std::string *) rn.integer;
    THIS_DEC = *(std::string *) rn.decimal;
    symbol = rn.symbol;
    accuracy = rn.accuracy;
}

RationalNumber::~RationalNumber() {
    delete (std::string *) integer;
    delete (std::string *) decimal;
    integer = nullptr;
    decimal = nullptr;
    delete[]ccstr;
    ccstr = nullptr;
}
