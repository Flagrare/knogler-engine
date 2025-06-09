//
// Created by Eldriss on 09/06/2025.
//

#include "knogler_window.hpp"

namespace knogler {
    KnoglerWindow::KnoglerWindow(int w, int h, std::string name) : width{w}, height{h}, windowName{name} {
        initWindow();
    }

    KnoglerWindow::~KnoglerWindow() {
        glfwDestroyWindow(window);
        glfwTerminate();
    }

    void KnoglerWindow::initWindow() {
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

        window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
    }
}
