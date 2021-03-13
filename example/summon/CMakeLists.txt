set(SERVER_SRCS
        server/summon_main.cpp
        server/summon_server_config.cpp
        server/phxrpc_summon_dispatcher.cpp
        server/phxrpc_summon_service.cpp
        server/summon_service_impl.cpp
        summon.pb.cc
        phxrpc.pb.cc
)

add_executable(summon_server ${SERVER_SRCS})
target_link_libraries(summon_server phxrpc)

set(CLIENT_SRCS
        client/phxrpc_summon_stub.cpp
        client/summon_client.cpp
        client/client_main.cpp
        summon.pb.cc
        phxrpc.pb.cc
)

add_executable(summon_client ${CLIENT_SRCS})
target_link_libraries(summon_client phxrpc)