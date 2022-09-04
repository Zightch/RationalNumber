#include "../RationalNumber.h"

bool RationalNumber::operator>(const RationalNumber& num) const {
	if (this->getSymbol() == 1 && num.getSymbol() == 0)return true;
	if (this->getSymbol() == 0 && num.getSymbol() == 1)return false;
	if (this->getSymbol() == 1) {
		{//整数大小比较
			if (this->getIntegerSize() > num.getIntegerSize())
				return true;
			else if (this->getIntegerSize() < num.getIntegerSize())
				return false;
			size_t len;
			for (len = 0; len < this->getIntegerSize(); len++) {
				if (this->getInteger().c_str()[len] > num.getInteger().c_str()[len])
					return true;
				if (this->getInteger().c_str()[len] < num.getInteger().c_str()[len])
					return false;
			}
		}
		{//小数大小比较
			size_t tD = this->getDecimalSize() == 0 ? 1 : this->getDecimalSize();
			size_t nD = num.getDecimalSize() == 0 ? 1 : num.getDecimalSize();
			size_t len, size = (tD > nD) ? nD : tD;
			for (len = 0; len < size; len++) {
				if (this->getDecimal().getPureNumber().c_str()[len] > num.getDecimal().getPureNumber().c_str()[len])
					return true;
				if (this->getDecimal().getPureNumber().c_str()[len] < num.getDecimal().getPureNumber().c_str()[len])
					return false;
			}
			if (len == size) {
				if (this->getDecimalSize() > num.getDecimalSize())
					return true;
				else return false;
			}
		}
	}
	else {
		RationalNumber tmp1 = *this;
		RationalNumber tmp2 = num;
		tmp1.setSymbol(true);
		tmp2.setSymbol(true);
		return (tmp1 < tmp2);
	}
	return false;
}

bool RationalNumber::operator>(int num) const {
	return *this > RationalNumber(num);
}
bool RationalNumber::operator>(long num) const {
    return *this > RationalNumber(num);
}
bool RationalNumber::operator>(long long num) const {
    return *this > RationalNumber(num);
}

bool RationalNumber::operator>(unsigned int num) const {
    return *this > RationalNumber(num);
}
bool RationalNumber::operator>(unsigned long num) const {
    return *this > RationalNumber(num);
}
bool RationalNumber::operator>(unsigned long long num) const {
    return *this > RationalNumber(num);
}

bool RationalNumber::operator>(float num) const {
    return *this > RationalNumber(num);
}
bool RationalNumber::operator>(double num) const {
    return *this > RationalNumber(num);
}
bool RationalNumber::operator>(long double num) const {
    return *this > RationalNumber(num);
}

bool RationalNumber::operator>(const char* num) const {
    return *this > RationalNumber(num);
}
