#include <Windows.h>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm.hpp>
#include <iostream>

int main() {
    
    glfwInit(); // create window

    if (glewInit() != GLEW_OK)
    {
        glfwTerminate();
        throw "Error";
    }

    return 0;
}
