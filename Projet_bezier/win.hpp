#ifndef WIN_HPP
#define WIN_HPP

// #include </opt/homebrew/include/SDL2/SDL.h>
#include <SDL2/SDL.h>
#include <vector>
#include <string>
#include "point2D.hpp"

namespace sdl {

/**
 * @brief The Window class provides an interface for creating and managing SDL windows.
 */
class Window {
private:
    /**
     * SDL window pointer.
     */
    SDL_Window* win; 

    /**
     * SDL renderer pointer.
     */
    SDL_Renderer* ren;   

public:
    /**
     * @brief Initialize a window.
     * @param title Title of the window.
     * @param pos Position of the window.
     * @param w Width of the window.
     * @param h Height of the window.
     */
    Window(std::string title, Point2D pos, int w, int h);

    /**
     * @brief Get the ID of an SDL window.
     * @return The ID of the window.
     */
    Uint32 get_window_id() const;

    /**
     * @brief Update the window with any rendering performed from the previous call.
     */
    void present();

    /**
     * @brief Destroy SDL window and its renderer.
     */
    void destroy_window();

    /**
     * @brief Draw lines on the window with the renderer.
     * @param points A vector containing points whose connecting lines that are to be drawn.
     * @param offset_x Horizontal translation added to the drawing lines.
     * @param offset_y Vertical translation added to the drawing lines.
     * @param r Red of RGB color of the drawing lines.
     * @param g Green of RGB color of the drawing lines.
     * @param b Blue of RGB color of the drawing lines.
     */
    void draw_lines(std::vector<Point2D> points, int offset_x, int offset_y, int r, int g, int b);

    /**
     * Test whether a given point in the a polygon or not (auxiliary function for fill below)
     * @param unique_vertices   Non-duplicated vertices of the polygon
     * @param x                 A coordinate of the point to be tested
     * @param y                 A coordinate of the point to be tested
     */
    bool is_in_polygon(std::vector<Point2D> unique_vertices, int x, int y);

    /**
     * @brief Fill a polygon with a given color on the window.
     * @param vertices Vertices of a polygon to be filled (first and last vertex are the same).
     * @param offset_x Horizontal translation added to the vertices and filling.
     * @param offset_y Vertical translation added to the vertices and filling.
     * @param r Red of RGB color of the filling.
     * @param g Green of RGB color of the filling.
     * @param b Blue of RGB color of the filling.
     */
    void fill(std::vector<Point2D> vertices, int offset_x, int offset_y, int r, int g, int b);
};

}  // namespace sdl

#endif
