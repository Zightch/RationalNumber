# 配置环境  

<details>  
  <summary>Visual Studio 2019</summary>  

## 第一步  
打开VS2019,并新建空项目,名为 Rational_test(名字自己写)  
## 第二步  
* 1.从 [这里](https://github.com/Zightch/rational-number/releases) 下载已经编译生成好的dll文件和用户头文件  
**(注意:找RationalNumber_VS2019.MSVC.zip , 这样下载的才是VS2019(MSVC)的类库)**  
如果你不放心可以从 [这里](https://github.com/Zightch/rational-number/archive/refs/heads/main.zip) 下载源代码,自己编译  
* 2.打开下载好的 RationalNumber_VS2019.MSVC.zip  
将 RationalNumber.h 和 RationalNumber.lib 解压到 RationalNumber_test.vcxproj 所在目录下  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/Visual%20Studio%202019/%E7%AC%AC%E4%BA%8C%E6%AD%A5.PNG)  
## 第三步  
* 1.打开你新建好的项目  
* 2.右键头文件->添加->现有项  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/Visual%20Studio%202019/%E7%AC%AC%E4%B8%89%E6%AD%A5.PNG)  
* 3.选择 RationalNumber.h ,点击添加  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/Visual%20Studio%202019/%E7%AC%AC%E4%B8%89%E6%AD%A52.PNG)  
* 4.更改架构为 x64  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/Visual%20Studio%202019/%E7%AC%AC%E4%B8%89%E6%AD%A53.PNG)  
* 5.打开项目属性,展开 链接器 ,找到 附加依赖项 ,点击右边的小箭头,点击 编辑  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/Visual%20Studio%202019/%E7%AC%AC%E4%B8%89%E6%AD%A54.PNG)  
* 6.将 RationalNumber.lib 写进第一个方框内 (注意:有时候需要写 RationalNumber.lib 的绝对路径)  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/Visual%20Studio%202019/%E7%AC%AC%E4%B8%89%E6%AD%A55.PNG)  
* 7.点击确定,点击应用  
## 第四步  
* 1.右键源文件->新建项->Cpp文件  
* 2.写入代码  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/Visual%20Studio%202019/%E7%AC%AC%E5%9B%9B%E6%AD%A5.PNG)  
* 3.编译运行(本地 windows 调试器)  
你会发现弹出了一个提示框
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/Visual%20Studio%202019/%E7%AC%AC%E5%9B%9B%E6%AD%A52.PNG)  
* 4.将 RationalNumber.dll 复制到 RationalNumber_test.exe 所在目录下  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/Visual%20Studio%202019/%E7%AC%AC%E5%9B%9B%E6%AD%A53.PNG)  
* 5.再次重新编译运行就不会有问题了  

</details>  
<details>  
  <summary>CLion</summary>  

## 第一步  
打开CLion,并新建C++可执行文件,名为 Rational_test_CLion (名字自己写)  
## 第二步  
* 1.从 [这里](https://github.com/Zightch/rational-number/releases) 下载已经编译生成好的dll文件和用户头文件  
**(注意:找libRationalNumber_CLion-CMake.MinGW.zip , 这样下载的才是CLion-CMake(MinGW)的类库)**  
如果你不放心可以从 [这里](https://github.com/Zightch/rational-number/archive/refs/heads/main.zip) 下载源代码,自己编译  
* 2.打开下载好的 libRationalNumber_CLion-CMake.MinGW.zip  
将 RationalNumber.h 解压到 main.cpp 所在目录下  
![image]()  
* 3.新建文件夹,文件夹名为 lib **(不推荐自己写)**  
将 libRationalNumber.dll 解压进去  

</details>  
