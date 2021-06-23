#pragma once

#define rational_number __declspec(dllexport)
//#define rational_number __declspec(dllimport)

#define R_AC 7    //С������

#include<string>

template class rational_number std::allocator<char>;
template class rational_number std::basic_string<char>;

rational_number void setDivisionAccuracy(size_t);  //���ó�������
rational_number size_t getDivisionAccuracy();      //��ȡ��������

class rational_number RationalNumber {//������
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

	virtual const char*              c_str();                                      //ת�ַ���
	virtual void                     flush();                                      //ˢ������
 
	virtual void                     setAccuracy(unsigned long = R_AC);            //����С������
	virtual void                     setSymbol(bool);                              //��������
	virtual void                     setElement(size_t, char);                     //����Ԫ��

	virtual size_t                   getAccuracy();                                //��ȡ   С������
	virtual size_t                   getIntegerSize();                             //��ȡ   ��������
	virtual size_t                   getDecimalSize();                             //��ȡ   С������
	virtual RationalNumber           getInteger();                                 //��ȡ   ��������
	virtual RationalNumber           getDecimal();                                 //��ȡ   С������
	virtual RationalNumber           getPureNumber();                              //��ȡ   �� �� ��
	virtual size_t                   getPureNumberSize();                          //��ȡ �����ֳ���
	virtual bool                     getSymbol();                                  //��ȡ   �� �� ��
	virtual char                     getElement(size_t);                           //��ȡԪ��



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
	std::string integer = "0";//��������
	std::string decimal = "0";//С������

	bool symbol = 1;//����
	/*
	* 1Ϊ����,0Ϊ����
	* �������Ϊ0,�˱�����1��0
	* Ĭ��1
	*/

	size_t accuracy = R_AC;//С������
	/*
	* ��a=accuracy
	* ��10��-a�η��������ľ���
	* ����˵,����С�����aλ
	*/

	char* ccstr = 0;
};
