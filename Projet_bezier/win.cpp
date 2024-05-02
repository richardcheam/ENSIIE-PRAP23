#include "win.hpp"

namespace sdl {

Window::Window(std::string title, Point2D pos, int w, int h) {
    win = SDL_CreateWindow(title.c_str(), pos.get_x(), pos.get_y(),
                            w, h, SDL_WINDOW_OPENGL);
    ren = SDL_CreateRenderer(win, -1, 0);

    SDL_SetRenderDrawColor(ren, 255, 255, 255, SDL_ALPHA_OPAQUE);
    SDL_RenderClear(ren);
}

Uint32 Window::get_window_id() const {
    return SDL_GetWindowID(win);
}

void Window::present() {
    SDL_RenderPresent(ren);
}

void Window::destroy_window() {
    SDL_DestroyWindow(win);
    SDL_DestroyRenderer(ren);
}

void Window::draw_lines(const std::vector<Point2D> points, int offset_x, int offset_y, int r, int g, int b) {
    SDL_SetRenderDrawColor(ren, r, g, b, SDL_ALPHA_OPAQUE);

    if (points.size() < 2) {
        throw "not enough points to draw lines";
    }

    for (size_t i = 0; i < points.size() - 1; ++i) {
        const Point2D start = points[i];
        const Point2D end = points[i + 1];
        SDL_RenderDrawLine(ren, start.get_x() + offset_x, start.get_y() + offset_y, end.get_x() + offset_x, end.get_y() + offset_y);
    }
}

bool Window::is_in_polygon(const std::vector<Point2D> unique_vertices, int x, int y) {
    unsigned int j = unique_vertices.size() - 1;
    int num_of_intersections = 0;

    for (unsigned int i = 0; i < unique_vertices.size(); i++) {
        const Point2D vertex_i = unique_vertices[i];
        const Point2D vertex_j = unique_vertices[j];

        if ((vertex_i.get_y() < y && vertex_j.get_y() >= y) ||
            (vertex_j.get_y() < y && vertex_i.get_y() >= y)) {

            if (x < (float(y - vertex_i.get_y()) * (vertex_j.get_x() - vertex_i.get_x()) /
                     (vertex_j.get_y() - vertex_i.get_y())) + vertex_i.get_x()) {

                num_of_intersections++;
            }
        }
        j = i;
    }
    return (num_of_intersections % 2 != 0);
}

void Window::fill(const std::vector<Point2D> vertices, int offset_x, int offset_y, int r, int g, int b) {
    if (vertices.size() < 4) {
        throw ("Invalid polygon: Less than 4 vertices");
    }

    // Character is always in the range of [0, 100]
    const int minX = 0;
    const int minY = 0;
    const int maxX = 100;
    const int maxY = 100;

    // Remove last duplicate vertex of polygon
    std::vector<Point2D> unique_vertices(vertices.begin(), vertices.end() - 1);

    SDL_SetRenderDrawColor(ren, r, g, b, SDL_ALPHA_OPAQUE);

    for (int i = minX; i <= maxX; i++) {
        for (int j = minY; j <= maxY; j++) {
            if (is_in_polygon(unique_vertices, i, j)) {
                SDL_RenderDrawPoint(ren, i + offset_x, j + offset_y);
            }
        }
    }
}


} // namespace sdl