#include "../RationalNumber.h"

RationalNumber RationalNumber::operator*(const RationalNumber& num) const {
    size_t inner;
    std::string num1;
    size_t outer;
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
    for (size_t i = inner; i >= 1; i--) {
        for (size_t j = outer; j >= 1; j--) {
            int a = ((num1[i - 1] - 48) * (num2[j - 1] - 48));
            RationalNumber tmp = RationalNumber(a);
            tmp.integer.append(outer - j, '0');
            down += tmp;
        }
        down.integer.append(inner - i, '0');
        up += down;
        down = "0";
    }
    std::string ans_s = up.integer;
    RationalNumber ans;
    if (ans_s.size() > (this->getDecimalSize() + num.getDecimalSize()))
        ans.integer.assign(ans_s, 0, ans_s.size() - (this->getDecimalSize() + num.getDecimalSize()));
    if (ans_s.size() < (this->getDecimalSize() + num.getDecimalSize())) {
        ans.decimal.insert(0, (this->getDecimalSize() + num.getDecimalSize()) - ans_s.size() - 1, '0');
        ans.decimal.append(ans_s, 0, ans_s.size());
        goto end;
    }
    if (this->getDecimalSize() + num.getDecimalSize() != 0)
        ans.decimal.assign(ans_s, ans_s.size() - (this->getDecimalSize() + num.getDecimalSize()), ans_s.size());
    end:
    if (this->getSymbol() == num.getSymbol())ans.setSymbol(true);
    else ans.setSymbol(false);
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
