cmake_minimum_required(VERSION 3.19)
project(learn_calculator LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets Qml)

set(CMAKE_AUTORCC ON)

qt_standard_project_setup()

qt_add_executable(learn_calculator
    WIN32 MACOSX_BUNDLE
    main.cpp
    widget.cpp
    widget.h
    widget.ui
    resources.qrc
)

target_link_libraries(learn_calculator
    PRIVATE
        Qt::Core
        Qt::Widgets
        Qt6::Qml
)

install(TARGETS learn_calculator
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET learn_calculator
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
