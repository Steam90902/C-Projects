cmake_minimum_required(VERSION 4.1)
project(ProjOpenGL)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)

FetchContent_Declare(
        glfw
        GIT_REPOSITORY https://github.com/glfw/glfw.git
        GIT_TAG 3.3.8
)

FetchContent_MakeAvailable(glfw)


find_package(OpenGL REQUIRED)


add_executable(ProjOpenGL main.cpp glad.c)
target_link_libraries(ProjOpenGL
        glfw
        OpenGL::GL)
