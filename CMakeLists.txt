cmake_minimum_required(VERSION 3.7)
project(SCNotepad)

set(CMAKE_CXX_STANDARD 11)

set(wxWidgets_ROOT_DIR </usr/local/include/wx-3.0>)
set(wxWidgets_CONFIGURATION mswu)
find_package(wxWidgets COMPONENTS core base REQUIRED)
include(${wxWidgets_USE_FILE})

set(SOURCE_FILES MainApp.cpp MainApp.h MyFrame.cpp MyFrame.h)
add_executable(SCNotepad ${SOURCE_FILES})

target_link_libraries(SCNotepad ${wxWidgets_LIBRARIES})