#include "../RationalNumber.h"

void swap(RationalNumber& num1, RationalNumber& num2) {
	RationalNumber tmp = num1;
	num1 = num2;
	num2 = tmp;
}

RationalNumber RationalNumber::operator-(RationalNumber num) {
	std::string num1;
	std::string num2;
	std::string ans;
	RationalNumber R_ans;

	RationalNumber tmp1 = *this;
	if (tmp1.getSymbol() == 0)tmp1.setSymbol(1);
	RationalNumber tmp2 = num;
	if (tmp2.getSymbol() == 0)tmp2.setSymbol(1);

	if (this->getSymbol() != num.getSymbol()) {
		if (num.getSymbol() == 1) {
			num.setSymbol(0);
			return *this + num;
		}
		if (num.getSymbol() == 0) {
			num.setSymbol(1);
			return *this + num;
		}
		return *this + num;
	}
	else {
		if (this->symbol == 1) {
			if (tmp1 >= tmp2) {
				num1 = tmp1.integer + tmp1.decimal;
				num2 = tmp2.integer + tmp2.decimal;
			}
			else {
				swap(tmp1, tmp2);
				num1 = tmp1.integer + tmp1.decimal;
				num2 = tmp2.integer + tmp2.decimal;
				R_ans.setSymbol(0);
			}
		}
		if (this->symbol == 0) {
			if (tmp1 >= tmp2) {
				num1 = tmp1.integer + tmp1.decimal;
				num2 = tmp2.integer + tmp2.decimal;
				R_ans.setSymbol(0);
			}
			else {
				swap(tmp1, tmp2);
				num1 = tmp1.integer + tmp1.decimal;
				num2 = tmp2.integer + tmp2.decimal;
			}
		}
	}

	{
		size_t tI = this->getIntegerSize(), tD = this->getDecimalSize() == 0 ? 1 : this->getDecimalSize();
		size_t nI = num.getIntegerSize(), nD = num.getDecimalSize() == 0 ? 1 : num.getDecimalSize();
		{//小数点对齐
			
			size_t _1I = tmp1.getIntegerSize(), _1D = tmp1.getDecimalSize() == 0 ? 1 : tmp1.getDecimalSize();
			size_t _2I = tmp2.getIntegerSize(), _2D = tmp2.getDecimalSize() == 0 ? 1 : tmp2.getDecimalSize();
			if (_1I > _2I) {
				num2.insert(0, _1I - _2I, '0');
			}
			if (_1I < _2I) {
				num1.insert(0, _2I - _1I, '0');
			}
			if (_1D > _2D) {
				num2.append(_1D - _2D, '0');
			}
			if (_1D < _2D) {
				num1.append(_2D - _1D, '0');
			}
		}
		{//相减
			char* borrow = new char[num1.size() + 1];
			char* ans_c = new char[num1.size() + 1];
			for (size_t i = 0; i <= num1.size(); i++) {
				borrow[i] = 0;
				ans_c[i] = 0;
			}
			for (size_t i = num1.size(); i >= 1; i--) {
				short sub_num1 = num1[i - 1] - 48 - borrow[i];
				short sub_num2 = num2[i - 1] - 48;
				if (sub_num1 < sub_num2) {
					borrow[i - 1] = 1;
					sub_num1 += 10;
				}
				short a = sub_num1 - sub_num2;
				ans_c[i - 1] = a + 48;
			}
			ans = ans_c;
			delete[]borrow;
			delete[]ans_c;
		}
		{//还原小数点
			R_ans.integer.assign(ans, 0, ans.size() - (tD > nD ? tD : nD));
			R_ans.decimal.assign(ans, ans.size() - (tD > nD ? tD : nD), ans.size() - 1);
		}
		R_ans.flush();
		return R_ans;
	}
}

RationalNumber RationalNumber::operator-(int num) {
	RationalNumber tmp = num;
	return *this - tmp;
}
RationalNumber RationalNumber::operator-(long num) {
	RationalNumber tmp = num;
	return *this - tmp;
}
RationalNumber RationalNumber::operator-(long long num) {
	RationalNumber tmp = num;
	return *this - tmp;
}

RationalNumber RationalNumber::operator-(unsigned int num) {
	RationalNumber tmp = num;
	return *this - tmp;
}
RationalNumber RationalNumber::operator-(unsigned long num) {
	RationalNumber tmp = num;
	return *this - tmp;
}
RationalNumber RationalNumber::operator-(unsigned long long num) {
	RationalNumber tmp = num;
	return *this - tmp;
}

RationalNumber RationalNumber::operator-(float num) {
	RationalNumber tmp = num;
	return *this - tmp;
}
RationalNumber RationalNumber::operator-(double num) {
	RationalNumber tmp = num;
	return *this - tmp;
}
RationalNumber RationalNumber::operator-(long double num) {
	RationalNumber tmp = num;
	return *this - tmp;
}

RationalNumber RationalNumber::operator-(const char* num) {
	RationalNumber tmp = num;
	return *this - tmp;
}
