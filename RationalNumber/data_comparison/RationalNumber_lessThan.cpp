#include "../RationalNumber.h"
#include <string>
#define THIS_INT (*(std::string*)this->integer)
#define THIS_DEC (*(std::string*)this->decimal)
bool RationalNumber::operator<(const RationalNumber& num) const {
    if (symbol == 1 && num.symbol == 0)return false;
    if (symbol == 0 && num.symbol == 1)return true;
    if (symbol == 1) {
        {//整数大小比较
            if (THIS_INT.size() < ((std::string *) num.integer)->size())
                return true;
            else if (THIS_INT.size() > ((std::string *) num.integer)->size())
                return false;
            size_t len;
            for (len = 0; len < THIS_INT.size(); len++) {
                if (this->getInteger().c_str()[len] < num.getInteger().c_str()[len])
                    return true;
                if (this->getInteger().c_str()[len] > num.getInteger().c_str()[len])
                    return false;
            }
        }
        {//小数大小比较
            size_t tD = THIS_DEC.empty() ? 1 : THIS_DEC.size();
            size_t nD = ((std::string *) num.decimal)->empty() ? 1 : ((std::string *) num.decimal)->size();
            size_t len, size = (tD > nD) ? nD : tD;
            for (len = 0; len < size; len++) {
                if (this->getDecimal().getPureNumber().c_str()[len] < num.getDecimal().getPureNumber().c_str()[len])
                    return true;
                if (this->getDecimal().getPureNumber().c_str()[len] > num.getDecimal().getPureNumber().c_str()[len])
                    return false;
            }
            if (len == size) {
                if (THIS_DEC.size() < ((std::string *) num.decimal)->size())
                    return true;
                else return false;
            }
        }
    } else {
        RationalNumber tmp1 = *this;
        RationalNumber tmp2 = num;
        tmp1.symbol = true;
        tmp2.symbol = true;
        return (tmp1 > tmp2);
    }
    return false;
}

bool RationalNumber::operator<(int num) const {
	return *this < RationalNumber(num);
}
bool RationalNumber::operator<(long num) const {
    return *this < RationalNumber(num);
}
bool RationalNumber::operator<(long long num) const {
    return *this < RationalNumber(num);
}

bool RationalNumber::operator<(unsigned int num) const {
    return *this < RationalNumber(num);
}
bool RationalNumber::operator<(unsigned long num) const {
    return *this < RationalNumber(num);
}
bool RationalNumber::operator<(unsigned long long num) const {
    return *this < RationalNumber(num);
}

bool RationalNumber::operator<(float num) const {
    return *this < RationalNumber(num);
}
bool RationalNumber::operator<(double num) const {
    return *this < RationalNumber(num);
}
bool RationalNumber::operator<(long double num) const {
    return *this < RationalNumber(num);
}

bool RationalNumber::operator<(const char* num) const {
    return *this < RationalNumber(num);
}
bool operator<(int n, const RationalNumber &r) {
    return RationalNumber(n) < r;
}
bool operator<(long n, const RationalNumber &r) {
    return RationalNumber(n) < r;
}
bool operator<(long long n, const RationalNumber &r) {
    return RationalNumber(n) < r;
}
bool operator<(unsigned int n, const RationalNumber &r) {
    return RationalNumber(n) < r;
}
bool operator<(unsigned long n, const RationalNumber &r) {
    return RationalNumber(n) < r;
}
bool operator<(unsigned long long n, const RationalNumber &r) {
    return RationalNumber(n) < r;
}
bool operator<(float n, const RationalNumber &r) {
    return RationalNumber(n) < r;
}
bool operator<(double n, const RationalNumber &r) {
    return RationalNumber(n) < r;
}
bool operator<(long double n, const RationalNumber &r) {
    return RationalNumber(n) < r;
}
bool operator<(const char *n, const RationalNumber &r) {
    return RationalNumber(n) < r;
}
