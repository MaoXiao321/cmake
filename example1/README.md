### 单独生成动态库
```
cd 3rd/hello
rm -rf build && mkdir -p build && cd build && cmake .. && make install && cd ..
```
在3rd/hello/lib目录下生成libhello.so。
### 生成可执行文件
```
cd ../../
rm -rf build && mkdir -p build && cd build && cmake .. && make install && cd ..
```
将3rd/hello/lib下的libhello.so安装到lib目录下，在bin目录下生成test-ji-api。运行可执行文件：
```
./bin/test-ji-api
```