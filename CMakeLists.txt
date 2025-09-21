cmake_minimum_required(VERSION 3.22)
project(cpp_sample LANGUAGES CXX VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
include(warnings)

add_library(mylib
    src/math.cpp
)
target_include_directories(mylib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
set_project_warnings(mylib)

add_executable(app src/main.cpp)
target_link_libraries(app PRIVATE mylib)
set_project_warnings(app)

option(ENABLE_TESTING "Build tests" ON)
if(ENABLE_TESTING)
  include(FetchContent)
  FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
  )
  set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
  FetchContent_MakeAvailable(googletest)

  enable_testing()
  add_subdirectory(tests)
endif()

install(TARGETS app RUNTIME DESTINATION bin)
install(TARGETS mylib ARCHIVE DESTINATION lib LIBRARY DESTINATION lib)
install(DIRECTORY include/ DESTINATION include)
