include("D:/Code_Tool/QT_project/learn_01/build/Desktop_Qt_6_11_2_MinGW_64_bit_Release/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/learn_01-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE "D:/Code_Tool/QT_project/learn_01/build/Desktop_Qt_6_11_2_MinGW_64_bit_Release/learn_01.exe"
    GENERATE_QT_CONF
)
