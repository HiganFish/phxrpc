项目地址 https://github.com/Tencent/phxrpc

为了便于自己的学习将项目从Makefile改为了CMake管理

同时修复了代码中的一些错误

主要错误

- test代码中函数名错误
- test代码中部分符号错误

gcc 8.3.1 下完全编译通过 如果不想编译test 则将根目录的CMakeLists.txt的
`add_subdirectory(test)`注释 默认注释

```
[root@fish build]# make -j4
[ 60%] Built target phxrpc
[ 64%] Built target test_epoll_client
[ 67%] Built target test_timer
[ 73%] Built target test_echo_server
[ 75%] Built target test_epoll_server
[ 78%] Built target test_echo_client
[ 82%] Built target test_client
[ 89%] Built target test_http_client
[ 89%] Built target test_uthread_context
[ 92%] Built target test_thread_queue
[ 96%] Built target test_uthread
[100%] Built target test_hsha_server
```

项目中增加了一个抽卡示例 客户端设置抽卡人id和抽卡次数 服务器返回本次抽卡结果

# io流

## 基础IO流

`BaseTcpStreamBuf`继承自`std::streambuf` 重写了内部的`underflow`和`sync`函数. 前者用于输入缓冲区不足的时候补充输入缓冲区, 后者用于输出缓冲区存在数据后调用的函数. 可以正好对应上`recv`和`send`函数

`BaseTcpStream`继承自`std::iostream`用于实现流的相关功能 可以通过`rdbuf`函数将内部的缓冲区替换为上方自定义的缓冲区.



`BlockTcpStreamBuf`继承自`BaseTcpStreamBuf`实现了收发函数`precv`和`psend`的接口

`BlockTcpStream`继承自`BaseTcpStream`实现了文件描述符的绑定功能使用`Attach`函数绑定文件描述符, 同时生成对应的`BlockTcpStreamBuf`替换掉内部的Buffer. 通过对流的 `<<`和`getline`来进行读写







