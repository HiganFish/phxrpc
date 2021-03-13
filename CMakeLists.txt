project(phxrpc)

cmake_minimum_required(VERSION 3.0)

SET(SRCS
        phxrpc/comm/assert.cpp
        phxrpc/file/config.cpp
        phxrpc/file/file_utils.cpp
        phxrpc/file/log_utils.cpp
        phxrpc/file/opt_map.cpp
        phxrpc/http/http_client.cpp
        phxrpc/http/http_msg.cpp
        phxrpc/http/http_msg_handler.cpp
        phxrpc/http/http_msg_handler_factory.cpp
        phxrpc/http/http_protocol.cpp
        phxrpc/msg/base_dispatcher.h
        phxrpc/msg/base_msg.cpp
        phxrpc/msg/base_msg_handler.cpp
        phxrpc/msg/base_msg_handler_factory.cpp
        phxrpc/msg/common.h
        phxrpc/network/socket_stream_base.cpp
        phxrpc/network/socket_stream_block.cpp
        phxrpc/network/socket_stream_uthread.cpp
        phxrpc/network/timer.cpp
        phxrpc/network/uthread_context_base.cpp
        phxrpc/network/uthread_context_system.cpp
        phxrpc/network/uthread_context_util.cpp
        phxrpc/network/uthread_epoll.cpp
        phxrpc/network/uthread_runtime.cpp
        phxrpc/rpc/caller.cpp
        phxrpc/rpc/client_config.cpp
        phxrpc/rpc/client_monitor.cpp
        phxrpc/rpc/hsha_server.cpp
        phxrpc/rpc/monitor_factory.cpp
        phxrpc/rpc/server_base.cpp
        phxrpc/rpc/server_config.cpp
        phxrpc/rpc/server_monitor.cpp
        phxrpc/rpc/socket_stream_phxrpc.cpp
        phxrpc/rpc/thread_queue.h
        phxrpc/rpc/uthread_caller.cpp
        phxrpc/rpc/phxrpc.pb.cc
        phxrpc/comm.h
        phxrpc/file.h
        phxrpc/http.h
        phxrpc/msg.h
        phxrpc/network.h
        phxrpc/rpc.h
)

include_directories(.)

add_library(phxrpc ${SRCS})
target_link_libraries(phxrpc protobuf pthread)

add_subdirectory(test)