#pragma once

#define rational_number __declspec(dllexport)
//#define rational_number __declspec(dllimport)

#define R_AC 7    //小数精度

#include<string>

template class rational_number std::allocator<char>;
template class rational_number std::basic_string<char>;

rational_number void setDivisionAccuracy(size_t);  //设置除法精度
rational_number size_t getDivisionAccuracy();      //获取除法精度

class rational_number RationalNumber {//有理数
public:
	RationalNumber();

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

	virtual const char*              c_str();                                      //转字符串
	virtual void                     flush();                                      //刷新数字
 
	virtual void                     setAccuracy(unsigned long = R_AC);            //设置小数精度
	virtual void                     setSymbol(bool);                              //设置正负
	virtual void                     setElement(size_t, char);                     //设置元素

	virtual size_t                   getAccuracy();                                //获取   小数精度
	virtual size_t                   getIntegerSize();                             //获取   整数长度
	virtual size_t                   getDecimalSize();                             //获取   小数长度
	virtual RationalNumber           getInteger();                                 //获取   整数部分
	virtual RationalNumber           getDecimal();                                 //获取   小数部分
	virtual RationalNumber           getPureNumber();                              //获取   纯 数 字
	virtual size_t                   getPureNumberSize();                          //获取 纯数字长度
	virtual bool                     getSymbol();                                  //获取   正 负 号
	virtual char                     getElement(size_t);                           //获取元素



	virtual RationalNumber operator=(int);
	virtual RationalNumber operator=(long);
	virtual RationalNumber operator=(long long);

	virtual RationalNumber operator=(unsigned int);
	virtual RationalNumber operator=(unsigned long);
	virtual RationalNumber operator=(unsigned long long);

	virtual RationalNumber operator=(float);
	virtual RationalNumber operator=(double);
	virtual RationalNumber operator=(long double);

	virtual RationalNumber operator=(const char*);



	virtual RationalNumber operator+(RationalNumber);

	virtual RationalNumber operator+(int);
	virtual RationalNumber operator+(long);
	virtual RationalNumber operator+(long long);

	virtual RationalNumber operator+(unsigned int);
	virtual RationalNumber operator+(unsigned long);
	virtual RationalNumber operator+(unsigned long long);

	virtual RationalNumber operator+(float);
	virtual RationalNumber operator+(double);
	virtual RationalNumber operator+(long double);

	virtual RationalNumber operator+(const char*);



	virtual RationalNumber operator+=(RationalNumber);

	virtual RationalNumber operator+=(int);
	virtual RationalNumber operator+=(long);
	virtual RationalNumber operator+=(long long);

	virtual RationalNumber operator+=(unsigned int);
	virtual RationalNumber operator+=(unsigned long);
	virtual RationalNumber operator+=(unsigned long long);

	virtual RationalNumber operator+=(float);
	virtual RationalNumber operator+=(double);
	virtual RationalNumber operator+=(long double);

	virtual RationalNumber operator+=(const char*);



	virtual RationalNumber operator*(RationalNumber);

	virtual RationalNumber operator*(int);
	virtual RationalNumber operator*(long);
	virtual RationalNumber operator*(long long);

	virtual RationalNumber operator*(unsigned int);
	virtual RationalNumber operator*(unsigned long);
	virtual RationalNumber operator*(unsigned long long);

	virtual RationalNumber operator*(float);
	virtual RationalNumber operator*(double);
	virtual RationalNumber operator*(long double);

	virtual RationalNumber operator*(const char*);



	virtual RationalNumber operator*=(RationalNumber);

	virtual RationalNumber operator*=(int);
	virtual RationalNumber operator*=(long);
	virtual RationalNumber operator*=(long long);

	virtual RationalNumber operator*=(unsigned int);
	virtual RationalNumber operator*=(unsigned long);
	virtual RationalNumber operator*=(unsigned long long);

	virtual RationalNumber operator*=(float);
	virtual RationalNumber operator*=(double);
	virtual RationalNumber operator*=(long double);

	virtual RationalNumber operator*=(const char*);



	virtual RationalNumber operator-(RationalNumber);

	virtual RationalNumber operator-(int);
	virtual RationalNumber operator-(long);
	virtual RationalNumber operator-(long long);

	virtual RationalNumber operator-(unsigned int);
	virtual RationalNumber operator-(unsigned long);
	virtual RationalNumber operator-(unsigned long long);

	virtual RationalNumber operator-(float);
	virtual RationalNumber operator-(double);
	virtual RationalNumber operator-(long double);

	virtual RationalNumber operator-(const char*);



	virtual RationalNumber operator-=(RationalNumber);

	virtual RationalNumber operator-=(int);
	virtual RationalNumber operator-=(long);
	virtual RationalNumber operator-=(long long);

	virtual RationalNumber operator-=(unsigned int);
	virtual RationalNumber operator-=(unsigned long);
	virtual RationalNumber operator-=(unsigned long long);

	virtual RationalNumber operator-=(float);
	virtual RationalNumber operator-=(double);
	virtual RationalNumber operator-=(long double);

	virtual RationalNumber operator-=(const char*);



	virtual RationalNumber operator/(RationalNumber);

	virtual RationalNumber operator/(int);
	virtual RationalNumber operator/(long);
	virtual RationalNumber operator/(long long);

	virtual RationalNumber operator/(unsigned int);
	virtual RationalNumber operator/(unsigned long);
	virtual RationalNumber operator/(unsigned long long);

	virtual RationalNumber operator/(float);
	virtual RationalNumber operator/(double);
	virtual RationalNumber operator/(long double);

	virtual RationalNumber operator/(const char*);



	virtual RationalNumber operator/=(RationalNumber);

	virtual RationalNumber operator/=(int);
	virtual RationalNumber operator/=(long);
	virtual RationalNumber operator/=(long long);

	virtual RationalNumber operator/=(unsigned int);
	virtual RationalNumber operator/=(unsigned long);
	virtual RationalNumber operator/=(unsigned long long);

	virtual RationalNumber operator/=(float);
	virtual RationalNumber operator/=(double);
	virtual RationalNumber operator/=(long double);

	virtual RationalNumber operator/=(const char*);



	virtual bool operator>(RationalNumber);

	virtual bool operator>(int);
	virtual bool operator>(long);
	virtual bool operator>(long long);

	virtual bool operator>(unsigned int);
	virtual bool operator>(unsigned long);
	virtual bool operator>(unsigned long long);

	virtual bool operator>(float);
	virtual bool operator>(double);
	virtual bool operator>(long double);

	virtual bool operator>(const char*);



	virtual bool operator>=(RationalNumber);

	virtual bool operator>=(int);
	virtual bool operator>=(long);
	virtual bool operator>=(long long);

	virtual bool operator>=(unsigned int);
	virtual bool operator>=(unsigned long);
	virtual bool operator>=(unsigned long long);

	virtual bool operator>=(float);
	virtual bool operator>=(double);
	virtual bool operator>=(long double);

	virtual bool operator>=(const char*);



	virtual bool operator<(RationalNumber);

	virtual bool operator<(int);
	virtual bool operator<(long);
	virtual bool operator<(long long);

	virtual bool operator<(unsigned int);
	virtual bool operator<(unsigned long);
	virtual bool operator<(unsigned long long);

	virtual bool operator<(float);
	virtual bool operator<(double);
	virtual bool operator<(long double);

	virtual bool operator<(const char*);



	virtual bool operator<=(RationalNumber);

	virtual bool operator<=(int);
	virtual bool operator<=(long);
	virtual bool operator<=(long long);

	virtual bool operator<=(unsigned int);
	virtual bool operator<=(unsigned long);
	virtual bool operator<=(unsigned long long);

	virtual bool operator<=(float);
	virtual bool operator<=(double);
	virtual bool operator<=(long double);

	virtual bool operator<=(const char*);



	virtual bool operator==(RationalNumber);

	virtual bool operator==(int);
	virtual bool operator==(long);
	virtual bool operator==(long long);

	virtual bool operator==(unsigned int);
	virtual bool operator==(unsigned long);
	virtual bool operator==(unsigned long long);

	virtual bool operator==(float);
	virtual bool operator==(double);
	virtual bool operator==(long double);

	virtual bool operator==(const char*);



	virtual bool operator!=(RationalNumber);

	virtual bool operator!=(int);
	virtual bool operator!=(long);
	virtual bool operator!=(long long);

	virtual bool operator!=(unsigned int);
	virtual bool operator!=(unsigned long);
	virtual bool operator!=(unsigned long long);

	virtual bool operator!=(float);
	virtual bool operator!=(double);
	virtual bool operator!=(long double);

	virtual bool operator!=(const char*);

protected:
	std::string integer = "0";//整数部分
	std::string decimal = "0";//小数部分

	bool symbol = 1;//符号
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

	char* ccstr = 0;
};
