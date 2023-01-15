cmake_minimum_required(VERSION 3.24)
project(Faster_Expendable_Chess)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOUIC ON) # if you have any .ui files
set(CMAKE_AUTORCC ON) # if you have any .qrc files
set(CMAKE_MODULE_PATH "C:/Qt/6.4.2/mingw_64/lib/cmake/Qt6Widgets" ${CMAKE_MODULE_PATH})
set(SOURCE_FILES main.cpp)
find_package(Qt6Core REQUIRED)
find_package(Qt6Widgets REQUIRED)
find_package(Qt6Quick REQUIRED)

#include_directories(${Qt6Core_INCLUDE_DIRS})

add_executable(Faster_Expendable_Chess
        main.cpp)

target_link_libraries(Faster_Expendable_Chess Qt6::Core)
target_link_libraries(Faster_Expendable_Chess Qt6::Widgets)
target_link_libraries(Faster_Expendable_Chess Qt6::Quick)


