#include "first_app.hpp"

namespace knogler {
    void FirstApp::run() {
        while (!knoglerWindow.shouldClose()) {
            glfwPollEvents();
        }
    }
}
