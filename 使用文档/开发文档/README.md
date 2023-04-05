# 开发文档  

<details>  
  <summary><a href = "https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E5%87%BD%E6%95%B0">函数</a></summary>  

* [构造函数](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#rationalnumber-%E6%9E%84%E9%80%A0%E5%87%BD%E6%95%B0)  
* [const char* c_str()](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#const-char-c_str)  
* [RationalNumber &flush()](https://github.com/Zightch/RationalNumber/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#rationalnumber-flush)  
* 设置函数  
  * [RationalNumber &setAccuracy(unsigned long long = R_AC)](https://github.com/Zightch/RationalNumber/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#rationalnumber-setaccuracyunsigned-long-long--r_ac)  
  * [RationalNumber &setSymbol(bool)](https://github.com/Zightch/RationalNumber/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#rationalnumber-setsymbolbool)  
  * [RationalNumber &setElement(unsigned long long, char)](https://github.com/Zightch/RationalNumber/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#rationalnumber-setelementunsigned-long-long-char)  
* 获取函数  
  * [unsigned long long getAccuracy()](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#unsigned-long-long-getaccuracy)  
  * [unsigned long long getIntegerSize()](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#unsigned-long-long-getintegersize)  
  * [unsigned long long getDecimalSize()](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#unsigned-long-long-getdecimalsize)  
  * [RationalNumber getInteger()](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#rationalnumber-getinteger)  
  * [RationalNumber getDecimal()](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#rationalnumber-getdecimal)  
  * [RationalNumber getPureNumber()](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#rationalnumber-getpurenumber)  
  * [unsigned long long getPureNumberSize()](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#unsigned-long-long-getpurenumbersize)  
  * [bool getSymbol()](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#bool-getsymbol)  
  * [char getElement(unsigned long long)](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#char-getelementunsigned-long-long)  
* 运算  
  * [四则运算](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E5%9B%9B%E5%88%99%E8%BF%90%E7%AE%97)  
  * [自运算](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E8%87%AA%E8%BF%90%E7%AE%97)  
  * [比较大小](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E6%AF%94%E8%BE%83%E5%A4%A7%E5%B0%8F)  

</details>  
<details>  
  <summary><a href = "https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E5%AE%9A%E4%B9%89">定义</a></summary>  

* [整数部分](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E6%95%B4%E6%95%B0%E9%83%A8%E5%88%86)  
* [小数部分](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E5%B0%8F%E6%95%B0%E9%83%A8%E5%88%86)  
* [符号](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E7%AC%A6%E5%8F%B7)  
* [小数精度](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E5%B0%8F%E6%95%B0%E7%B2%BE%E5%BA%A6)  
* [0 的定义](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#0-%E7%9A%84%E5%AE%9A%E4%B9%89)  
* [纯数字](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E7%BA%AF%E6%95%B0%E5%AD%97)  
* [元素](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E5%85%83%E7%B4%A0)  
  * [元素位置](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E5%85%83%E7%B4%A0%E4%BD%8D%E7%BD%AE)  

</details>  
<details>  
  <summary><a href = "https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E7%BB%BC%E5%90%88%E4%BD%BF%E7%94%A8%E7%A4%BA%E4%BE%8B">综合使用示例</a></summary>  

* [冒泡排序](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E5%86%92%E6%B3%A1%E6%8E%92%E5%BA%8F)  
* [快速排序](https://github.com/Zightch/RationalNumber/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/README.md#%E5%BF%AB%E9%80%9F%E6%8E%92%E5%BA%8F)  
* []()

</details>  

[注意事项](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E6%B3%A8%E6%84%8F%E4%BA%8B%E9%A1%B9)  
## 函数  
### RationalNumber 构造函数  
一共 12 个重载  
满足所有的 基本数据类型 和 复合数据类型  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/RationalNumber%E6%9E%84%E9%80%A0%E5%87%BD%E6%95%B0.PNG)  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/RationalNumber%E6%9E%84%E9%80%A0%E5%87%BD%E6%95%B02.PNG)  
### const char* c_str()  
直接输出 RationalNumber 类型的变量是不可以的  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/c_str().PNG)  
需要转换成 const char* 才能正常输出数据
用法和 std::string::c_str() 类似  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/c_str()2.PNG)  
### RationalNumber &flush()  
用于刷新数字(由于开发中很少遇到这种情况,这里就不图片演示了)  
1.清除 整数 前多余的 0 和 小数 后多余的 0  
2.如果这个数字是 0 [(关于 0 的定义)](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#0-%E7%9A%84%E5%AE%9A%E4%B9%89),并且符号为 "-" ,将符号变为 "+"  
"-0091.3200" -> flush() -> "-91.32"  
"-0" -> flush() -> "0"  
### RationalNumber &setAccuracy(unsigned long long = R_AC)  
设置数字的[小数精度](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E5%B0%8F%E6%95%B0%E7%B2%BE%E5%BA%A6)  
默认为7  
可以通过更改它来实现改变输出的[小数精度](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E5%B0%8F%E6%95%B0%E7%B2%BE%E5%BA%A6)  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/setAccuracy(unsigned%20long%20%3D%20R_AC).PNG)  
### RationalNumber &setSymbol(bool)  
设置数字的[符号](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E7%AC%A6%E5%8F%B7)  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/setSymbol(bool).PNG)  
### RationalNumber &setElement(unsigned long long, char)  
设置[元素](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E5%85%83%E7%B4%A0)  
第1个参数(类型unsigned long long)是[元素位置](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E5%85%83%E7%B4%A0%E4%BD%8D%E7%BD%AE)  
如果你传入的参数大小超过最大下标,则会抛出 ArrayIndexOutOfBoundsException类型 的异常(数组越界)  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/setElement(size_t%2C%20char).PNG)  
第2个参数(类型char)是新的元素  
就是你要替换的后的新元素  
这个参数允许使用两种数据  
一种是 数字 0 ~ 9  
另一种是 字符 '0' ~ '9'  
只要不在这个范围内  
就会抛出 DataNotSpecificationException类型 的异常(数据不符合规范)  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/setElement(size_t%2C%20char)2.PNG)  
### unsigned long long getAccuracy()  
可以获取数字的[小数精度](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E5%B0%8F%E6%95%B0%E7%B2%BE%E5%BA%A6)  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/getAccuracy().PNG)  
### RationalNumber getInteger()  
获取数字的[整数部分](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E6%95%B4%E6%95%B0%E9%83%A8%E5%88%86)  
只保留[符号](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E7%AC%A6%E5%8F%B7)和[整数部分](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E6%95%B4%E6%95%B0%E9%83%A8%E5%88%86)的数字  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/getInteger().PNG)  
### RationalNumber getDecimal()  
获取数字的[小数部分](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E5%B0%8F%E6%95%B0%E9%83%A8%E5%88%86)  
只保留[符号](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E7%AC%A6%E5%8F%B7)和[小数部分](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E5%B0%8F%E6%95%B0%E9%83%A8%E5%88%86),[整数部分](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E6%95%B4%E6%95%B0%E9%83%A8%E5%88%86)为0  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/getDecimal().PNG)  
### RationalNumber getPureNumber()  
获取数字的[纯数字](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E7%BA%AF%E6%95%B0%E5%AD%97)  
只保留数字,丢弃[符号](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E7%AC%A6%E5%8F%B7)和小数点  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/getPureNumber().PNG)  
### unsigned long long getIntegerSize()  
获取 [整数部分](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E6%95%B4%E6%95%B0%E9%83%A8%E5%88%86) 的长度  
其实就是[整数部分](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E6%95%B4%E6%95%B0%E9%83%A8%E5%88%86)有多少位数字  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/getIntegerSize().PNG)  
上图中,数字a的[整数部分](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E6%95%B4%E6%95%B0%E9%83%A8%E5%88%86)有 3 位数字  
如果[整数部分](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E6%95%B4%E6%95%B0%E9%83%A8%E5%88%86)为 0 ,则[整数部分](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E6%95%B4%E6%95%B0%E9%83%A8%E5%88%86)有 1 位数字  
### unsigned long long getDecimalSize()  
获取 [小数部分](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E5%B0%8F%E6%95%B0%E9%83%A8%E5%88%86) 的长度  
其实就是[小数部分](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E5%B0%8F%E6%95%B0%E9%83%A8%E5%88%86)有多少位数字  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/getDecimalSize().PNG)  
我们可以发现,当小数部分为 0 时,[小数部分](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E5%B0%8F%E6%95%B0%E9%83%A8%E5%88%86)的长度(也就是小数位数)就是 0 位数字  
### unsigned long long getPureNumberSize()  
获取 [纯数字](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E7%BA%AF%E6%95%B0%E5%AD%97) 的长度  
其实就是[纯数字](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E7%BA%AF%E6%95%B0%E5%AD%97)有多少位数字  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/getPureNumberSize().PNG)  
本质上来讲就是 [整数部分](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E6%95%B4%E6%95%B0%E9%83%A8%E5%88%86)的长度 + [小数部分](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E5%B0%8F%E6%95%B0%E9%83%A8%E5%88%86)的长度  
也是 [getIntegerSize()](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#rationalnumber-getinteger) + [getDecimalSize()](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#rationalnumber-getdecimal) 的结果  
### bool getSymbol()  
获取一个数字的[符号](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E7%AC%A6%E5%8F%B7)  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/getSymbol().PNG)  
### char getElement(unsigned long long)  
获取[元素](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E5%85%83%E7%B4%A0)  
参数(类型unsigned long long)是[元素位置](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E5%85%83%E7%B4%A0%E4%BD%8D%E7%BD%AE)  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/getElement(size_t).PNG)  
### 四则运算  
* 例
```C++
#include<iostream>
#include"RationalNumber.h"
int main() {
	RationalNumber a; RationalNumber b;
	RationalNumber ans;
	{//加
		a = "10.1991"; b = "11.801";
		ans = a + b;
		std::cout << a.c_str() << " + " << b.c_str() << " = " << ans.c_str() << std::endl;
	}
	{//减
		a = "13.198"; b = "11.18";
		ans = a - b;
		std::cout << a.c_str() << " - " << b.c_str() << " = " << ans.c_str() << std::endl;
	}
	{//乘
		a = "0.49"; b = "0.22";
		ans = a * b;
		std::cout << a.c_str() << " * " << b.c_str() << " = " << ans.c_str() << std::endl;
	}
	{//除
		a = "1"; b = "3";
		ans = a / b;
		std::cout << a.c_str() << " / " << b.c_str() << " = " << ans.c_str() << std::endl;
	}
	return 0;
}
```  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/%E5%9B%9B%E5%88%99%E8%BF%90%E7%AE%97.PNG)  
### 自运算  
* 例
```C++
#include<iostream>
#include"RationalNumber.h"
int main() {
	RationalNumber a = 10;
	a += 1;
	std::cout << a.c_str() << std::endl;
	a = 10;
	a -= 5;
	std::cout << a.c_str() << std::endl;
	a = 10;
	a *= 7;
	std::cout << a.c_str() << std::endl;
	a = 10;
	a /= 3;
	std::cout << a.c_str() << std::endl;
	return 0;
}
```  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/%E8%87%AA%E8%BF%90%E7%AE%97.PNG)  
### 比较大小  
情况较多,这里就不列举了  
用法同基本数据类型  
## 定义  
### 整数部分  
一个数字的整数部分  
* 例1: -101.98  
整数部分为 -101  
* 例2: -0.333  
整数部分为 0  

可以通过 [getInteger()](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#rationalnumber-getinteger) 函数 获取到数字的整数部分  
### 小数部分  
一个数字的小数部分
* 例: -3.1415926  
小数部分为 -0.1415926  

可以通过 [getDecimal()](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#rationalnumber-getdecimal) 函数 获取到数字的小数部分  
### 符号  
它决定了一个数字的正负号  
为1时数字是正数  
为0时数字是负数  
可以使用 [setSymbol(bool)](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#void-setsymbolbool) 函数 来改变数字的符号  
可以使用 [getSymbol()](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#bool-getsymbol) 函数 来获取数字的符号  
### 小数精度  
一个宏定义 #define R_AC 7  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%AE%9A%E4%B9%89/%E5%B0%8F%E6%95%B0%E7%B2%BE%E5%BA%A6.PNG)  
它决定了 c_str() 的输出小数最大位数 和 被小数赋值时的最大位数  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%AE%9A%E4%B9%89/%E5%B0%8F%E6%95%B0%E7%B2%BE%E5%BA%A62.PNG)  
我们可以发现 a 和 b 的小数位数都是 7 ,不管他们的[小数部分](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E5%B0%8F%E6%95%B0%E9%83%A8%E5%88%86)的[纯数字](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E7%BA%AF%E6%95%B0%E5%AD%97)有多少位  
如果要更改某个数字的 小数精度 可以使用 [setAccuracy(unsigned long = R_AC)](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#void-setaccuracyunsigned-long-long--r_ac) 函数  
### 0 的定义  
当[整数部分](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E6%95%B4%E6%95%B0%E9%83%A8%E5%88%86)和[小数部分](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E5%B0%8F%E6%95%B0%E9%83%A8%E5%88%86)共同为 0 时,这个数字为 0  
### 纯数字  
一个数字的纯数字,可以使用 [getPureNumber()](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#rationalnumber-getpurenumber) 函数 获取数字的纯数字  
就是一个数字,除去 符号 和 小数点 剩下的全部数字,就是纯数字  
* 例1:数字 -101.236  
它的纯数字为 101236  
* 例2:数字 -0.6667  
他的纯数字为 6667  
* 例3:数字 14.0  
他的纯数字为 14  

也就是说  
当[整数部分](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E6%95%B4%E6%95%B0%E9%83%A8%E5%88%86)为 0 时,纯数字只保留[小数部分](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E5%B0%8F%E6%95%B0%E9%83%A8%E5%88%86)  
当[小数部分](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E5%B0%8F%E6%95%B0%E9%83%A8%E5%88%86)为 0 时,纯数字只保留[整数部分](https://github.com/Zightch/rational-number/tree/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3#%E6%95%B4%E6%95%B0%E9%83%A8%E5%88%86)  
### 元素  
简单来说就是每一位的数字,包括整数和小数  
例如数字 3.1415926  
3,1,4,1,5,9,2,6都是这个数字的元素  
而符号和小数点不是该数字元素  
#### 元素位置  
例如数字 -90.342  
9位于第0个元素,0位于第1个元素,3位于第2个元素......以此类推  
即
元素 | 9 | 0 | 3 | 4 | 2  
:-: | :-: | :-: | :-: | :-: | :-:  
元素位置(下标) | 0 | 1 | 2 | 3 | 4  

## 综合使用示例  
### 冒泡排序  
```C++
#include<iostream>
#include"RationalNumber.h"
int main() {
	unsigned long long n;
	std::cin >> n;//输入元素个数
	RationalNumber* a = new RationalNumber[n];//分配内存
	for (unsigned long long i = 0; i < n; i++) {//输入每个元素
		std::string tmp;//由于RationalNumber类中没有提供直接用std::cin输入的接口,所以需要用字符串来中转
		std::cin >> tmp;//输入数字的字符串
		a[i] = tmp.c_str();//赋值
	}
	for (unsigned long long i = 0; i < n - 1; i++) {//排序
		for (unsigned long long j = n - 1; j > i; j--) {
			if (a[i] > a[j]) {
				RationalNumber tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	for (unsigned long long i = 0; i < n; i++) {//输出
		std::cout << a[i].c_str() << " ";
	}
	delete[]a;
	return 0;
}
```  
例样输入  
```
6
10.1998 10.1999 10.19999 -3.234 -3.233 -3.232
```  
例样输出  
```
-3.234 -3.233 -3.232 10.1998 10.1999 10.19999
```  
### 快速排序
```C++
#include <iostream>
#include <functional>
#include "RationalNumber.h"
template<typename T>
void sort(T *array, unsigned long long int left, unsigned long long int right, std::function<bool(T, T)> compare) {
    unsigned long long j;
    if (left >= right)return;
    T x = array[left];
    j = left;
    for (unsigned long long i = left + 1; i < right; i++) {
        if (compare(array[i], x)) {
            j = j + 1;
            T tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;
        }
    }
    array[left] = array[j];
    array[j] = x;
    if (j > 0)sort(array, left, j - 1, compare);
    if (j < right)sort(array, j + 1, right, compare);
}
int main() {
    unsigned long long n;
    std::cin >> n;//输入元素个数
    auto *a = new RationalNumber[n];
    for (unsigned long long i = 0; i < n; i++) {
        std::string tmp;
        std::cin >> tmp;//需要借助string来对有理数进行赋值
        a[i] = tmp.c_str();
    }
    auto cmp = [](const RationalNumber& a, const RationalNumber& b) -> bool { return a < b; };
    sort<RationalNumber>(a, 0, n, cmp);
    for (unsigned long long i = 0; i < n; i++)std::cout << a[i].c_str() << " ";
    delete[]a;
    return 0;
}
```
例样输入
```
6
10.1998 10.1999 10.19999 -3.234 -3.233 -3.232
```  
例样输出
```
-3.234 -3.233 -3.232 10.1998 10.1999 10.19999
``` 
## 注意事项  
* 字符串赋值问题  
你会发现  
在开发文档的示例中  
基本上含有小数的数字赋值都用的是字符串赋值  
当然 , 在实际开发如果需要使用本类库  
强烈推荐也使用字符串复制  
避免出现下列情况  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E6%B3%A8%E6%84%8F%E4%BA%8B%E9%A1%B9/%E5%B0%8F%E6%95%B0%E7%B2%BE%E5%BA%A6%E9%97%AE%E9%A2%98.PNG)  
严格来说  
输出结果应该是 191.99999  
因为原先只有 5 位小数  
实际上是 191.99998999999999682586349081248044  
这就会导致一些问题和错误  
所以换成字符串赋值  
就可以避免上述情况  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E6%B3%A8%E6%84%8F%E4%BA%8B%E9%A1%B9/%E5%B0%8F%E6%95%B0%E7%B2%BE%E5%BA%A6%E9%97%AE%E9%A2%982.PNG)  
* 编译警告问题  
编译时会出现 warning C4251 警告  
可以完全忽略它  
它不会对编译结果或者项目可执行文件造成任何影响  
