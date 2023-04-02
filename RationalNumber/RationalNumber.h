#pragma once

#define rational_number __declspec(dllexport)
//#define rational_number __declspec(dllimport)

#define R_AC 6    //小数精度

class rational_number RationalNumber {//有理数
public:

    [[maybe_unused]]
    static void setDivisionAccuracy(unsigned long long);  //设置除法精度
    static unsigned long long getDivisionAccuracy();      //获取除法精度

    RationalNumber();

    RationalNumber(const RationalNumber &);

    explicit RationalNumber(int);

    explicit RationalNumber(long);

    explicit RationalNumber(long long);

    explicit RationalNumber(unsigned int);

    explicit RationalNumber(unsigned long);

    explicit RationalNumber(unsigned long long);

    explicit RationalNumber(float, unsigned long long = R_AC);

    explicit RationalNumber(double, unsigned long long = R_AC);

    explicit RationalNumber(long double, unsigned long long = R_AC);

    explicit RationalNumber(const char *);

    ~RationalNumber();

    const char *c_str();                               //转字符串
    void flush();                                      //刷新数字

    [[maybe_unused]]
    void setAccuracy(unsigned long long = R_AC);            //设置小数精度
    [[maybe_unused]]
    void setSymbol(bool);                              //设置正负
    [[maybe_unused]]
    void setElement(unsigned long long, char);                     //设置元素

    [[maybe_unused]] [[nodiscard]]
    unsigned long long getAccuracy() const;                        //获取   小数精度
    [[nodiscard]]
    unsigned long long getIntegerSize() const;                     //获取   整数长度
    [[maybe_unused]] [[nodiscard]]
    unsigned long long getDecimalSize() const;                     //获取   小数长度
    [[nodiscard]]
    RationalNumber getInteger() const;                 //获取   整数部分
    [[nodiscard]]
    RationalNumber getDecimal() const;                 //获取   小数部分
    [[nodiscard]]
    RationalNumber getPureNumber() const;              //获取   纯 数 字
    [[nodiscard]]
    unsigned long long getPureNumberSize() const;                  //获取 纯数字长度
    [[maybe_unused]] [[nodiscard]]
    bool getSymbol() const;                            //获取   正 负 号
    [[maybe_unused]]
    char getElement(unsigned long long);                           //获取元素

    RationalNumber &operator=(const RationalNumber &);

    RationalNumber &operator=(int);

    RationalNumber &operator=(long);

    RationalNumber &operator=(long long);

    RationalNumber &operator=(unsigned int);

    RationalNumber &operator=(unsigned long);

    RationalNumber &operator=(unsigned long long);

    RationalNumber &operator=(float);

    RationalNumber &operator=(double);

    RationalNumber &operator=(long double);

    RationalNumber &operator=(const char *);


    RationalNumber operator+(const RationalNumber &) const;

    RationalNumber operator+(int) const;

    RationalNumber operator+(long) const;

    RationalNumber operator+(long long) const;

    RationalNumber operator+(unsigned int) const;

    RationalNumber operator+(unsigned long) const;

    RationalNumber operator+(unsigned long long) const;

    RationalNumber operator+(float) const;

    RationalNumber operator+(double) const;

    RationalNumber operator+(long double) const;

    RationalNumber operator+(const char *) const;


    RationalNumber &operator+=(const RationalNumber &);

    RationalNumber &operator+=(int);

    RationalNumber &operator+=(long);

    RationalNumber &operator+=(long long);

    RationalNumber &operator+=(unsigned int);

    RationalNumber &operator+=(unsigned long);

    RationalNumber &operator+=(unsigned long long);

    RationalNumber &operator+=(float);

    RationalNumber &operator+=(double);

    RationalNumber &operator+=(long double);

    RationalNumber &operator+=(const char *);


    RationalNumber operator*(const RationalNumber &) const;

    RationalNumber operator*(int) const;

    RationalNumber operator*(long) const;

    RationalNumber operator*(long long) const;

    RationalNumber operator*(unsigned int) const;

    RationalNumber operator*(unsigned long) const;

    RationalNumber operator*(unsigned long long) const;

    RationalNumber operator*(float) const;

    RationalNumber operator*(double) const;

    RationalNumber operator*(long double) const;

    RationalNumber operator*(const char *) const;


    RationalNumber &operator*=(const RationalNumber &);

    RationalNumber &operator*=(int);

    RationalNumber &operator*=(long);

    RationalNumber &operator*=(long long);

    RationalNumber &operator*=(unsigned int);

    RationalNumber &operator*=(unsigned long);

    RationalNumber &operator*=(unsigned long long);

    RationalNumber &operator*=(float);

    RationalNumber &operator*=(double);

    RationalNumber &operator*=(long double);

    RationalNumber &operator*=(const char *);


    RationalNumber operator-(const RationalNumber &) const;

    RationalNumber operator-(int) const;

    RationalNumber operator-(long) const;

    RationalNumber operator-(long long) const;

    RationalNumber operator-(unsigned int) const;

    RationalNumber operator-(unsigned long) const;

    RationalNumber operator-(unsigned long long) const;

    RationalNumber operator-(float) const;

    RationalNumber operator-(double) const;

    RationalNumber operator-(long double) const;

    RationalNumber operator-(const char *) const;


    RationalNumber &operator-=(const RationalNumber &);

    RationalNumber &operator-=(int);

    RationalNumber &operator-=(long);

    RationalNumber &operator-=(long long);

    RationalNumber &operator-=(unsigned int);

    RationalNumber &operator-=(unsigned long);

    RationalNumber &operator-=(unsigned long long);

    RationalNumber &operator-=(float);

    RationalNumber &operator-=(double);

    RationalNumber &operator-=(long double);

    RationalNumber &operator-=(const char *);


    RationalNumber operator/(const RationalNumber &) const;

    RationalNumber operator/(int) const;

    RationalNumber operator/(long) const;

    RationalNumber operator/(long long) const;

    RationalNumber operator/(unsigned int) const;

    RationalNumber operator/(unsigned long) const;

    RationalNumber operator/(unsigned long long) const;

    RationalNumber operator/(float) const;

    RationalNumber operator/(double) const;

    RationalNumber operator/(long double) const;

    RationalNumber operator/(const char *) const;


    RationalNumber &operator/=(const RationalNumber &);

    RationalNumber &operator/=(int);

    RationalNumber &operator/=(long);

    RationalNumber &operator/=(long long);

    RationalNumber &operator/=(unsigned int);

    RationalNumber &operator/=(unsigned long);

    RationalNumber &operator/=(unsigned long long);

    RationalNumber &operator/=(float);

    RationalNumber &operator/=(double);

    RationalNumber &operator/=(long double);

    RationalNumber &operator/=(const char *);


    bool operator>(const RationalNumber &) const;

    bool operator>(int) const;

    bool operator>(long) const;

    bool operator>(long long) const;

    bool operator>(unsigned int) const;

    bool operator>(unsigned long) const;

    bool operator>(unsigned long long) const;

    bool operator>(float) const;

    bool operator>(double) const;

    bool operator>(long double) const;

    bool operator>(const char *) const;


    bool operator>=(const RationalNumber &) const;

    bool operator>=(int) const;

    bool operator>=(long) const;

    bool operator>=(long long) const;

    bool operator>=(unsigned int) const;

    bool operator>=(unsigned long) const;

    bool operator>=(unsigned long long) const;

    bool operator>=(float) const;

    bool operator>=(double) const;

    bool operator>=(long double) const;

    bool operator>=(const char *) const;


    bool operator<(const RationalNumber &) const;

    bool operator<(int) const;

    bool operator<(long) const;

    bool operator<(long long) const;

    bool operator<(unsigned int) const;

    bool operator<(unsigned long) const;

    bool operator<(unsigned long long) const;

    bool operator<(float) const;

    bool operator<(double) const;

    bool operator<(long double) const;

    bool operator<(const char *) const;


    bool operator<=(const RationalNumber &) const;

    bool operator<=(int) const;

    bool operator<=(long) const;

    bool operator<=(long long) const;

    bool operator<=(unsigned int) const;

    bool operator<=(unsigned long) const;

    bool operator<=(unsigned long long) const;

    bool operator<=(float) const;

    bool operator<=(double) const;

    bool operator<=(long double) const;

    bool operator<=(const char *) const;


    bool operator==(const RationalNumber &) const;

    bool operator==(int) const;

    bool operator==(long) const;

    bool operator==(long long) const;

    bool operator==(unsigned int) const;

    bool operator==(unsigned long) const;

    bool operator==(unsigned long long) const;

    bool operator==(float) const;

    bool operator==(double) const;

    bool operator==(long double) const;

    bool operator==(const char *) const;


    bool operator!=(const RationalNumber &) const;

    bool operator!=(int) const;

    bool operator!=(long) const;

    bool operator!=(long long) const;

    bool operator!=(unsigned int) const;

    bool operator!=(unsigned long) const;

    bool operator!=(unsigned long long) const;

    bool operator!=(float) const;

    bool operator!=(double) const;

    bool operator!=(long double) const;

    bool operator!=(const char *) const;

private:
    void *integer = nullptr;//整数部分
    void *decimal = nullptr;//小数部分

    bool symbol = true;//符号
    /*
    * 1为正数,0为负数
    * 如果数字为0,此变量可1可0
    * 默认1
    */

    unsigned long long accuracy = R_AC;//小数精度
    /*
    * 设a=accuracy
    * 则10的-a次方就是它的精度
    * 简单来说,就是小数点后a位
    */

    char *ccstr = nullptr;
};

rational_number RationalNumber operator+(int, const RationalNumber &);
rational_number RationalNumber operator+(long, const RationalNumber &);
rational_number RationalNumber operator+(long long, const RationalNumber &);
rational_number RationalNumber operator+(unsigned int, const RationalNumber &);
rational_number RationalNumber operator+(unsigned long, const RationalNumber &);
rational_number RationalNumber operator+(unsigned long long, const RationalNumber &);
rational_number RationalNumber operator+(float, const RationalNumber &);
rational_number RationalNumber operator+(double, const RationalNumber &);
rational_number RationalNumber operator+(long double, const RationalNumber &);
rational_number RationalNumber operator+(const char *, const RationalNumber &);
rational_number RationalNumber operator-(int, const RationalNumber &);
rational_number RationalNumber operator-(long, const RationalNumber &);
rational_number RationalNumber operator-(long long, const RationalNumber &);
rational_number RationalNumber operator-(unsigned int, const RationalNumber &);
rational_number RationalNumber operator-(unsigned long, const RationalNumber &);
rational_number RationalNumber operator-(unsigned long long, const RationalNumber &);
rational_number RationalNumber operator-(float, const RationalNumber &);
rational_number RationalNumber operator-(double, const RationalNumber &);
rational_number RationalNumber operator-(long double, const RationalNumber &);
rational_number RationalNumber operator-(const char *, const RationalNumber &);
rational_number RationalNumber operator*(int, const RationalNumber &);
rational_number RationalNumber operator*(long, const RationalNumber &);
rational_number RationalNumber operator*(long long, const RationalNumber &);
rational_number RationalNumber operator*(unsigned int, const RationalNumber &);
rational_number RationalNumber operator*(unsigned long, const RationalNumber &);
rational_number RationalNumber operator*(unsigned long long, const RationalNumber &);
rational_number RationalNumber operator*(float, const RationalNumber &);
rational_number RationalNumber operator*(double, const RationalNumber &);
rational_number RationalNumber operator*(long double, const RationalNumber &);
rational_number RationalNumber operator*(const char *, const RationalNumber &);
rational_number RationalNumber operator/(int, const RationalNumber &);
rational_number RationalNumber operator/(long, const RationalNumber &);
rational_number RationalNumber operator/(long long, const RationalNumber &);
rational_number RationalNumber operator/(unsigned int, const RationalNumber &);
rational_number RationalNumber operator/(unsigned long, const RationalNumber &);
rational_number RationalNumber operator/(unsigned long long, const RationalNumber &);
rational_number RationalNumber operator/(float, const RationalNumber &);
rational_number RationalNumber operator/(double, const RationalNumber &);
rational_number RationalNumber operator/(long double, const RationalNumber &);
rational_number RationalNumber operator/(const char *, const RationalNumber &);
rational_number bool operator==(int, const RationalNumber &);
rational_number bool operator==(long, const RationalNumber &);
rational_number bool operator==(long long, const RationalNumber &);
rational_number bool operator==(unsigned int, const RationalNumber &);
rational_number bool operator==(unsigned long, const RationalNumber &);
rational_number bool operator==(unsigned long long, const RationalNumber &);
rational_number bool operator==(float, const RationalNumber &);
rational_number bool operator==(double, const RationalNumber &);
rational_number bool operator==(long double, const RationalNumber &);
rational_number bool operator==(const char *, const RationalNumber &);
rational_number bool operator!=(int, const RationalNumber &);
rational_number bool operator!=(long, const RationalNumber &);
rational_number bool operator!=(long long, const RationalNumber &);
rational_number bool operator!=(unsigned int, const RationalNumber &);
rational_number bool operator!=(unsigned long, const RationalNumber &);
rational_number bool operator!=(unsigned long long, const RationalNumber &);
rational_number bool operator!=(float, const RationalNumber &);
rational_number bool operator!=(double, const RationalNumber &);
rational_number bool operator!=(long double, const RationalNumber &);
rational_number bool operator!=(const char *, const RationalNumber &);
rational_number bool operator>(int, const RationalNumber &);
rational_number bool operator>(long, const RationalNumber &);
rational_number bool operator>(long long, const RationalNumber &);
rational_number bool operator>(unsigned int, const RationalNumber &);
rational_number bool operator>(unsigned long, const RationalNumber &);
rational_number bool operator>(unsigned long long, const RationalNumber &);
rational_number bool operator>(float, const RationalNumber &);
rational_number bool operator>(double, const RationalNumber &);
rational_number bool operator>(long double, const RationalNumber &);
rational_number bool operator>(const char *, const RationalNumber &);
rational_number bool operator>=(int, const RationalNumber &);
rational_number bool operator>=(long, const RationalNumber &);
rational_number bool operator>=(long long, const RationalNumber &);
rational_number bool operator>=(unsigned int, const RationalNumber &);
rational_number bool operator>=(unsigned long, const RationalNumber &);
rational_number bool operator>=(unsigned long long, const RationalNumber &);
rational_number bool operator>=(float, const RationalNumber &);
rational_number bool operator>=(double, const RationalNumber &);
rational_number bool operator>=(long double, const RationalNumber &);
rational_number bool operator>=(const char *, const RationalNumber &);
rational_number bool operator<(int, const RationalNumber &);
rational_number bool operator<(long, const RationalNumber &);
rational_number bool operator<(long long, const RationalNumber &);
rational_number bool operator<(unsigned int, const RationalNumber &);
rational_number bool operator<(unsigned long, const RationalNumber &);
rational_number bool operator<(unsigned long long, const RationalNumber &);
rational_number bool operator<(float, const RationalNumber &);
rational_number bool operator<(double, const RationalNumber &);
rational_number bool operator<(long double, const RationalNumber &);
rational_number bool operator<(const char *, const RationalNumber &);
rational_number bool operator<=(int, const RationalNumber &);
rational_number bool operator<=(long, const RationalNumber &);
rational_number bool operator<=(long long, const RationalNumber &);
rational_number bool operator<=(unsigned int, const RationalNumber &);
rational_number bool operator<=(unsigned long, const RationalNumber &);
rational_number bool operator<=(unsigned long long, const RationalNumber &);
rational_number bool operator<=(float, const RationalNumber &);
rational_number bool operator<=(double, const RationalNumber &);
rational_number bool operator<=(long double, const RationalNumber &);
rational_number bool operator<=(const char *, const RationalNumber &);
