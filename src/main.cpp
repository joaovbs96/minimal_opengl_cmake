#include <iostream>

// Minimal OpenGL example
// Creates a black window and finishes the application once its closed.

#include <GL/glew.h>     // interact with OpenGL
#include <GLFW/glfw3.h>  // create windows

int main() {
  GLFWwindow *window;  // created window

  if (glfwInit() == 0) {
    std::cerr << "GLFW failed to initiate." << std::endl;
    return -1;
  }

  window = glfwCreateWindow(600, 600, "A window", nullptr, nullptr);

  if (window == nullptr) {
    std::cerr << "GLFW failed to create window." << std::endl;
    return -1;
  }

  glfwMakeContextCurrent(window);

  while (glfwWindowShouldClose(window) == 0) {
    // clear the window
    glClear(GL_COLOR_BUFFER_BIT);

    // swap buffer
    glfwSwapBuffers(window);

    // process user events
    glfwPollEvents();
  }

  glfwTerminate();

  return 0;
}
