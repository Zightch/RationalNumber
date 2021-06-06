#include "../RationalNumber.h"

struct Int {
	std::string integer = "";
	bool symbol = 1;
};
template<class I>
Int I2S(I num) {
	Int integer;
	I tmp;
	if (num < 0) {
		integer.symbol = 0;
		tmp = -num;
	}
	else tmp = num;
	std::string tmp_s;
	size_t len = 0;
	while (tmp != 0) {
		int a = tmp % ((I)10);
		tmp_s += (a + 48);
		tmp /= ((I)10);
		len++;
	}
	if (len == 0)integer.integer = "0";
	else for (size_t i = 0; i < tmp_s.size(); i++) {
		integer.integer += tmp_s[--len];
	}
	return integer;
}
RationalNumber RationalNumber::operator=(int num) {
	Int tmp = I2S<int>(num);
	integer = tmp.integer;
	symbol = tmp.symbol;
	if (ccstr != 0) {
		delete[]ccstr;
		ccstr = 0;
	}
	return *this;
}
RationalNumber RationalNumber::operator=(long num) {
	Int tmp = I2S<long>(num);
	integer = tmp.integer;
	symbol = tmp.symbol;
	if (ccstr != 0) {
		delete[]ccstr;
		ccstr = 0;
	}
	return *this;
}
RationalNumber RationalNumber::operator=(long long num) {
	Int tmp = I2S<long long>(num);
	integer = tmp.integer;
	symbol = tmp.symbol;
	if (ccstr != 0) {
		delete[]ccstr;
		ccstr = 0;
	}
	return *this;
}

template<class UI>
std::string UI2S(UI num) {
	std::string integer = "";
	UI tmp;
	tmp = num;
	std::string tmp_s;
	size_t len = 0;
	while (tmp != 0) {
		int a = tmp % ((UI)10);
		tmp_s += (a + 48);
		tmp /= ((UI)10);
		len++;
	}
	if (len == 0)integer = "0";
	else for (size_t i = 0; i < tmp_s.size(); i++) {
		integer += tmp_s[--len];
	}
	return integer;
}
RationalNumber RationalNumber::operator=(unsigned int num) {
	integer = UI2S<unsigned int>(num);
	if (ccstr != 0) {
		delete[]ccstr;
		ccstr = 0;
	}
	return *this;
}
RationalNumber RationalNumber::operator=(unsigned long num) {
	integer = UI2S<unsigned long>(num);
	if (ccstr != 0) {
		delete[]ccstr;
		ccstr = 0;
	}
	return *this;
}
RationalNumber RationalNumber::operator=(unsigned long long num) {
	integer = UI2S<unsigned long long>(num);
	if (ccstr != 0) {
		delete[]ccstr;
		ccstr = 0;
	}
	return *this;
}

struct Rm {
	std::string integer = "";//整数部分
	std::string decimal = "";//小数部分
	bool symbol = 1;
};
template<class D>
Rm D2S(D num, size_t accuracy) {
	Rm rm;
	D tmp = num;
	if (tmp < 0) {
		rm.symbol = 0;
		tmp = -tmp;
	}
	unsigned long integer = tmp;
	D decimal = tmp - integer;
	rm.integer = UI2S<unsigned long>(integer);
	std::string decimal_s = "";
	for (size_t i = 1; i <= accuracy; i++) {
		decimal *= 10;
		int a = decimal;
		decimal -= a;
		decimal_s += (a + 48);
	}
	size_t leastSignificantDigit = 0;
	for (leastSignificantDigit = decimal_s.size(); leastSignificantDigit > 0; leastSignificantDigit--) {
		if (decimal_s[leastSignificantDigit - 1] != '0')break;
	}
	if (leastSignificantDigit == 0)rm.decimal = "0";
	else rm.decimal.assign(decimal_s, 0, leastSignificantDigit);
	return rm;
}
RationalNumber RationalNumber::operator=(float num) {
	Rm rm = D2S<float>(num, accuracy);
	integer = rm.integer;
	decimal = rm.decimal;
	symbol = rm.symbol;
	if (ccstr != 0) {
		delete[]ccstr;
		ccstr = 0;
	}
	return *this;
}
RationalNumber RationalNumber::operator=(double num) {
	Rm rm = D2S<double>(num, accuracy);
	integer = rm.integer;
	decimal = rm.decimal;
	symbol = rm.symbol;
	if (ccstr != 0) {
		delete[]ccstr;
		ccstr = 0;
	}
	return *this;
}
RationalNumber RationalNumber::operator=(long double num) {
	Rm rm = D2S<long double>(num, accuracy);
	integer = rm.integer;
	decimal = rm.decimal;
	symbol = rm.symbol;
	if (ccstr != 0) {
		delete[]ccstr;
		ccstr = 0;
	}
	return *this;
}

RationalNumber RationalNumber::operator=(const char* num_tmp) {
	std::string num = num_tmp;
	Rm rm;
	size_t i = 0;
	if (num[0] == '-') {
		rm.symbol = 0;
		i += 1;
	}
	for (; i < num.size(); i++) {
		if (num[i] >= '0' && num[i] <= '9')rm.integer += num[i];
		else if (num[i] == '.')break;
		else continue;
	}
	if (rm.integer == "")rm.integer = "0";
	if (i < num.size())
		for (; i < num.size(); i++) {
			if (num[i] >= '0' && num[i] <= '9')rm.decimal += num[i];
			else continue;
		}
	else rm.decimal = "0";
	integer = rm.integer;
	decimal = rm.decimal;
	symbol = rm.symbol;
	flush();
	if (ccstr != 0) {
		delete[]ccstr;
		ccstr = 0;
	}
	return *this;
}
