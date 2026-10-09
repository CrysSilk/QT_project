cmake_minimum_required(VERSION 3.19)
project(QTreeWidget LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

# 将 .qrc 文件编译进可执行文件；否则 :/icons/... 路径在运行时不存在。
set(CMAKE_AUTORCC ON)

qt_add_executable(QTreeWidget
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    resources.qrc
)

target_link_libraries(QTreeWidget
    PRIVATE
        Qt::Core
        Qt::Widgets
)

install(TARGETS QTreeWidget
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET QTreeWidget
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
