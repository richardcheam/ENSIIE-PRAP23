#ifndef SDL_HPP
#define SDL_HPP

#include "win.hpp"

namespace sdl {

/**
 * @brief The SDL class provides an interface for managing SDL elements, including windows.
 */
class SDL {
private:
    /**
     * @brief A vector of windows to be displayed.
     */
    std::vector<sdl::Window> wins;

public:
    /**
     * @brief Initialize the SDL library.
     *
     * @return 0 on success, or a negative error code if failure.
     */
    int init();

    /**
     * @brief Clean up all initialized SDL elements.
     */
    void quit();

    /**
     * @brief Handle closing events.
     */
    void waiting();

    /**
     * @brief Create a new window and add it to the vector of windows.
     *
     * @param title Title of the window.
     * @param w Width of the window.
     * @param h Height of the window.
     * @param pos Position of the window.
     */
    void add_window(std::string title, Point2D pos, int w, int h);

    /**
     * @brief Get a window from the vector of windows.
     * @param i Index of the window in the vector of windows.
     * @return Reference to the respective window in the vector.
     */
    Window& get_window(unsigned int i);
};

}  // namespace sdl

#endif
