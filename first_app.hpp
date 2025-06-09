#pragma once

#include "knogler_window.hpp"


namespace knogler {
    class FirstApp {
    public:
        static constexpr int WIDTH = 800;
        static constexpr int HEIGHT = 600;

        void run();

    private:
        KnoglerWindow knoglerWindow{
            WIDTH, HEIGHT, "Hello Vulkan!"
        };
    };
}
