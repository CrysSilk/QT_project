include("D:/Code_Tool/QT_project/mysql_learn/build/Desktop_Qt_6_11_2_MinGW_64_bit_Debug/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/mysql_learn-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE "D:/Code_Tool/QT_project/mysql_learn/build/Desktop_Qt_6_11_2_MinGW_64_bit_Debug/mysql_learn.exe"
    GENERATE_QT_CONF
)
