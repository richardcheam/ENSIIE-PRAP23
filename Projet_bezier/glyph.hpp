#ifndef GLYPH_HPP
#define GLYPH_HPP

#include "bezier.hpp"

/**
 * @class Glyph
 * @brief Represents a glyph composed of Bezier curves (outlines of a character).
 */
class Glyph {
private:
    /**
     * @brief Vector of vectors containing Bezier curves that define the glyph.
     * representing a single contionuous outline of a character
     */
    std::vector<std::vector<Bezier> > curves;

public:
    /**
     * @brief Constructor for a Glyph.
     * @param c Vector of vectors containing Bezier curves defining the glyph.
     */
    Glyph(std::vector<std::vector<Bezier> > c);

    /**
     * @brief Get the drawing points of the Glyph.
     * @return A vector of vectors of points representing the Glyph.
     */
    std::vector<std::vector<Point2D> > get_drawing_points() const;
};

#endif
