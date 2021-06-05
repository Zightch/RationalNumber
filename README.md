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
## 配置环境  
### 第一步  
打开VS2019,并新建空项目,名为Rational_test(名字自己写)  
### 第二步  
1.从 [这里](https://github.com/Zightch/rational-number/releases/download/v1.0.0/RationalNumber.zip) 下载已经编译生成好的dll文件和用户头文件  
如果你不放心可以从 [这里](https://github.com/Zightch/rational-number/archive/refs/tags/v1.0.0.zip) 下载源代码,自己编译  
2.打开下载好的 RationalNumber.zip  
将 RationalNumber.h 和 RationalNumber.lib 解压到 RationalNumber_test.vcxproj 所在目录下  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E8%AF%B4%E6%98%8E/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/%E7%AC%AC%E4%BA%8C%E6%AD%A5.PNG)  
### 第三步  
1.打开你新建好的项目  
2.右键头文件->添加->现有项  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E8%AF%B4%E6%98%8E/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/%E7%AC%AC%E4%B8%89%E6%AD%A5.PNG)  
3.选择 RationalNumber.h ,点击添加  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E8%AF%B4%E6%98%8E/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/%E7%AC%AC%E4%B8%89%E6%AD%A52.PNG)  
4.更改架构为 x64  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E8%AF%B4%E6%98%8E/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/%E7%AC%AC%E4%B8%89%E6%AD%A53.PNG)  
5.打开项目属性,展开 链接器 ,找到 附加依赖项 ,点击右边的小箭头,点击 编辑  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E8%AF%B4%E6%98%8E/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/%E7%AC%AC%E4%B8%89%E6%AD%A54.PNG)  
6.将 RationalNumber.lib 写进第一个方框内  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E8%AF%B4%E6%98%8E/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/%E7%AC%AC%E4%B8%89%E6%AD%A55.PNG)  
7.点击确定,点击应用  
### 第四步  
1.右键源文件->新建项->Cpp文件  
2.写入代码  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E8%AF%B4%E6%98%8E/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/%E7%AC%AC%E5%9B%9B%E6%AD%A5.PNG)  
