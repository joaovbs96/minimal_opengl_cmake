# Minimal OpenGL Example with CMake
Minimal example of an OpenGL app built with CMake. Uses GLEW and GLFW 3.

Compiling OpenGL applications with CMake should be simple enough, but I was plagged with different issues related to the GLEW and GLFW install directories on Windows. Googling for them, it seems it's a recurrent thing, so here's a very simple, minimal example that worked just fine for me. It just creates a window with a black background, so it can be useful to setup a new project.

Edit the CMake script according to your system, libraries, versions and needs:

```cmake
# GLFW3 directories - change according to your version and compiler
set(GLFW3_INCLUDE_DIR "[directory you unpacked GLFW3]/include")
set(GLFW3_LIBRARY "[directory you unpacked GLFW3]/[your compiler]/glfw3.lib") 

# GLEW directories - change according to your version and system
set(GLEW_INCLUDE_DIR "[directory you unpacked GLEW]/include")
set(GLEW_LIBRARY "[directory you unpacked GLEW]/lib/Release/[x64 or Win32]/glew32.lib")
```

For me, and the example contained in the CMake script, that is:

```cmake
# GLFW3 directories - change according to your version and compiler
set(GLFW3_INCLUDE_DIR "C:/GLFW3/include")
set(GLFW3_LIBRARY "C:/GLFW3/lib-vc2017/glfw3.lib") 

# GLEW directories - change according to your version and system
set(GLEW_INCLUDE_DIR "C:/glew-2.1.0/include")
set(GLEW_LIBRARY "C:/glew-2.1.0/lib/Release/x64/glew32.lib")
```

I use GLEW and GLFW3 here. It should work similarly if you want to use, say, GLUT.
