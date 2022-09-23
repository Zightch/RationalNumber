#pragma once

#define rational_number __declspec(dllexport)
//#define rational_number __declspec(dllimport)

#define R_AC 6    //小数精度

#include<string>

class rational_number RationalNumber {//有理数
public:

    [[maybe_unused]]
    static void setDivisionAccuracy(size_t);  //设置除法精度
    static size_t getDivisionAccuracy();      //获取除法精度

	explicit RationalNumber();

	RationalNumber(int);
	RationalNumber(long);
	RationalNumber(long long);

	RationalNumber(unsigned int);
	RationalNumber(unsigned long);
	RationalNumber(unsigned long long);

	RationalNumber(float, size_t = R_AC);
	RationalNumber(double, size_t = R_AC);
	RationalNumber(long double, size_t = R_AC);

	RationalNumber(const char*);

	~RationalNumber();

	const char*              c_str();                                      //转字符串
	void                     flush();                                      //刷新数字

    [[maybe_unused]]
    void                     setAccuracy(unsigned long = R_AC);            //设置小数精度
	void                     setSymbol(bool);                              //设置正负
    [[maybe_unused]]
    void                     setElement(size_t, char);                     //设置元素

    [[maybe_unused]] [[nodiscard]]
    size_t                   getAccuracy() const;                          //获取   小数精度
	[[nodiscard]]
    size_t                   getIntegerSize() const;                       //获取   整数长度
	[[nodiscard]]
    size_t                   getDecimalSize() const;                       //获取   小数长度
    [[nodiscard]]
	RationalNumber           getInteger() const;                           //获取   整数部分
    [[nodiscard]]
	RationalNumber           getDecimal() const;                           //获取   小数部分
    [[nodiscard]]
	RationalNumber           getPureNumber() const;                        //获取   纯 数 字
    [[nodiscard]]
	size_t                   getPureNumberSize() const;                    //获取 纯数字长度
	[[nodiscard]]
    bool                     getSymbol() const;                            //获取   正 负 号
    [[maybe_unused]]
	char                     getElement(size_t);                           //获取元素



	RationalNumber& operator=(int);
	RationalNumber& operator=(long);
	RationalNumber& operator=(long long);

	RationalNumber& operator=(unsigned int);
	RationalNumber& operator=(unsigned long);
	RationalNumber& operator=(unsigned long long);

	RationalNumber& operator=(float);
	RationalNumber& operator=(double);
	RationalNumber& operator=(long double);

	RationalNumber& operator=(const char*);



	RationalNumber operator+(const RationalNumber&) const;

	RationalNumber operator+(int) const;
	RationalNumber operator+(long) const;
	RationalNumber operator+(long long) const;

	RationalNumber operator+(unsigned int) const;
	RationalNumber operator+(unsigned long) const;
	RationalNumber operator+(unsigned long long) const;

	RationalNumber operator+(float) const;
	RationalNumber operator+(double) const;
	RationalNumber operator+(long double) const;

	RationalNumber operator+(const char*) const;



	RationalNumber& operator+=(const RationalNumber&);

	RationalNumber& operator+=(int);
	RationalNumber& operator+=(long);
	RationalNumber& operator+=(long long);

	RationalNumber& operator+=(unsigned int);
	RationalNumber& operator+=(unsigned long);
	RationalNumber& operator+=(unsigned long long);

	RationalNumber& operator+=(float);
	RationalNumber& operator+=(double);
	RationalNumber& operator+=(long double);

	RationalNumber& operator+=(const char*);



	RationalNumber operator*(const RationalNumber&) const;

	RationalNumber operator*(int) const;
	RationalNumber operator*(long) const;
	RationalNumber operator*(long long) const;

	RationalNumber operator*(unsigned int) const;
	RationalNumber operator*(unsigned long) const;
	RationalNumber operator*(unsigned long long) const;

	RationalNumber operator*(float) const;
	RationalNumber operator*(double) const;
	RationalNumber operator*(long double) const;

	RationalNumber operator*(const char*) const;



	RationalNumber& operator*=(const RationalNumber&);

	RationalNumber& operator*=(int);
	RationalNumber& operator*=(long);
	RationalNumber& operator*=(long long);

	RationalNumber& operator*=(unsigned int);
	RationalNumber& operator*=(unsigned long);
	RationalNumber& operator*=(unsigned long long);

	RationalNumber& operator*=(float);
	RationalNumber& operator*=(double);
	RationalNumber& operator*=(long double);

	RationalNumber& operator*=(const char*);



	RationalNumber operator-(const RationalNumber&) const;

	RationalNumber operator-(int) const;
	RationalNumber operator-(long) const;
	RationalNumber operator-(long long) const;

	RationalNumber operator-(unsigned int) const;
	RationalNumber operator-(unsigned long) const;
	RationalNumber operator-(unsigned long long) const;

	RationalNumber operator-(float) const;
	RationalNumber operator-(double) const;
	RationalNumber operator-(long double) const;

	RationalNumber operator-(const char*) const;



	RationalNumber& operator-=(const RationalNumber&);

	RationalNumber& operator-=(int);
	RationalNumber& operator-=(long);
	RationalNumber& operator-=(long long);

	RationalNumber& operator-=(unsigned int);
	RationalNumber& operator-=(unsigned long);
	RationalNumber& operator-=(unsigned long long);

	RationalNumber& operator-=(float);
	RationalNumber& operator-=(double);
	RationalNumber& operator-=(long double);

	RationalNumber& operator-=(const char*);



	RationalNumber operator/(const RationalNumber&) const;

	RationalNumber operator/(int) const;
	RationalNumber operator/(long) const;
	RationalNumber operator/(long long) const;

	RationalNumber operator/(unsigned int) const;
	RationalNumber operator/(unsigned long) const;
	RationalNumber operator/(unsigned long long) const;

	RationalNumber operator/(float) const;
	RationalNumber operator/(double) const;
	RationalNumber operator/(long double) const;

	RationalNumber operator/(const char*) const;



	RationalNumber& operator/=(const RationalNumber&);

	RationalNumber& operator/=(int);
	RationalNumber& operator/=(long);
	RationalNumber& operator/=(long long);

	RationalNumber& operator/=(unsigned int);
	RationalNumber& operator/=(unsigned long);
	RationalNumber& operator/=(unsigned long long);

	RationalNumber& operator/=(float);
	RationalNumber& operator/=(double);
	RationalNumber& operator/=(long double);

	RationalNumber& operator/=(const char*);



	bool operator>(const RationalNumber&) const;

	bool operator>(int) const;
	bool operator>(long) const;
	bool operator>(long long) const;

	bool operator>(unsigned int) const;
	bool operator>(unsigned long) const;
	bool operator>(unsigned long long) const;

	bool operator>(float) const;
	bool operator>(double) const;
	bool operator>(long double) const;

	bool operator>(const char*) const;



	bool operator>=(const RationalNumber&) const;

	bool operator>=(int) const;
	bool operator>=(long) const;
	bool operator>=(long long) const;

	bool operator>=(unsigned int) const;
	bool operator>=(unsigned long) const;
	bool operator>=(unsigned long long) const;

	bool operator>=(float) const;
	bool operator>=(double) const;
	bool operator>=(long double) const;

	bool operator>=(const char*) const;



	bool operator<(const RationalNumber&) const;

	bool operator<(int) const;
	bool operator<(long) const;
	bool operator<(long long) const;

	bool operator<(unsigned int) const;
	bool operator<(unsigned long) const;
	bool operator<(unsigned long long) const;

	bool operator<(float) const;
	bool operator<(double) const;
	bool operator<(long double) const;

	bool operator<(const char*) const;



	bool operator<=(const RationalNumber&) const;

	bool operator<=(int) const;
	bool operator<=(long) const;
	bool operator<=(long long) const;

	bool operator<=(unsigned int) const;
	bool operator<=(unsigned long) const;
	bool operator<=(unsigned long long) const;

	bool operator<=(float) const;
	bool operator<=(double) const;
	bool operator<=(long double) const;

	bool operator<=(const char*) const;



	bool operator==(const RationalNumber&) const;

	bool operator==(int) const;
	bool operator==(long) const;
	bool operator==(long long) const;

	bool operator==(unsigned int) const;
	bool operator==(unsigned long) const;
	bool operator==(unsigned long long) const;

	bool operator==(float) const;
	bool operator==(double) const;
	bool operator==(long double) const;

	bool operator==(const char*) const;



	bool operator!=(const RationalNumber&) const;

	bool operator!=(int) const;
	bool operator!=(long) const;
	bool operator!=(long long) const;

	bool operator!=(unsigned int) const;
	bool operator!=(unsigned long) const;
	bool operator!=(unsigned long long) const;

	bool operator!=(float) const;
	bool operator!=(double) const;
	bool operator!=(long double) const;

	bool operator!=(const char*) const;

private:
	std::string integer = "0";//整数部分
	std::string decimal = "0";//小数部分

	bool symbol = true;//符号
	/*
	* 1为正数,0为负数
	* 如果数字为0,此变量可1可0
	* 默认1
	*/

	size_t accuracy = R_AC;//小数精度
	/*
	* 设a=accuracy
	* 则10的-a次方就是它的精度
	* 简单来说,就是小数点后a位
	*/

	char* ccstr = nullptr;
};
