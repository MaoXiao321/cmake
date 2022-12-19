3rd下存放所有依赖包，这里以hello为例。
hello中包含CMakeLists.txt，include（放头文件），src（放源文件）。
### 可以单独编译hello得到libhello.so：
新建build文件，进入build
cmake .. && make install
编译完成会出现lib文件夹，里面生成libhello.so动态库。

src中写main.cpp，调用hello.
