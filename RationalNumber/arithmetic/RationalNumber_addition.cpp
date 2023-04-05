#define RATIONAL_NUMBER_EXPORT
#include "../RationalNumber.h"
#include <string>
#define THIS_INT (*(std::string*)this->integer)
#define THIS_DEC (*(std::string*)this->decimal)
RationalNumber RationalNumber::operator+(const RationalNumber& num) const {
    if (this->symbol == num.symbol) {
        std::string num1 = THIS_INT + THIS_DEC;
        std::string num2 = *(std::string *) num.integer + *(std::string *) num.decimal;
        std::string ans;
        RationalNumber R_ans;
        auto tI = THIS_INT.size(), tD = THIS_DEC.empty() ? 1 : THIS_DEC.size();
        auto nI = ((std::string *) num.integer)->size(), nD = ((std::string *) num.decimal)->empty() ? 1 : ((std::string *) num.decimal)->size();
        {//小数点对齐
            if (tI > nI) {
                num2.insert(0, tI - nI, '0');
            }
            if (tI < nI) {
                num1.insert(0, nI - tI, '0');
            }
            if (tD > nD) {
                num2.append(tD - nD, '0');
            }
            if (tD < nD) {
                num1.append(nD - tD, '0');
            }
        }
        {//相加
            char *metric = new char[num1.size() + 2];
            char *ans_c = new char[num1.size() + 2];
            for (auto i = 0; i <= num1.size() + 1; i++) {
                metric[i] = 0;
                ans_c[i] = 0;
            }
            for (auto i = num1.size(); i >= 1; i--) {
                auto a = (short) ((num1[i - 1] - 48) + (num2[i - 1] - 48) + metric[i]);
                if (a >= 10) {
                    metric[i - 1] = 1;
                    a -= 10;
                }
                ans_c[i] = (char) (a + 48);
            }
            if (metric[0] == 1) {
                ans_c[0] = 1 + 48;
                ans = ans_c;
            } else ans = ans_c + 1;
            delete[]metric;
            delete[]ans_c;
        }
        {//还原小数点
            ((std::string *) R_ans.integer)->assign(ans, 0, ans.size() - (tD > nD ? tD : nD));
            ((std::string *) R_ans.decimal)->assign(ans, ans.size() - (tD > nD ? tD : nD), ans.size() - 1);
        }
        if (this->symbol == 0)R_ans.symbol = false;
        R_ans.flush();
        return R_ans;
    } else {
        if (num.symbol == 0) {
            RationalNumber tmp = num;
            tmp.symbol = true;
            return *this - num;
        } else {
            RationalNumber tmp = *this;
            tmp.symbol = true;
            return RationalNumber(0) - (tmp - num);
        }
    }
}

RationalNumber RationalNumber::operator+(int num) const {
    return *this + RationalNumber(num);
}
RationalNumber RationalNumber::operator+(long num) const {
    return *this + RationalNumber(num);
}
RationalNumber RationalNumber::operator+(long long num) const {
    return *this + RationalNumber(num);
}

RationalNumber RationalNumber::operator+(unsigned int num) const {
    return *this + RationalNumber(num);
}
RationalNumber RationalNumber::operator+(unsigned long num) const {
    return *this + RationalNumber(num);
}
RationalNumber RationalNumber::operator+(unsigned long long num) const {
    return *this + RationalNumber(num);
}

RationalNumber RationalNumber::operator+(float num) const {
    return *this + RationalNumber(num);
}
RationalNumber RationalNumber::operator+(double num) const {
	return *this + RationalNumber(num);
}
RationalNumber RationalNumber::operator+(long double num) const {
	return *this + RationalNumber(num);
}

RationalNumber RationalNumber::operator+(const char* num) const {
	return *this + RationalNumber(num);
}
RationalNumber operator+(int n, const RationalNumber &r) {
    return RationalNumber(n) + r;
}
RationalNumber operator+(long n, const RationalNumber &r) {
    return RationalNumber(n) + r;
}
RationalNumber operator+(long long n, const RationalNumber &r) {
    return RationalNumber(n) + r;
}
RationalNumber operator+(unsigned int n, const RationalNumber &r) {
    return RationalNumber(n) + r;
}
RationalNumber operator+(unsigned long n, const RationalNumber &r) {
    return RationalNumber(n) + r;
}
RationalNumber operator+(unsigned long long n, const RationalNumber &r) {
    return RationalNumber(n) + r;
}
RationalNumber operator+(float n, const RationalNumber &r) {
    return RationalNumber(n) + r;
}
RationalNumber operator+(double n, const RationalNumber &r) {
    return RationalNumber(n) + r;
}
RationalNumber operator+(long double n, const RationalNumber &r) {
    return RationalNumber(n) + r;
}
RationalNumber operator+(const char *n, const RationalNumber &r) {
    return RationalNumber(n) + r;
}
