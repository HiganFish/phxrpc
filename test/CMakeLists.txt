SET(TESTS
        test_client
        test_echo_client
        test_echo_server
        test_epoll_client
        test_epoll_server
        test_hsha_server
        test_http_client
        test_thread_queue
        test_timer
        test_uthread
        test_uthread_context
        )

foreach (test ${TESTS})
    add_executable(${test} ${test}.cpp)
    target_link_libraries(${test} phxrpc)
endforeach ()