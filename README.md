# RationalNumber
long long数据范围不够大?  
long double精度不够高?  
RationalNumber(有理数)类库满足你的所有数据需求  
# 下载
* [DLL下载](https://github.com/Zightch/rational-number/releases)  
* [源代码下载](https://github.com/Zightch/rational-number/archive/refs/heads/main.zip)  
# 说明  
本类库由 **林梦-Zightch** 开发,为开源项目  
类库自带的所有运算均为 **高精度** 计算  
支持 加 减 乘 除 以及 自运算  
支持 比较大小(==,>=,<=,>,<,!=)  
还有更多好用的功能(具体功能用法看 [**使用文档**](https://github.com/Zightch/rational-number#%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3) )  
有问题可以[联系](https://github.com/Zightch/rational-number#%E8%81%94%E7%B3%BB%E6%96%B9%E5%BC%8F) **林梦-Zightch**  
### 联系方式  
QQ号:2166825850  
编程交流群:928034473  
# 使用文档  
* [配置环境](https://github.com/Zightch/rational-number#%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83)  
* [开发文档](https://github.com/Zightch/rational-number#%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3)  
## 配置环境  

<details>  
  <summary>展开</summary>  

### 第一步  
打开VS2019,并新建空项目,名为Rational_test(名字自己写)  
### 第二步  
* 1.从 [这里](https://github.com/Zightch/rational-number/releases/download/v1.0.0/RationalNumber.zip) 下载已经编译生成好的dll文件和用户头文件  
如果你不放心可以从 [这里](https://github.com/Zightch/rational-number/archive/refs/tags/v1.0.0.zip) 下载源代码,自己编译  
* 2.打开下载好的 RationalNumber.zip  
将 RationalNumber.h 和 RationalNumber.lib 解压到 RationalNumber_test.vcxproj 所在目录下  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/%E7%AC%AC%E4%BA%8C%E6%AD%A5.PNG)  
### 第三步  
* 1.打开你新建好的项目  
* 2.右键头文件->添加->现有项  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/%E7%AC%AC%E4%B8%89%E6%AD%A5.PNG)  
* 3.选择 RationalNumber.h ,点击添加  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/%E7%AC%AC%E4%B8%89%E6%AD%A52.PNG)  
* 4.更改架构为 x64  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/%E7%AC%AC%E4%B8%89%E6%AD%A53.PNG)  
* 5.打开项目属性,展开 链接器 ,找到 附加依赖项 ,点击右边的小箭头,点击 编辑  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/%E7%AC%AC%E4%B8%89%E6%AD%A54.PNG)  
* 6.将 RationalNumber.lib 写进第一个方框内 (注意:有时候需要写 RationalNumber.lib 的绝对路径)  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/%E7%AC%AC%E4%B8%89%E6%AD%A55.PNG)  
* 7.点击确定,点击应用  
### 第四步  
* 1.右键源文件->新建项->Cpp文件  
* 2.写入代码  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/%E7%AC%AC%E5%9B%9B%E6%AD%A5.PNG)  
* 3.编译运行(本地 windows 调试器)  
你会发现弹出了一个提示框
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/%E7%AC%AC%E5%9B%9B%E6%AD%A52.PNG)  
* 4.将 RationalNumber.dll 复制到 RationalNumber_test.exe 所在目录下  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/%E7%AC%AC%E5%9B%9B%E6%AD%A53.PNG)  
* 5.再次重新编译运行就不会有问题了  

</details>  

## 开发文档  

<details>  
  <summary><a href = "https://github.com/Zightch/rational-number#%E5%87%BD%E6%95%B0">函数</a></summary>  

* [构造函数](https://github.com/Zightch/rational-number#rationalnumber-%E6%9E%84%E9%80%A0%E5%87%BD%E6%95%B0)  
* [const char* c_str()](https://github.com/Zightch/rational-number#const-char-c_str)  
* [void flush()](https://github.com/Zightch/rational-number#void-flush)  
* 设置函数  
  * [void setAccuracy(unsigned long = R_AC)](https://github.com/Zightch/rational-number#void-setaccuracyunsigned-long--r_ac)  
  * [void setSymbol(bool)](https://github.com/Zightch/rational-number#void-setsymbolbool)  
  * [void setElement(size_t, char)](https://github.com/Zightch/rational-number#void-setelementsize_t-char)  
* 获取函数  
  * [size_t getAccuracy()](https://github.com/Zightch/rational-number#size_t-getaccuracy)  
  * [size_t getIntegerSize()](https://github.com/Zightch/rational-number#size_t-getintegersize)  
  * [size_t getDecimalSize()](https://github.com/Zightch/rational-number#size_t-getdecimalsize)  
  * [RationalNumber getInteger()](https://github.com/Zightch/rational-number#rationalnumber-getinteger)  
  * [RationalNumber getDecimal()](https://github.com/Zightch/rational-number#rationalnumber-getdecimal)  
  * [RationalNumber getPureNumber()](https://github.com/Zightch/rational-number#rationalnumber-getpurenumber)  
  * [size_t getPureNumberSize()](https://github.com/Zightch/rational-number#size_t-getpurenumbersize)  
  * [bool getSymbol()](https://github.com/Zightch/rational-number#bool-getsymbol)  
  * [char getElement(size_t)](https://github.com/Zightch/rational-number#char-getelementsize_t)  
* 运算  
  * [四则运算](https://github.com/Zightch/rational-number#%E5%9B%9B%E5%88%99%E8%BF%90%E7%AE%97)  
  * [自运算](https://github.com/Zightch/rational-number#%E8%87%AA%E8%BF%90%E7%AE%97)  
  * [比较大小](https://github.com/Zightch/rational-number#%E6%AF%94%E8%BE%83%E5%A4%A7%E5%B0%8F)  

</details>  
<details>  
  <summary><a href = "https://github.com/Zightch/rational-number#%E5%AE%9A%E4%B9%89">定义</a></summary>  

* [整数部分](https://github.com/Zightch/rational-number#%E6%95%B4%E6%95%B0%E9%83%A8%E5%88%86)  
* [小数部分](https://github.com/Zightch/rational-number#%E5%B0%8F%E6%95%B0%E9%83%A8%E5%88%86)  
* [符号](https://github.com/Zightch/rational-number#%E7%AC%A6%E5%8F%B7)  
* [小数精度](https://github.com/Zightch/rational-number#%E5%B0%8F%E6%95%B0%E7%B2%BE%E5%BA%A6)  
* [0 的定义](https://github.com/Zightch/rational-number#0-%E7%9A%84%E5%AE%9A%E4%B9%89)  
* [纯数字](https://github.com/Zightch/rational-number#%E7%BA%AF%E6%95%B0%E5%AD%97)  
* [元素](https://github.com/Zightch/rational-number#%E5%85%83%E7%B4%A0)  
  * [元素位置](https://github.com/Zightch/rational-number#%E5%85%83%E7%B4%A0%E4%BD%8D%E7%BD%AE)  

</details>  
<details>  
  <summary><a href = "https://github.com/Zightch/rational-number#%E7%BB%BC%E5%90%88%E4%BD%BF%E7%94%A8%E7%A4%BA%E4%BE%8B">综合使用示例</a></summary>  

* [冒泡排序](https://github.com/Zightch/rational-number#%E5%86%92%E6%B3%A1%E6%8E%92%E5%BA%8F)  
* []()  

</details>  

* [注意事项](https://github.com/Zightch/rational-number#%E6%B3%A8%E6%84%8F%E4%BA%8B%E9%A1%B9)  
### 函数  
#### RationalNumber 构造函数  
一共 12 个重载  
满足所有的 基本数据类型 和 复合数据类型  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/RationalNumber%E6%9E%84%E9%80%A0%E5%87%BD%E6%95%B0.PNG)  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/RationalNumber%E6%9E%84%E9%80%A0%E5%87%BD%E6%95%B02.PNG)  
#### const char* c_str()  
直接输出 RationalNumber 类型的变量是不可以的  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/c_str().PNG)  
需要转换成 const char* 才能正常输出数据
用法和 std::string::c_str() 类似  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/c_str()2.PNG)  
#### void flush()  
用于刷新数字(由于开发中很少遇到这种情况,这里就不图片演示了)  
1.清除 整数 前多余的 0 和 小数 后多余的 0  
2.如果这个数字是 0 [(关于 0 的定义)](https://github.com/Zightch/rational-number#0-%E7%9A%84%E5%AE%9A%E4%B9%89),并且符号为 "-" ,将符号变为 "+"  
"-0091.3200" -> flush() -> "-91.32"  
"-0" -> flush() -> "0"  
#### void setAccuracy(unsigned long = R_AC)  
设置数字的[小数精度](https://github.com/Zightch/rational-number#%E5%B0%8F%E6%95%B0%E7%B2%BE%E5%BA%A6)  
默认为7  
可以通过更改它来实现改变输出的[小数精度](https://github.com/Zightch/rational-number#%E5%B0%8F%E6%95%B0%E7%B2%BE%E5%BA%A6)  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/setAccuracy(unsigned%20long%20%3D%20R_AC).PNG)  
#### void setSymbol(bool)  
设置数字的[符号](https://github.com/Zightch/rational-number#%E7%AC%A6%E5%8F%B7)  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/setSymbol(bool).PNG)  
#### void setElement(size_t, char)  
设置[元素](https://github.com/Zightch/rational-number#%E5%85%83%E7%B4%A0)  
第1个参数(类型size_t)是[元素位置](https://github.com/Zightch/rational-number#%E5%85%83%E7%B4%A0%E4%BD%8D%E7%BD%AE)  
如果你传入的参数大小超过最大下标,则会抛出const char* 类型的异常(数组越界)  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/setElement(size_t%2C%20char).PNG)  
第2个参数(类型char)是新的元素  
就是你要替换的后的新元素  
这个参数允许使用两种数据  
一种是 数字 0 ~ 9  
另一种是 字符 '0' ~ '9'  
只要不在这个范围内  
就会抛出const char* 类型的异常(数据不符合规范)  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/setElement(size_t%2C%20char)2.PNG)  
#### size_t getAccuracy()  
可以获取数字的[小数精度](https://github.com/Zightch/rational-number#%E5%B0%8F%E6%95%B0%E7%B2%BE%E5%BA%A6)  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/getAccuracy().PNG)  
#### RationalNumber getInteger()  
获取数字的[整数部分](https://github.com/Zightch/rational-number#%E6%95%B4%E6%95%B0%E9%83%A8%E5%88%86)  
只保留[符号](https://github.com/Zightch/rational-number#%E7%AC%A6%E5%8F%B7)和[整数部分](https://github.com/Zightch/rational-number#%E6%95%B4%E6%95%B0%E9%83%A8%E5%88%86)的数字  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/getInteger().PNG)  
#### RationalNumber getDecimal()  
获取数字的[小数部分](https://github.com/Zightch/rational-number#%E5%B0%8F%E6%95%B0%E9%83%A8%E5%88%86)  
只保留[符号](https://github.com/Zightch/rational-number#%E7%AC%A6%E5%8F%B7)和[小数部分](https://github.com/Zightch/rational-number#%E5%B0%8F%E6%95%B0%E9%83%A8%E5%88%86),[整数部分](https://github.com/Zightch/rational-number#%E6%95%B4%E6%95%B0%E9%83%A8%E5%88%86)为0  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/getDecimal().PNG)  
#### RationalNumber getPureNumber()  
获取数字的[纯数字](https://github.com/Zightch/rational-number#%E7%BA%AF%E6%95%B0%E5%AD%97)  
只保留数字,丢弃[符号](https://github.com/Zightch/rational-number#%E7%AC%A6%E5%8F%B7)和小数点  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/getPureNumber().PNG)  
#### size_t getIntegerSize()  
获取 [整数部分](https://github.com/Zightch/rational-number#%E6%95%B4%E6%95%B0%E9%83%A8%E5%88%86) 的长度  
其实就是[整数部分](https://github.com/Zightch/rational-number#%E6%95%B4%E6%95%B0%E9%83%A8%E5%88%86)有多少位数字  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/getIntegerSize().PNG)  
上图中,数字a的[整数部分](https://github.com/Zightch/rational-number#%E6%95%B4%E6%95%B0%E9%83%A8%E5%88%86)有 3 位数字  
如果[整数部分](https://github.com/Zightch/rational-number#%E6%95%B4%E6%95%B0%E9%83%A8%E5%88%86)为 0 ,则[整数部分](https://github.com/Zightch/rational-number#%E6%95%B4%E6%95%B0%E9%83%A8%E5%88%86)有 1 位数字  
#### size_t getDecimalSize()  
获取 [小数部分](https://github.com/Zightch/rational-number#%E5%B0%8F%E6%95%B0%E9%83%A8%E5%88%86) 的长度  
其实就是[小数部分](https://github.com/Zightch/rational-number#%E5%B0%8F%E6%95%B0%E9%83%A8%E5%88%86)有多少位数字  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/getDecimalSize().PNG)  
我们可以发现,当小数部分为 0 时,[小数部分](https://github.com/Zightch/rational-number#%E5%B0%8F%E6%95%B0%E9%83%A8%E5%88%86)的长度(也就是小数位数)就是 0 位数字  
#### size_t getPureNumberSize()  
获取 [纯数字](https://github.com/Zightch/rational-number#%E7%BA%AF%E6%95%B0%E5%AD%97) 的长度  
其实就是[纯数字](https://github.com/Zightch/rational-number#%E7%BA%AF%E6%95%B0%E5%AD%97)有多少位数字  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/getPureNumberSize().PNG)  
本质上来讲就是 [整数部分](https://github.com/Zightch/rational-number#%E6%95%B4%E6%95%B0%E9%83%A8%E5%88%86)的长度 + [小数部分](https://github.com/Zightch/rational-number#%E5%B0%8F%E6%95%B0%E9%83%A8%E5%88%86)的长度  
也是 [getIntegerSize()](https://github.com/Zightch/rational-number#rationalnumber-getinteger) + [getDecimalSize()](https://github.com/Zightch/rational-number#rationalnumber-getdecimal) 的结果  
#### bool getSymbol()  
获取一个数字的[符号](https://github.com/Zightch/rational-number#%E7%AC%A6%E5%8F%B7)  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/getSymbol().PNG)  
#### char getElement(size_t)  
获取[元素](https://github.com/Zightch/rational-number#%E5%85%83%E7%B4%A0)  
参数(类型size_t)是[元素位置](https://github.com/Zightch/rational-number#%E5%85%83%E7%B4%A0%E4%BD%8D%E7%BD%AE)  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/getElement(size_t).PNG)  
#### 四则运算  
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
![](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/%E5%9B%9B%E5%88%99%E8%BF%90%E7%AE%97.PNG)  
#### 自运算  
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
#### 比较大小  
情况较多,这里就不列举了  
用法同基本数据类型  
### 定义  
#### 整数部分  
一个数字的整数部分  
* 例1: -101.98  
整数部分为 -101  
* 例2: -0.333  
整数部分为 0  

可以通过 [getInteger()](https://github.com/Zightch/rational-number#rationalnumber-getinteger) 函数 获取到数字的整数部分  
#### 小数部分  
一个数字的小数部分
* 例: -3.1415926  
小数部分为 -0.1415926  

可以通过 [getDecimal()](https://github.com/Zightch/rational-number#rationalnumber-getdecimal) 函数 获取到数字的小数部分  
#### 符号  
它决定了一个数字的正负号  
为1时数字是正数  
为0时数字是负数  
可以使用 [setSymbol(bool)](https://github.com/Zightch/rational-number#void-setsymbolbool) 函数 来改变数字的符号  
可以使用 [getSymbol()](https://github.com/Zightch/rational-number#bool-getsymbol) 函数 来获取数字的符号  
#### 小数精度  
一个宏定义 #define R_AC 7  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%AE%9A%E4%B9%89/%E5%B0%8F%E6%95%B0%E7%B2%BE%E5%BA%A6.PNG)  
它决定了 c_str() 的输出小数最大位数 和 被小数赋值时的最大位数  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%AE%9A%E4%B9%89/%E5%B0%8F%E6%95%B0%E7%B2%BE%E5%BA%A62.PNG)  
我们可以发现 a 和 b 的小数位数都是 7 ,不管他们的[小数部分](https://github.com/Zightch/rational-number#%E5%B0%8F%E6%95%B0%E9%83%A8%E5%88%86)的[纯数字](https://github.com/Zightch/rational-number#%E7%BA%AF%E6%95%B0%E5%AD%97)有多少位  
如果要更改某个数字的 小数精度 可以使用 [setAccuracy(unsigned long = R_AC)](https://github.com/Zightch/rational-number#void-setaccuracyunsigned-long--r_ac) 函数  
#### 0 的定义  
当[整数部分](https://github.com/Zightch/rational-number#%E6%95%B4%E6%95%B0%E9%83%A8%E5%88%86)和[小数部分](https://github.com/Zightch/rational-number#%E5%B0%8F%E6%95%B0%E9%83%A8%E5%88%86)共同为 0 时,这个数字为 0  
#### 纯数字  
一个数字的纯数字,可以使用 [getPureNumber()](https://github.com/Zightch/rational-number#rationalnumber-getpurenumber) 函数 获取数字的纯数字  
就是一个数字,除去 符号 和 小数点 剩下的全部数字,就是纯数字  
* 例1:数字 -101.236  
它的纯数字为 101236  
* 例2:数字 -0.6667  
他的纯数字为 6667  
* 例3:数字 14.0  
他的纯数字为 14  

也就是说  
当[整数部分](https://github.com/Zightch/rational-number#%E6%95%B4%E6%95%B0%E9%83%A8%E5%88%86)为 0 时,纯数字只保留[小数部分](https://github.com/Zightch/rational-number#%E5%B0%8F%E6%95%B0%E9%83%A8%E5%88%86)  
当[小数部分](https://github.com/Zightch/rational-number#%E5%B0%8F%E6%95%B0%E9%83%A8%E5%88%86)为 0 时,纯数字只保留[整数部分](https://github.com/Zightch/rational-number#%E6%95%B4%E6%95%B0%E9%83%A8%E5%88%86)  
#### 元素  
简单来说就是每一位的数字,包括整数和小数  
例如数字 3.1415926  
3,1,4,1,5,9,2,6都是这个数字的元素  
而符号和小数点不是该数字元素  
##### 元素位置  
例如数字 -90.342  
9位于第0个元素,0位于第1个元素,3位于第2个元素......以此类推  
即  
元素 | 9 | 0 | 3 | 4 | 2
:-: | :-: | :-: | :-: | :-: | :-:
元素位置(下标) | 0 | 1 | 2 | 3 | 4  
### 综合使用示例  
#### 冒泡排序  
```C++

```  
### 注意事项  
你会发现  
在开发文档的示例中  
基本上含有小数的数字赋值都用的是字符串赋值  
当然 , 在实际开发要使用本类库  
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
