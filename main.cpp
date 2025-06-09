#include "first_app.hpp"
#include <cstdlib>
#include <iostream>
#include <stdexcept>

int main() {
    knogler::FirstApp firstApp{};

    try {
        firstApp.run();
    } catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
