cmake_minimum_required(VERSION 3.5)

project(OpenGLIntro LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# GLFW3 directories - change according to your version and compiler
set(GLFW3_INCLUDE_DIR "C:/GLFW3/include")
set(GLFW3_LIBRARY "C:/GLFW3/lib-vc2017/glfw3.lib") 

# GLEW directories - change according to your version and system
set(GLEW_INCLUDE_DIR "C:/glew-2.1.0/include")
set(GLEW_LIBRARY "C:/glew-2.1.0/lib/Release/x64/glew32.lib")

find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)

include_directories(${OPENGL_INCLUDE_DIR})
include_directories(${GLFW3_INCLUDE_DIR})

add_executable(OpenGLIntro main.cpp)
target_link_libraries(OpenGLIntro ${OPENGL_gl_LIBRARY} ${GLFW3_LIBRARY} GLEW::GLEW)
