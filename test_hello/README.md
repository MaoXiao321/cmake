test_hello/3rd下存放所有依赖包，这里以hello为例。
hello中包含CMakeLists.txt，include（放头文件），src（放源文件）。
### 可以单独编译hello得到libhello.so：
hello文件夹下新建build目录，进入build
`cmake .. && make install`
编译完成会出现lib文件夹，里面生成libhello.so动态库。

### 编译得到可执行文件
test_hello/src中写main.cpp，调用hello。在test_hello下新建build目录，进入build
`cmake .. && make install`
编译完成会出现bin文件夹，里面生成test_hello可执行文件。

### 修改环境变量
将工程依赖的动态库全部放到一个文件夹中，例如test_hello/lib下，将其配置到环境变量中
```
/etc/ld.so.conf
加入test_hello/lib的完整路径
ldconfig  # 更新文件
bin/test_hello  # 运行
```
