#include "../RationalNumber.h"

RationalNumber RationalNumber::operator+(RationalNumber num) {
	if (this->getSymbol() == num.getSymbol()) {
		std::string num1 = this->integer + this->decimal;
		std::string num2 = num.integer + num.decimal;
		std::string ans;
		RationalNumber R_ans;
		size_t tI = this->getIntegerSize(), tD = this->getDecimalSize() == 0 ? 1 : this->getDecimalSize();
		size_t nI = num.getIntegerSize(), nD = num.getDecimalSize() == 0 ? 1 : num.getDecimalSize();
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
			char* metric = new char[num1.size() + 2];
			char* ans_c = new char[num1.size() + 2];
			for (size_t i = 0; i <= num1.size() + 1; i++) {
				metric[i] = 0;
				ans_c[i] = 0;
			}
			for (size_t i = num1.size(); i >= 1; i--) {
				auto a = (short)((num1[i - 1] - 48) + (num2[i - 1] - 48) + metric[i]);
				if (a >= 10) {
					metric[i - 1] = 1;
					a -= 10;
				}
				ans_c[i] = (char)(a + 48);
			}
			if (metric[0] == 1) {
				ans_c[0] = 1 + 48;
				ans = ans_c;
			}
			else ans = ans_c + 1;
			delete[]metric;
			delete[]ans_c;
		}
		{//还原小数点
			R_ans.integer.assign(ans, 0, ans.size() - (tD > nD ? tD : nD));
			R_ans.decimal.assign(ans, ans.size() - (tD > nD ? tD : nD), ans.size() - 1);
		}
		if (this->getSymbol() == 0)R_ans.symbol = false;
		R_ans.flush();
		return R_ans;
	}
	else {
		if (num.symbol == 0) {
			num.setSymbol(true);
			return *this - num;
		}
		else {
			RationalNumber tmp = *this;
			tmp.setSymbol(true);
			return RationalNumber(0) - (tmp - num);
		}
	}
}

RationalNumber RationalNumber::operator+(int num) {
    return *this + RationalNumber(num);
}
RationalNumber RationalNumber::operator+(long num) {
    return *this + RationalNumber(num);
}
RationalNumber RationalNumber::operator+(long long num) {
    return *this + RationalNumber(num);
}

RationalNumber RationalNumber::operator+(unsigned int num) {
    return *this + RationalNumber(num);
}
RationalNumber RationalNumber::operator+(unsigned long num) {
    return *this + RationalNumber(num);
}
RationalNumber RationalNumber::operator+(unsigned long long num) {
    return *this + RationalNumber(num);
}

RationalNumber RationalNumber::operator+(float num) {
    return *this + RationalNumber(num);
}
RationalNumber RationalNumber::operator+(double num) {
	return *this + RationalNumber(num);
}
RationalNumber RationalNumber::operator+(long double num) {
	return *this + RationalNumber(num);
}

RationalNumber RationalNumber::operator+(const char* num) {
	return *this + RationalNumber(num);
}
