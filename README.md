# RationalNumber
long long数据范围不够大?  
long double精度不够高?  
RationalNumber(有理数)类库满足你的所有数据需求  
# 说明  
本类库由 **林梦-Zightch** 开发,为开源项目  
类库自带的所有运算均为 **高精度** 计算  
支持 + - * / 以及自运算  
支持 比较大小(==,>=,<=,>,<,!=)  
还有更多好用的功能(具体功能用法看 [**使用文档**](https://github.com/Zightch/rational-number#%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3) )  
有问题可以联系 **林梦-Zightch**  
### 联系方式  
QQ号:2166825850  
编程交流群:928034473  
# 使用文档  
#### 1.[配置环境](https://github.com/Zightch/rational-number#%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83)  
#### 2.[开发文档](https://github.com/Zightch/rational-number#%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3)  
## 配置环境  
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
## 开发文档  
1.[函数](https://github.com/Zightch/rational-number#%E5%87%BD%E6%95%B0)  
2.[定义](https://github.com/Zightch/rational-number#%E5%AE%9A%E4%B9%89)  
### 函数  
#### RationalNumber 构造函数  
一共 12 个重载  
满足所有的 基本数据类型 和 复合数据类型  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/RationalNumber%E6%9E%84%E9%80%A0%E5%87%BD%E6%95%B0.PNG)  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/RationalNumber%E6%9E%84%E9%80%A0%E5%87%BD%E6%95%B02.PNG)  
#### c_str()  
直接输出 RationalNumber 类型的变量是不可以的  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/c_str().PNG)  
需要转换成 const char* 才能正常输出数据
用法和 std::string::c_str() 类似  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%87%BD%E6%95%B0/c_str()2.PNG)  
#### flush()  
用于刷新数字(由于开发中很少遇到这种情况,这里就不图片演示了)  
1.清除 整数 前多余的 0 和 小数 后多余的 0  
2.如果这个数字是 0 [(关于 0 的定义)](https://github.com/Zightch/rational-number#0-%E7%9A%84%E5%AE%9A%E4%B9%89),并且符号为 "-" ,将符号变为 "+"  
"-0091.3200" -> flush() -> "-91.32"  
"-0" -> flush() -> "0"  
#### setAccuracy(unsigned long = R_AC)  
#### setSymbol(bool)  
#### setElement(size_t, char)   
#### setElement(RationalNumber, char)  
#### getAccuracy()  
#### getIntegerSize()  
#### getDecimalSize()  
#### getInteger()  
#### getDecimal()  
#### getPureNumber()  
#### getPureNumberSize()  
#### getSymbol();                      
#### getElement(size_t)  
#### getElement(RationalNumber)  
### 定义  
#### 整数部分  
#### 小数部分  
#### 符号  
#### 小数精度  
一个宏定义  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%AE%9A%E4%B9%89/%E5%B0%8F%E6%95%B0%E7%B2%BE%E5%BA%A6.PNG)  
它决定了 c_str() 的输出小数最大位数 和 被小数赋值时的最大位数  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E5%BC%80%E5%8F%91%E6%96%87%E6%A1%A3/%E5%AE%9A%E4%B9%89/%E5%B0%8F%E6%95%B0%E7%B2%BE%E5%BA%A62.PNG)  
我们可以发现 a 和 b 的小数位数都是 7 ,不管他们的小数部分的[纯数字](https://github.com/Zightch/rational-number#%E7%BA%AF%E6%95%B0%E5%AD%97)有多少位  
#### 0 的定义  
整数部分和小数部分共同为 0 时,这个数字为 0  
#### 纯数字  
