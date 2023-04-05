#define RATIONAL_NUMBER_EXPORT
#include "../RationalNumber.h"
#include <string>
#define THIS_INT (*(std::string*)this->integer)
#define THIS_DEC (*(std::string*)this->decimal)
struct Int {
	std::string integer;
	bool symbol = true;
};
template<class I>
Int I2S(I num) {
    Int integer;
    I tmp;
    if (num < 0) {
        integer.symbol = false;
        tmp = -num;
    } else tmp = num;
    std::string tmp_s;
    size_t len = 0;
    while (tmp != 0) {
        int a = tmp % ((I) 10);
        tmp_s.push_back((char) (a + 48));
        tmp /= ((I) 10);
        len++;
    }
    if (len == 0)integer.integer = {'0'};
    else
        for (size_t i = 0; i < tmp_s.size(); i++) {
            integer.integer.push_back(tmp_s[--len]);
        }
    return integer;
}
RationalNumber& RationalNumber::operator=(int num) {
    Int tmp = I2S<int>(num);
    THIS_INT = tmp.integer;
    symbol = tmp.symbol;
    if (ccstr != nullptr) {
        delete[]ccstr;
        ccstr = nullptr;
    }
    return *this;
}
RationalNumber& RationalNumber::operator=(long num) {
    Int tmp = I2S<long>(num);
    THIS_INT = tmp.integer;
    symbol = tmp.symbol;
    if (ccstr != nullptr) {
        delete[]ccstr;
        ccstr = nullptr;
    }
    return *this;
}
RationalNumber& RationalNumber::operator=(long long num) {
    Int tmp = I2S<long long>(num);
    THIS_INT = tmp.integer;
    symbol = tmp.symbol;
    if (ccstr != nullptr) {
        delete[]ccstr;
        ccstr = nullptr;
    }
    return *this;
}
template<class UI>
std::string UI2S(UI num) {
    std::string integer;
    UI tmp;
    tmp = num;
    std::string tmp_s;
    size_t len = 0;
    while (tmp != 0) {
        int a = tmp % ((UI) 10);
        tmp_s.push_back((char) (a + 48));
        tmp /= ((UI) 10);
        len++;
    }
    if (len == 0)integer = {'0'};
    else
        for (size_t i = 0; i < tmp_s.size(); i++) {
            integer.push_back(tmp_s[--len]);
        }
    return integer;
}
RationalNumber& RationalNumber::operator=(unsigned int num) {
	THIS_INT = UI2S<unsigned int>(num);
	if (ccstr != nullptr) {
		delete[]ccstr;
		ccstr = nullptr;
	}
	return *this;
}
RationalNumber& RationalNumber::operator=(unsigned long num) {
	THIS_INT = UI2S<unsigned long>(num);
	if (ccstr != nullptr) {
		delete[]ccstr;
		ccstr = nullptr;
	}
	return *this;
}
RationalNumber& RationalNumber::operator=(unsigned long long num) {
	THIS_INT = UI2S<unsigned long long>(num);
	if (ccstr != nullptr) {
		delete[]ccstr;
		ccstr = nullptr;
	}
	return *this;
}

struct Rm {
	std::string integer;//整数部分
	std::string decimal;//小数部分
	bool symbol = true;
};
template<class D>
Rm D2S(D num, size_t accuracy) {
	Rm rm;
	D tmp = num;
	if (tmp < 0) {
		rm.symbol = false;
		tmp = -tmp;
	}
	unsigned long long integer = tmp;
	D decimal = tmp - integer;
	rm.integer = UI2S<unsigned long>(integer);
	std::string decimal_s;
	for (size_t i = 1; i <= accuracy; i++) {
		decimal *= 10;
        long long a = decimal;
		decimal -= a;
		decimal_s += (char)(a + 48);
	}
	size_t leastSignificantDigit;
	for (leastSignificantDigit = decimal_s.size(); leastSignificantDigit > 0; leastSignificantDigit--) {
		if (decimal_s[leastSignificantDigit - 1] != '0')break;
	}
	if (leastSignificantDigit == 0)rm.decimal = "0";
	else rm.decimal.assign(decimal_s, 0, leastSignificantDigit);
	return rm;
}
RationalNumber& RationalNumber::operator=(float num) {
	Rm rm = D2S<float>(num, accuracy);
	THIS_INT = rm.integer;
	THIS_DEC = rm.decimal;
	symbol = rm.symbol;
	if (ccstr != nullptr) {
		delete[]ccstr;
		ccstr = nullptr;
	}
	return *this;
}
RationalNumber& RationalNumber::operator=(double num) {
	Rm rm = D2S<double>(num, accuracy);
	THIS_INT = rm.integer;
	THIS_DEC = rm.decimal;
	symbol = rm.symbol;
	if (ccstr != nullptr) {
		delete[]ccstr;
		ccstr = nullptr;
	}
	return *this;
}
RationalNumber& RationalNumber::operator=(long double num) {
	Rm rm = D2S<long double>(num, accuracy);
	THIS_INT = rm.integer;
	THIS_DEC = rm.decimal;
	symbol = rm.symbol;
	if (ccstr != nullptr) {
		delete[]ccstr;
		ccstr = nullptr;
	}
	return *this;
}

RationalNumber& RationalNumber::operator=(const char* num_tmp) {
    std::string num = num_tmp;
    Rm rm;
    size_t i = 0;
    if (num[0] == '-') {
        rm.symbol = false;
        i += 1;
    }
    for (; i < num.size(); i++) {
        if (num[i] >= '0' && num[i] <= '9')rm.integer += num[i];
        else if (num[i] == '.')break;
        else continue;
    }
    if (rm.integer.empty())rm.integer = "0";
    if (i < num.size())
        for (; i < num.size(); i++) {
            if (num[i] >= '0' && num[i] <= '9')rm.decimal += num[i];
            else continue;
        }
    else rm.decimal = "0";
    THIS_INT = rm.integer;
    THIS_DEC = rm.decimal;
    symbol = rm.symbol;
    flush();
    if (ccstr != nullptr) {
        delete[]ccstr;
        ccstr = nullptr;
    }
    return *this;
}

RationalNumber &RationalNumber::operator=(const RationalNumber &rn) {
    if (this != &rn) {
        delete (std::string *) integer;
        delete (std::string *) decimal;
        integer = new std::string;
        decimal = new std::string;
        THIS_INT = *(std::string *) rn.integer;
        THIS_DEC = *(std::string *) rn.decimal;
        symbol = rn.symbol;
        accuracy = rn.accuracy;
    }
    return *this;
}
