# RationalNumber
long long数据范围不够大?  
long double精度不够高?  
RationalNumber(有理数)类库满足你的所有数据需求  
# 下载
https://github.com/Zightch/rational-number/releases  
# 说明  
本类库由 **林梦-Zightch** 开发,为开源项目  
类库自带的所有运算均为 **高精度** 计算  
支持 + - * / 以及自运算  
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
1.从 [这里](https://github.com/Zightch/rational-number/releases/download/v1.0.0/RationalNumber.zip) 下载已经编译生成好的dll文件和用户头文件  
如果你不放心可以从 [这里](https://github.com/Zightch/rational-number/archive/refs/tags/v1.0.0.zip) 下载源代码,自己编译  
2.打开下载好的 RationalNumber.zip  
将 RationalNumber.h 和 RationalNumber.lib 解压到 RationalNumber_test.vcxproj 所在目录下  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/%E7%AC%AC%E4%BA%8C%E6%AD%A5.PNG)  
### 第三步  
1.打开你新建好的项目  
2.右键头文件->添加->现有项  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/%E7%AC%AC%E4%B8%89%E6%AD%A5.PNG)  
3.选择 RationalNumber.h ,点击添加  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/%E7%AC%AC%E4%B8%89%E6%AD%A52.PNG)  
4.更改架构为 x64  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/%E7%AC%AC%E4%B8%89%E6%AD%A53.PNG)  
5.打开项目属性,展开 链接器 ,找到 附加依赖项 ,点击右边的小箭头,点击 编辑  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/%E7%AC%AC%E4%B8%89%E6%AD%A54.PNG)  
6.将 RationalNumber.lib 写进第一个方框内 (注意:有时候需要写 RationalNumber.lib 的绝对路径)  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/%E7%AC%AC%E4%B8%89%E6%AD%A55.PNG)  
7.点击确定,点击应用  
### 第四步  
1.右键源文件->新建项->Cpp文件  
2.写入代码  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/%E7%AC%AC%E5%9B%9B%E6%AD%A5.PNG)  
3.编译运行(本地 windows 调试器)  
你会发现弹出了一个提示框
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/%E7%AC%AC%E5%9B%9B%E6%AD%A52.PNG)  
4.将 RationalNumber.dll 复制到 RationalNumber_test.exe 所在目录下  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/%E7%AC%AC%E5%9B%9B%E6%AD%A53.PNG)  
5.再次重新编译运行就不会有问题了  

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
  * [void setElement(RationalNumber, char)](https://github.com/Zightch/rational-number#void-setelementrationalnumber-char)  
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
  * [char getElement(RationalNumber)](https://github.com/Zightch/rational-number#char-getelementrationalnumber)  

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
将 size_t 下标下的元素换成 char  
参数 size_t 是[元素位置](https://github.com/Zightch/rational-number#%E5%85%83%E7%B4%A0%E4%BD%8D%E7%BD%AE)  
如果你传入的参数大小超过最大下标,则会抛出const char* 类型的异常(数组越界)  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/setElement(size_t%2C%20char).PNG)  
参数 char 是新的元素  
就是你要替换的后的新元素  
这个参数允许使用两种数据  
一种是 数字 0 ~ 9  
另一种是 字符 '0' ~ '9'  
只要不在这个范围内  
就会抛出const char* 类型的异常(数据不符合规范)  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/setElement(size_t%2C%20char)2.PNG)  
#### void setElement(RationalNumber, char)  
这是 [setElement(size_t, char)](https://github.com/Zightch/rational-number#setelementsize_t-char) 的重载  
可以发现,size_t 被换成了 RationalNumber  
那么也就是说它可以访问到更大的下标  
但是,起作用的只有整数部分  
因为下标只能是整数  
#### size_t getAccuracy()  
可以获取数字的[小数精度](https://github.com/Zightch/rational-number#%E5%B0%8F%E6%95%B0%E7%B2%BE%E5%BA%A6)  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/getAccuracy().PNG)  
#### RationalNumber getInteger()  
获取数字的[整数部分](https://github.com/Zightch/rational-number#%E6%95%B4%E6%95%B0%E9%83%A8%E5%88%86)  
#### RationalNumber getDecimal()  
获取数字的[小数部分](https://github.com/Zightch/rational-number#%E5%B0%8F%E6%95%B0%E9%83%A8%E5%88%86)    
#### RationalNumber getPureNumber()  
获取数字的[纯数字](https://github.com/Zightch/rational-number#%E7%BA%AF%E6%95%B0%E5%AD%97)  
#### size_t getIntegerSize()  
#### size_t getDecimalSize()  
#### size_t getPureNumberSize()  
#### bool getSymbol()  
#### char getElement(size_t)  
#### char getElement(RationalNumber)  
### 定义  
#### 整数部分  
一个数字的整数部分  
* 例1:  -101.98  
整数部分为 -101  
* 例2: -0.333  
整数部分为 0  

可以通过 [getInteger()](https://github.com/Zightch/rational-number#rationalnumber-getinteger) 函数 获取到数字的整数部分  
#### 小数部分  
#### 符号  
它决定了一个数字的正负号  
为1时数字是正数  
为0时数字是负数  
关于更改符号可以使用 [setSymbol(bool)](https://github.com/Zightch/rational-number#void-setsymbolbool) 函数  
#### 小数精度  
一个宏定义 #define R_AC 7  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%AE%9A%E4%B9%89/%E5%B0%8F%E6%95%B0%E7%B2%BE%E5%BA%A6.PNG)  
它决定了 c_str() 的输出小数最大位数 和 被小数赋值时的最大位数  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%AE%9A%E4%B9%89/%E5%B0%8F%E6%95%B0%E7%B2%BE%E5%BA%A62.PNG)  
我们可以发现 a 和 b 的小数位数都是 7 ,不管他们的小数部分的[纯数字](https://github.com/Zightch/rational-number#%E7%BA%AF%E6%95%B0%E5%AD%97)有多少位  
如果要更改某个数字的 小数精度 可以使用 [setAccuracy(unsigned long = R_AC)](https://github.com/Zightch/rational-number#void-setaccuracyunsigned-long--r_ac) 函数  
#### 0 的定义  
整数部分和小数部分共同为 0 时,这个数字为 0  
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
当整数部分为 0 时,纯数字只保留小数部分  
当小数部分为 0 时,纯数字只保留整数部分  
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

