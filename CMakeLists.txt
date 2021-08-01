cmake_minimum_required(VERSION 3.10)
project(zer0)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_VERBOSE_MAKEFILE OFF)

include(FetchContent)
FetchContent_Declare(
      googletest
      URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

set (
    SOURCE_FILES
     "main.cpp"
     "LibDS/StaticArray.h"
     "LibDS/StaticArray.cpp"
     "LibDS/StaticArray.spec.h"
)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

target_link_libraries(
  ${PROJECT_NAME}
  gtest_main
)

include(GoogleTest)
gtest_discover_tests(zer0)
