#include <iostream>
#include <cstdlib>
#include <GLFW/glfw3.h>


int main() {
  if(!glfwInit()){
    std::cout << "Failed to initialize glfw!\n";
    return EXIT_FAILURE;
  }
  else {
    std::cout << "glfw ready" << std::endl;
    if(auto const window = glfwCreateWindow(800, 600, "Title", nullptr, nullptr); window){
      std::cout << "window ready\n";
      while(!glfwWindowShouldClose(window)){
        glfwPollEvents();
      }
      glfwDestroyWindow(window);
    }
    else{
      std::cout << "window failed to create\n";
    }
    glfwTerminate();
    return EXIT_SUCCESS;
  }
}
