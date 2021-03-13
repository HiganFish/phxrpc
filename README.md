项目地址 https://github.com/Tencent/phxrpc

为了便于自己的学习将项目从Makefile改为了CMake管理

同时修复了代码中的一些错误

主要错误
- test代码中函数名错误
- test代码中部分符号错误


gcc 8.3.1 下完全编译通过 如果不想编译test 则将根目录的CMakeLists.txt的
`add_subdirectory(test)`注释
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