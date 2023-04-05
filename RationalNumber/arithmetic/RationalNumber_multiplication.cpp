#define RATIONAL_NUMBER_EXPORT
#include "../RationalNumber.h"
#include <string>
#define THIS_INT (*(std::string*)this->integer)
#define THIS_DEC (*(std::string*)this->decimal)
RationalNumber RationalNumber::operator*(const RationalNumber& num) const {
    unsigned long long inner;
    std::string num1;
    unsigned long long outer;
    std::string num2;
    if (this->getPureNumberSize() == num.getPureNumberSize()) {
        outer = this->getPureNumberSize();
        num2 = this->getPureNumber().c_str();
        inner = num.getPureNumberSize();
        num1 = num.getPureNumber().c_str();
    } else {
        inner = this->getPureNumberSize() > num.getPureNumberSize() ? num.getPureNumberSize()
                                                                    : this->getPureNumberSize();
        num1 = this->getPureNumberSize() > num.getPureNumberSize() ? num.getPureNumber().c_str()
                                                                   : this->getPureNumber().c_str();
        outer = this->getPureNumberSize() < num.getPureNumberSize() ? num.getPureNumberSize()
                                                                    : this->getPureNumberSize();
        num2 = this->getPureNumberSize() < num.getPureNumberSize() ? num.getPureNumber().c_str()
                                                                   : this->getPureNumber().c_str();
    }
    RationalNumber up;
    RationalNumber down;
    for (auto i = inner; i >= 1; i--) {
        for (auto j = outer; j >= 1; j--) {
            int a = ((num1[i - 1] - 48) * (num2[j - 1] - 48));
            RationalNumber tmp = RationalNumber(a);
            ((std::string *) tmp.integer)->append(outer - j, '0');
            down += tmp;
        }
        ((std::string *) down.integer)->append(inner - i, '0');
        up += down;
        down = "0";
    }
    std::string ans_s = *(std::string *) up.integer;
    RationalNumber ans;
    if (ans_s.size() > (getDecimalSize() + num.getDecimalSize()))
        ((std::string*)ans.integer)->assign(ans_s, 0, ans_s.size() - (this->getDecimalSize() + num.getDecimalSize()));
    if (ans_s.size() < (getDecimalSize() + num.getDecimalSize())) {
        ((std::string*)ans.decimal)->insert(0, (this->getDecimalSize() + num.getDecimalSize()) - ans_s.size() - 1, '0');
        ((std::string*)ans.decimal)->append(ans_s, 0, ans_s.size());
        goto end;
    }
    if (this->getDecimalSize() + num.getDecimalSize() != 0)
        ((std::string*)ans.decimal)->assign(ans_s, ans_s.size() - (this->getDecimalSize() + num.getDecimalSize()), ans_s.size());
    end:
    if (this->symbol == num.symbol)ans.symbol = true;
    else ans.symbol = false;
    return ans;
}

RationalNumber RationalNumber::operator*(int num) const {
    return *this * RationalNumber(num);
}
RationalNumber RationalNumber::operator*(long num) const {
    return *this * RationalNumber(num);
}
RationalNumber RationalNumber::operator*(long long num) const {
    return *this * RationalNumber(num);
}

RationalNumber RationalNumber::operator*(unsigned int num) const {
    return *this * RationalNumber(num);
}
RationalNumber RationalNumber::operator*(unsigned long num) const {
    return *this * RationalNumber(num);
}
RationalNumber RationalNumber::operator*(unsigned long long num) const {
    return *this * RationalNumber(num);
}

RationalNumber RationalNumber::operator*(float num) const {
    return *this * RationalNumber(num);
}
RationalNumber RationalNumber::operator*(double num) const {
    return *this * RationalNumber(num);
}
RationalNumber RationalNumber::operator*(long double num) const {
    return *this * RationalNumber(num);
}

RationalNumber RationalNumber::operator*(const char* num) const {
    return *this * RationalNumber(num);
}
RationalNumber operator*(int n, const RationalNumber &r) {
    return RationalNumber(n) * r;
}
RationalNumber operator*(long n, const RationalNumber &r) {
    return RationalNumber(n) * r;
}
RationalNumber operator*(long long n, const RationalNumber &r) {
    return RationalNumber(n) * r;
}
RationalNumber operator*(unsigned int n, const RationalNumber &r) {
    return RationalNumber(n) * r;
}
RationalNumber operator*(unsigned long n, const RationalNumber &r) {
    return RationalNumber(n) * r;
}
RationalNumber operator*(unsigned long long n, const RationalNumber &r) {
    return RationalNumber(n) * r;
}
RationalNumber operator*(float n, const RationalNumber &r) {
    return RationalNumber(n) * r;
}
RationalNumber operator*(double n, const RationalNumber &r) {
    return RationalNumber(n) * r;
}
RationalNumber operator*(long double n, const RationalNumber &r) {
    return RationalNumber(n) * r;
}
RationalNumber operator*(const char *n, const RationalNumber &r) {
    return RationalNumber(n) * r;
}
