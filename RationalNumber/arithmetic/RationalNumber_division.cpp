#include "../RationalNumber.h"
#include "../../Exception/DivisorCannotBeZeroException/DivisorCannotBeZeroException.h"
RationalNumber RationalNumber::operator/(RationalNumber num) {
    if (num == 0)throw DivisorCannotBeZeroException("RationalNumber::operator/", "除数不能为0");
    if (*this == 0)return {0};
    RationalNumber num1 = *this;
    RationalNumber num2 = num;
    {//小数点对齐
        size_t nd2 = num2.getDecimalSize();
        RationalNumber tmp = RationalNumber(1);
        tmp.integer.append(nd2, '0');
        num2 *= tmp;
        num1 *= tmp;
        if (num1 < 1 && num1 > 0) {
            num1 *= 10;
            num2 *= 10;
        }
    }
    RationalNumber enumPlace[10];
    {//准备枚举空间
        for (short i = 0; i < 10; i++)
            enumPlace[i] = num2 * i;
    }
    std::string ans_s;
    {//相除
        RationalNumber num1_tmp = num1;
        for (size_t i = 0; i < getDivisionAccuracy(); i++) {
            RationalNumber tmp;
            for (size_t j = 0; j < num1_tmp.getIntegerSize(); j++) {
                tmp.integer.assign(num1_tmp.integer, 0, j + 1);
                if (tmp < num2) {
                    if (num1_tmp.getIntegerSize() <= j + 1) {
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
            if (num1_tmp == 0)break;
            num1_tmp *= 10;
        }
    }
    RationalNumber ans;
    {//还原小数点
        ans.integer.assign(ans_s, 0, num1.getIntegerSize());
        ans.decimal.assign(ans_s, num1.getIntegerSize(), ans_s.size());
    }
    if (this->getSymbol() == num.getSymbol())ans.setSymbol(true);
    else ans.setSymbol(false);
    ans.flush();
    return ans;
}

RationalNumber RationalNumber::operator/(int num) {
    return *this / RationalNumber(num);
}
RationalNumber RationalNumber::operator/(long num) {
    return *this / RationalNumber(num);
}
RationalNumber RationalNumber::operator/(long long num) {
    return *this / RationalNumber(num);
}

RationalNumber RationalNumber::operator/(unsigned int num) {
    return *this / RationalNumber(num);
}
RationalNumber RationalNumber::operator/(unsigned long num) {
    return *this / RationalNumber(num);
}
RationalNumber RationalNumber::operator/(unsigned long long num) {
    return *this / RationalNumber(num);
}

RationalNumber RationalNumber::operator/(float num) {
    return *this / RationalNumber(num);
}
RationalNumber RationalNumber::operator/(double num) {
    return *this / RationalNumber(num);
}
RationalNumber RationalNumber::operator/(long double num) {
    return *this / RationalNumber(num);
}

RationalNumber RationalNumber::operator/(const char* num) {
    return *this / RationalNumber(num);
}
