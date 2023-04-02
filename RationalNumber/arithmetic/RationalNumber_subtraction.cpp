#include "../RationalNumber.h"
#include <string>
#define THIS_INT (*(std::string*)this->integer)
#define THIS_DEC (*(std::string*)this->decimal)
RationalNumber RationalNumber::operator-(const RationalNumber& num) const {
    std::string num1;
    std::string num2;
    std::string ans;
    RationalNumber R_ans;

    RationalNumber tmp1 = *this;
    if (tmp1.symbol == 0)tmp1.symbol = true;
    RationalNumber tmp2 = num;
    if (tmp2.symbol == 0)tmp2.symbol = true;

    if (this->symbol != num.symbol) {
        if (num.symbol == 1) {
            RationalNumber tmp = num;
            tmp.symbol = false;
            return *this + num;
        }
        if (num.symbol == 0) {
            RationalNumber tmp = num;
            tmp.symbol = false;
            return *this + num;
        }
        return *this + num;
    } else {
        if (this->symbol == 1) {
            if (tmp1 >= tmp2) {
                num1 = *(std::string *) tmp1.integer + *(std::string *) tmp1.decimal;
                num2 = *(std::string *) tmp2.integer + *(std::string *) tmp2.decimal;
            } else {
                RationalNumber tmp = tmp1;
                tmp1 = tmp2;
                tmp2 = tmp;
                num1 = *(std::string *) tmp1.integer + *(std::string *) tmp1.decimal;
                num2 = *(std::string *) tmp2.integer + *(std::string *) tmp2.decimal;
                R_ans.symbol = false;
            }
        }
        if (this->symbol == 0) {
            if (tmp1 >= tmp2) {
                num1 = *(std::string *) tmp1.integer + *(std::string *) tmp1.decimal;
                num2 = *(std::string *) tmp2.integer + *(std::string *) tmp2.decimal;
                R_ans.symbol = false;
            } else {
                RationalNumber tmp = tmp1;
                tmp1 = tmp2;
                tmp2 = tmp;
                num1 = *(std::string *) tmp1.integer + *(std::string *) tmp1.decimal;
                num2 = *(std::string *) tmp2.integer + *(std::string *) tmp2.decimal;
            }
        }
    }

    {
        //auto tD = this->decimal.empty() ? 1 : this->decimal.size();
        auto nD = ((std::string *) num.decimal)->empty() ? 1 : ((std::string *) num.decimal)->size();
        {//小数点对齐

            auto _1I = tmp1.getIntegerSize()/*, _1D = tmp1.decimal.empty() ? 1 : tmp1.decimal.size()*/;
            auto _2I = tmp2.getIntegerSize()/*, _2D = tmp2.decimal.empty() ? 1 : tmp2.decimal.size()*/;
            if (_1I > _2I) {
                num2.insert(0, _1I - _2I, '0');
            }
            if (_1I < _2I) {
                num1.insert(0, _2I - _1I, '0');
            }
/*            if (_1D > _2D) {
                num2.append(_1D - _2D, '0');
            }
            if (_1D < _2D) {
                num1.append(_2D - _1D, '0');
            }*/
        }
        {//相减
            char *borrow = new char[num1.size() + 1];
            char *ans_c = new char[num1.size() + 1];
            for (auto i = 0; i <= num1.size(); i++) {
                borrow[i] = 0;
                ans_c[i] = 0;
            }
            for (auto i = num1.size(); i >= 1; i--) {
                int sub_num1 = num1[i - 1] - 48 - borrow[i];
                int sub_num2 = num2[i - 1] - 48;
                if (sub_num1 < sub_num2) {
                    borrow[i - 1] = 1;
                    sub_num1 += 10;
                }
                int a = sub_num1 - sub_num2;
                ans_c[i - 1] = (char) (a + 48);
            }
            ans = ans_c;
            delete[]borrow;
            delete[]ans_c;
        }
        {//还原小数点
            ((std::string *) R_ans.integer)->assign(ans, 0, ans.size() - (/*tD > nD ? tD : */nD));
            ((std::string *) R_ans.decimal)->assign(ans, ans.size() - (/*tD > nD ? tD : */nD), ans.size() - 1);
        }
        R_ans.flush();
        return R_ans;
    }
}

RationalNumber RationalNumber::operator-(int num) const {
	return *this - RationalNumber(num);
}
RationalNumber RationalNumber::operator-(long num) const {
    return *this - RationalNumber(num);
}
RationalNumber RationalNumber::operator-(long long num) const {
    return *this - RationalNumber(num);
}

RationalNumber RationalNumber::operator-(unsigned int num) const {
    return *this - RationalNumber(num);
}
RationalNumber RationalNumber::operator-(unsigned long num) const {
    return *this - RationalNumber(num);
}
RationalNumber RationalNumber::operator-(unsigned long long num) const {
    return *this - RationalNumber(num);
}

RationalNumber RationalNumber::operator-(float num) const {
    return *this - RationalNumber(num);
}
RationalNumber RationalNumber::operator-(double num) const {
    return *this - RationalNumber(num);
}
RationalNumber RationalNumber::operator-(long double num) const {
    return *this - RationalNumber(num);
}

RationalNumber RationalNumber::operator-(const char* num) const {
    return *this - RationalNumber(num);
}

RationalNumber operator-(int n, const RationalNumber &r) {
    return RationalNumber(n) - r;
}
RationalNumber operator-(long n, const RationalNumber &r) {
    return RationalNumber(n) - r;
}
RationalNumber operator-(long long n, const RationalNumber &r) {
    return RationalNumber(n) - r;
}
RationalNumber operator-(unsigned int n, const RationalNumber &r) {
    return RationalNumber(n) - r;
}
RationalNumber operator-(unsigned long n, const RationalNumber &r) {
    return RationalNumber(n) - r;
}
RationalNumber operator-(unsigned long long n, const RationalNumber &r) {
    return RationalNumber(n) - r;
}
RationalNumber operator-(float n, const RationalNumber &r) {
    return RationalNumber(n) - r;
}
RationalNumber operator-(double n, const RationalNumber &r) {
    return RationalNumber(n) - r;
}
RationalNumber operator-(long double n, const RationalNumber &r) {
    return RationalNumber(n) - r;
}
RationalNumber operator-(const char *n, const RationalNumber &r) {
    return RationalNumber(n) - r;
}
