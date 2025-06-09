#pragma once

#define GLFW_INCLUDE_VULKAN
#include <string>

#include "GLFW/glfw3.h"

namespace knogler {
    class KnoglerWindow {
    public:
        KnoglerWindow(
            int w, int h, std::string name
        );

        ~KnoglerWindow();

        KnoglerWindow(const KnoglerWindow &) = delete;

        KnoglerWindow &operator=(const KnoglerWindow &) = delete;


        [[nodiscard]] bool shouldClose() const { return glfwWindowShouldClose(window); }

    private:
        void initWindow();

        const int width;
        const int height;

        std::string windowName;
        GLFWwindow *window;
    };
}
