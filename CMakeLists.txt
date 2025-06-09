cmake_minimum_required(VERSION 3.31)
project(VulkanTutorial)

include(FetchContent)
FETCHCONTENT_DECLARE(GLFW GIT_REPOSITORY https://github.com/glfw/glfw.git GIT_TAG 3.3.8)
FETCHCONTENT_MAKEAVAILABLE(GLFW)

find_package(Vulkan REQUIRED)
if (Vulkan_FOUND)
    include_directories(${Vulkan_INCLUDE_DIRS})
    link_directories(${Vulkan_LIBRARY_DIRS})
endif ()

set(CMAKE_CXX_STANDARD 20)

file(GLOB SOURCES "*.cpp")

add_executable(VulkanTutorial ${SOURCES}
)

target_link_libraries(VulkanTutorial glfw ${Vulkan_LIBRARIES})
