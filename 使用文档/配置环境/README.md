# 配置环境  

<details>  
  <summary>Visual Studio 2022</summary>  

## 第一步  
打开VS2022,并新建空项目,名为 Rational_test(名字自己写)  
## 第二步  
* 1.从 [这里](https://github.com/Zightch/rational-number/releases) 下载已经编译生成好的dll文件和用户头文件  
**(注意:找VS2022.MSVC.zip , 这样下载的才是VS2022(MSVC)的类库)**  
如果你不放心可以从 [这里](https://github.com/Zightch/rational-number/archive/refs/heads/main.zip) 下载源代码,自己编译  
* 2.打开下载好的 VS2022.MSVC.zip  
将 include文件夹 解压到 RationalNumber_test.vcxproj 所在目录下  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/Visual%20Studio%202022/%E7%AC%AC%E4%BA%8C%E6%AD%A5.PNG)  
* 3.打开你需要的架构和发行版本(这里我选择的是x64的release)  
并把 RationalNumber.lib 解压到 RationalNumber_test.vcxproj 所在目录下  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/Visual%20Studio%202022/%E7%AC%AC%E4%BA%8C%E6%AD%A52.PNG)  
## 第三步  
* 1.打开你新建好的项目  
* 2.右键头文件->添加->现有项  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/Visual%20Studio%202022/%E7%AC%AC%E4%B8%89%E6%AD%A5.PNG)  
* 3.选择 include文件夹 下的所有 .h文件 ,点击添加  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/Visual%20Studio%202022/%E7%AC%AC%E4%B8%89%E6%AD%A52.PNG)  
* 4.更改架构为对应的(你刚刚选择的架构(我选的是x64))  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/Visual%20Studio%202022/%E7%AC%AC%E4%B8%89%E6%AD%A53.PNG)  
* 5.打开项目属性,展开 链接器 ,找到 附加依赖项 ,点击右边的小箭头,点击 编辑  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/Visual%20Studio%202022/%E7%AC%AC%E4%B8%89%E6%AD%A54.PNG)  
* 6.将 RationalNumber.lib 写进第一个方框内 (注意:有时候需要写 RationalNumber.lib 的绝对路径)  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/Visual%20Studio%202022/%E7%AC%AC%E4%B8%89%E6%AD%A55.PNG)  
* 7.点击确定,点击应用  
## 第四步  
* 1.右键源文件->新建项->Cpp文件  
* 2.写入代码,如图所示  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/Visual%20Studio%202022/%E7%AC%AC%E5%9B%9B%E6%AD%A5.PNG)  
* 3.编译运行(本地 windows 调试器)  
你会发现弹出了一个提示框  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/Visual%20Studio%202022/%E7%AC%AC%E5%9B%9B%E6%AD%A52.PNG)  
* 4.将 RationalNumber.dll 复制到 RationalNumber_test.exe 所在目录下(对应的你选的架构与发行版本)  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/Visual%20Studio%202022/%E7%AC%AC%E5%9B%9B%E6%AD%A53.PNG)  
* 5.再次重新编译运行  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/Visual%20Studio%202022/%E7%AC%AC%E5%9B%9B%E6%AD%A54.PNG)  
成功!  

</details>  
<details>  
  <summary>CLion</summary>  

## 第一步  
打开CLion,并新建C++可执行文件,名为 Rational_test_CLion (名字自己写)  
## 第二步  
* 1.从 [这里](https://github.com/Zightch/rational-number/releases) 下载已经编译生成好的dll文件和用户头文件  
**(注意:找CLion-CMake.MinGW.zip , 这样下载的才是CLion-CMake(MinGW)的类库)**  
如果你不放心可以从 [这里](https://github.com/Zightch/rational-number/archive/refs/heads/main.zip) 下载源代码,自己编译  
* 2.打开下载好的 CLion-CMake.MinGW.zip  
将 include文件夹 解压到 main.cpp 所在目录下  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/CLion/%E7%AC%AC%E4%BA%8C%E6%AD%A52.PNG)  
* 3.新建文件夹,文件夹名为 **libs (最好不要用其它的名字)**  
将 cmake-build-minsizerel文件夹 下的 libRationalNumber.dll 解压进去  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/CLion/%E7%AC%AC%E4%BA%8C%E6%AD%A53.PNG)  
## 第三步  
* 1.打开你新建好的项目  
* 2.打开 CMakeLists.txt ,进行调整  
  * 在 `add_executable(RationalNumber_test_CLion main.cpp)` 上一行写 `link_directories(libs)`  
其中 lib 就是你的dll所在的文件夹  
  * 在 `add_executable(RationalNumber_test_CLion main.cpp)` 下一行写 `target_link_libraries(RationalNumber_test_CLion libRationalNumber.dll)`  
* 其中 `RationalNumber_test_CLion` 是你的项目名称  
`libRationalNumber.dll` 是dll名称  

调整完成后如图所示  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/CLion/%E7%AC%AC%E4%B8%89%E6%AD%A52.PNG)  
## 第四步  
* 1.打开 main.cpp  
修改代码,如图所示  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/CLion/%E7%AC%AC%E5%9B%9B%E6%AD%A51.PNG)  
* 2.构建,运行  
然后你会发现控制台显示进程非正常退出  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/CLion/%E7%AC%AC%E5%9B%9B%E6%AD%A52.PNG)  
原因是找不到依赖的dll  
* 3.将 libRationalNumber.dll 复制到 RationalNumber_test_CLion.exe 所在目录下(发行版本要对应)  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/CLion/%E7%AC%AC%E5%9B%9B%E6%AD%A53.PNG)  
* 4.重新运行  
![image](https://github.com/Zightch/rational-number/blob/main/%E4%BD%BF%E7%94%A8%E6%96%87%E6%A1%A3/%E9%85%8D%E7%BD%AE%E7%8E%AF%E5%A2%83/CLion/%E7%AC%AC%E5%9B%9B%E6%AD%A54.PNG)  
成功!  

</details>  
