编译：
```
rm -rf build && mkdir -p build && cd build && cmake .. && make install && cd ..
```
在lib目录下生成libhello.so，在bin目录下生成test-ji-api。运行可执行文件：
```
./bin/test-ji-api
```

