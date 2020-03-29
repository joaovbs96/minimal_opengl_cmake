# Minimal OpenGL Example with CMake
Minimal example of an OpenGL app built with CMake. Uses GLEW and GLFW 3.

Compiling OpenGL applications with CMake should be simple enough, but I was plagged with different issues related to the GLEW and GLFW install directories on Windows. Googling for said issues, they seem to be a recurrent thing, so here's a very simple, minimal example that worked just fine for me. It just creates a window with a black background, so it can be useful to setup a new project.

Edit the CMake script according to your system, libraries, versions and needs:

```cmake
# GLFW3 directories - change according to your version and compiler
set(GLFW3_INCLUDE_DIR "[directory you unpacked GLFW3]/include")
set(GLFW3_LIBRARY "[directory you unpacked GLFW3]/[your compiler]/glfw3.lib") 

# GLEW directories - change according to your version and system
set(GLEW_INCLUDE_DIR "[directory you unpacked GLEW]/include")
set(GLEW_LIBRARY "[directory you unpacked GLEW]/lib/Release/[x64 or Win32]/glew32.lib")
```

For me, in the script contained in the '''src/''' folder, that is:

```cmake
# GLFW3 directories - change according to your version and compiler
set(GLFW3_INCLUDE_DIR "C:/GLFW3/include")
set(GLFW3_LIBRARY "C:/GLFW3/lib-vc2017/glfw3.lib") 

# GLEW directories - change according to your version and system
set(GLEW_INCLUDE_DIR "C:/glew-2.1.0/include")
set(GLEW_LIBRARY "C:/glew-2.1.0/lib/Release/x64/glew32.lib")
```

While I use GLEW and GLFW3 here, it should work similarly if you want to use, say, GLUT and other libraries. 

To configure and compile the project, from the rootfolder, use and tweak the following command to your needs:

```bash
cmake -G [Generator] -A [Target Architecture] -B bin -S src && cmake --build bin --config [Debug or Release]
```

For example, the command I use is:

```bash
cmake -G "Visual Studio 15 2017" -A x64 -B bin -S src && cmake --build bin --config Release
```

You can see the list of available generators [here](https://cmake.org/cmake/help/v3.0/manual/cmake-generators.7.html). The '''-A''' option is only available to certain generators, like most recent Visual Studio versions if you are on Windows. If it isn't available for your generator, you can ignore it.

As far as I'm aware, CMake has no '''cmake clean''' option, so if you want to do a clean build, delete the bin folder and run the command again.

Feedback and contributions are appreciated :)
