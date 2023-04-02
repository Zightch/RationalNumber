#include "../RationalNumber.h"
#include "../../Exception/DivisorCannotBeZeroException/DivisorCannotBeZeroException.h"
#include <string>
#define THIS_INT (*(std::string*)this->integer)
#define THIS_DEC (*(std::string*)this->decimal)
RationalNumber RationalNumber::operator/(const RationalNumber& num) const {
    if (num == 0)throw DivisorCannotBeZeroException("RationalNumber::operator/", "除数不能为0");
    if (*this == 0)return {};
    RationalNumber num1 = *this;
    RationalNumber num2 = num;
    {//小数点对齐
        auto nd2 = ((std::string *) num2.decimal)->size();
        RationalNumber tmp = RationalNumber(1);
        ((std::string *) tmp.integer)->append(nd2, '0');
        num2 *= tmp;
        num1 *= tmp;
    }
    RationalNumber enumPlace[10];
    {//准备枚举空间
        for (short i = 0; i < 10; i++)
            enumPlace[i] = num2 * i;
    }
    std::string ans_s;
    {//相除
        RationalNumber num1_tmp = num1;
        auto len = getDivisionAccuracy() + THIS_INT.size() - THIS_DEC.size();
        for (auto i = 0; i < len; i++) {
            RationalNumber tmp;
            for (auto j = 0; j < ((std::string *) num1_tmp.integer)->size(); j++) {
                ((std::string *) tmp.integer)->assign(*(std::string *) num1_tmp.integer, 0, j + 1);
                if (tmp < num2) {
                    if (((std::string *) num1_tmp.integer)->size() <= j + 1) {
                        num1_tmp *= 10;
                        if (i != 0)
                            ans_s.append(1, '0');
                    }
                    if (i == 0)
                        ans_s.append(1, '0');
                    continue;
                }
                break;
            }
            char subscript;
            for (subscript = 1; subscript < 10; subscript++)
                if (enumPlace[subscript] > tmp) {
                    ans_s.append(1, (char) (subscript + 47));
                    break;
                }
            if (subscript == 10) {
                ans_s.append(1, '9');
            }
            num1_tmp = tmp - enumPlace[subscript - 1];
            num1_tmp *= 10;
        }
    }
    RationalNumber ans;
    {//还原小数点
        ((std::string *) ans.integer)->assign(ans_s, 0, ((std::string *) num1.integer)->size());
        ((std::string *) ans.decimal)->assign(ans_s, ((std::string *) num1.integer)->size(), ans_s.size());
    }
    if (this->symbol == num.symbol)ans.symbol = true;
    else ans.symbol = false;
    ans.flush();
    //四舍五入
    if ((*(std::string *) ans.decimal)[getDivisionAccuracy()] > '5') {
        RationalNumber in1;
        ((std::string *) in1.decimal)->append(getDivisionAccuracy() - 2, '0');
        ((std::string *) in1.decimal)->append(1, '1');
        ans += in1;
        std::string ans_decimal_tmp = *(std::string *) ans.decimal;
        *(std::string *) ans.decimal = "";
        ((std::string *) ans.decimal)->append(ans_decimal_tmp, 0, getDivisionAccuracy());
    }
    return ans;
}

RationalNumber RationalNumber::operator/(int num) const {
    return *this / RationalNumber(num);
}
RationalNumber RationalNumber::operator/(long num) const {
    return *this / RationalNumber(num);
}
RationalNumber RationalNumber::operator/(long long num) const {
    return *this / RationalNumber(num);
}

RationalNumber RationalNumber::operator/(unsigned int num) const {
    return *this / RationalNumber(num);
}
RationalNumber RationalNumber::operator/(unsigned long num) const {
    return *this / RationalNumber(num);
}
RationalNumber RationalNumber::operator/(unsigned long long num) const {
    return *this / RationalNumber(num);
}

RationalNumber RationalNumber::operator/(float num) const {
    return *this / RationalNumber(num);
}
RationalNumber RationalNumber::operator/(double num) const {
    return *this / RationalNumber(num);
}
RationalNumber RationalNumber::operator/(long double num) const {
    return *this / RationalNumber(num);
}

RationalNumber RationalNumber::operator/(const char* num) const {
    return *this / RationalNumber(num);
}
RationalNumber operator/(int n, const RationalNumber &r) {
    return RationalNumber(n) / r;
}
RationalNumber operator/(long n, const RationalNumber &r) {
    return RationalNumber(n) / r;
}
RationalNumber operator/(long long n, const RationalNumber &r) {
    return RationalNumber(n) / r;
}
RationalNumber operator/(unsigned int n, const RationalNumber &r) {
    return RationalNumber(n) / r;
}
RationalNumber operator/(unsigned long n, const RationalNumber &r) {
    return RationalNumber(n) / r;
}
RationalNumber operator/(unsigned long long n, const RationalNumber &r) {
    return RationalNumber(n) / r;
}
RationalNumber operator/(float n, const RationalNumber &r) {
    return RationalNumber(n) / r;
}
RationalNumber operator/(double n, const RationalNumber &r) {
    return RationalNumber(n) / r;
}
RationalNumber operator/(long double n, const RationalNumber &r) {
    return RationalNumber(n) / r;
}
RationalNumber operator/(const char *n, const RationalNumber &r) {
    return RationalNumber(n) / r;
}
