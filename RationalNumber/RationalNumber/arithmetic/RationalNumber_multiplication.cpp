#include "../RationalNumber.h"

RationalNumber RationalNumber::operator*(RationalNumber num) {
	size_t inner;
	std::string num1;
	size_t outer;
	std::string num2;
	if (this->getPureNumberSize() == num.getPureNumberSize()) {
		outer = this->getPureNumberSize();
		num2 = this->getPureNumber().c_str();
		inner = num.getPureNumberSize();
		num1 = num.getPureNumber().c_str();
	}
	else {
		inner = this->getPureNumberSize() > num.getPureNumberSize() ? num.getPureNumberSize() : this->getPureNumberSize();
		num1 = this->getPureNumberSize() > num.getPureNumberSize() ? num.getPureNumber().c_str() : this->getPureNumber().c_str();
		outer = this->getPureNumberSize() < num.getPureNumberSize() ? num.getPureNumberSize() : this->getPureNumberSize();
		num2 = this->getPureNumberSize() < num.getPureNumberSize() ? num.getPureNumber().c_str() : this->getPureNumber().c_str();
	}
	RationalNumber up;
	RationalNumber down;
	for (size_t i = inner; i >= 1; i--) {
		for (size_t j = outer; j >= 1; j--) {
			short a1 = num1[i - 1] - 48;
			short a2 = num2[j - 1] - 48;
			short a3 = a1 * a2;
			RationalNumber tmp = a3;
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
	if (this->getSymbol() == num.getSymbol())ans.setSymbol(1);
	else ans.setSymbol(0);
	return ans;
}

RationalNumber RationalNumber::operator*(int num) {
	RationalNumber tmp = num;
	return *this * tmp;
}
RationalNumber RationalNumber::operator*(long num) {
	RationalNumber tmp = num;
	return *this * tmp;
}
RationalNumber RationalNumber::operator*(long long num) {
	RationalNumber tmp = num;
	return *this * tmp;
}

RationalNumber RationalNumber::operator*(unsigned int num) {
	RationalNumber tmp = num;
	return *this * tmp;
}
RationalNumber RationalNumber::operator*(unsigned long num) {
	RationalNumber tmp = num;
	return *this * tmp;
}
RationalNumber RationalNumber::operator*(unsigned long long num) {
	RationalNumber tmp = num;
	return *this * tmp;
}

RationalNumber RationalNumber::operator*(float num) {
	RationalNumber tmp = num;
	return *this * tmp;
}
RationalNumber RationalNumber::operator*(double num) {
	RationalNumber tmp = num;
	return *this * tmp;
}
RationalNumber RationalNumber::operator*(long double num) {
	RationalNumber tmp = num;
	return *this * tmp;
}

RationalNumber RationalNumber::operator*(const char* num) {
	RationalNumber tmp = num;
	return *this * tmp;
}
