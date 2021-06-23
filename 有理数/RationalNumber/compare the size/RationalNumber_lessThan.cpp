#include "../RationalNumber.h"

bool RationalNumber::operator<(RationalNumber num) {
	if (this->getSymbol() == 1 && num.getSymbol() == 0)return 0;
	if (this->getSymbol() == 0 && num.getSymbol() == 1)return 1;
	if (this->getSymbol() == 1) {
		{//整数大小比较
			if (this->getIntegerSize() < num.getIntegerSize())
				return 1;
			else if (this->getIntegerSize() > num.getIntegerSize())
				return 0;
			size_t len = 0;
			for (len = 0; len < this->getIntegerSize(); len++) {
				if (this->getInteger().c_str()[len] < num.getInteger().c_str()[len])
					return 1;
				if (this->getInteger().c_str()[len] > num.getInteger().c_str()[len])
					return 0;
			}
		}
		{//小数大小比较
			size_t tD = this->getDecimalSize() == 0 ? 1 : this->getDecimalSize();
			size_t nD = num.getDecimalSize() == 0 ? 1 : num.getDecimalSize();
			size_t len = 0, size = (tD > nD) ? nD : tD;
			for (len = 0; len < size; len++) {
				if (this->getDecimal().getPureNumber().c_str()[len] < num.getDecimal().getPureNumber().c_str()[len])
					return 1;
				if (this->getDecimal().getPureNumber().c_str()[len] > num.getDecimal().getPureNumber().c_str()[len])
					return 0;
			}
			if (len == size) {
				if (this->getDecimalSize() < num.getDecimalSize())
					return 1;
				else return 0;
			}
		}
	}
	else {
		RationalNumber tmp1 = *this;
		RationalNumber tmp2 = num;
		tmp1.setSymbol(1);
		tmp1.setSymbol(1);
		return (tmp1 > tmp2);
	}
	return 0;
}

bool RationalNumber::operator<(int num) {
	RationalNumber tmp = num;
	return *this < tmp;
}
bool RationalNumber::operator<(long num) {
	RationalNumber tmp = num;
	return *this < tmp;
}
bool RationalNumber::operator<(long long num) {
	RationalNumber tmp = num;
	return *this < tmp;
}

bool RationalNumber::operator<(unsigned int num) {
	RationalNumber tmp = num;
	return *this < tmp;
}
bool RationalNumber::operator<(unsigned long num) {
	RationalNumber tmp = num;
	return *this < tmp;
}
bool RationalNumber::operator<(unsigned long long num) {
	RationalNumber tmp = num;
	return *this < tmp;
}

bool RationalNumber::operator<(float num) {
	RationalNumber tmp = num;
	return *this < tmp;
}
bool RationalNumber::operator<(double num) {
	RationalNumber tmp = num;
	return *this < tmp;
}
bool RationalNumber::operator<(long double num) {
	RationalNumber tmp = num;
	return *this < tmp;
}

bool RationalNumber::operator<(const char* num) {
	RationalNumber tmp = num;
	return *this < tmp;
}
