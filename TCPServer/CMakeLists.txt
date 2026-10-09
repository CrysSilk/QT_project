cmake_minimum_required(VERSION 3.19)
project(TCPServer LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets NetWork)

qt_standard_project_setup()

qt_add_executable(TCPServer
    WIN32 MACOSX_BUNDLE
    main.cpp
    widget.cpp
    widget.h
    widget.ui
    my_thread.h my_thread.cpp
)

target_link_libraries(TCPServer
    PRIVATE
        Qt::Core
        Qt::Widgets
        Qt::Network
)

install(TARGETS TCPServer
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET TCPServer
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
