#ifndef BEZIER_HPP
#define BEZIER_HPP

#include <vector>
#include "point2D.hpp"

/**
 * @class Bezier
 * @brief Represents a Bezier curve using extremities and control points.
 */
class Bezier {
private:
    /**
     * @brief A vector of extremities and control points of the Bezier curve.
     */
    std::vector<Point2D> elements;

public:
    /**
     * @brief Constructor for a linear Bezier curve.
     * @param p1 The starting point.
     * @param p2 The ending point.
     */
    Bezier(Point2D p1, Point2D p2);

    /**
     * @brief Constructor for a quadratic Bezier curve.
     * @param p1 The starting point.
     * @param p2 The ending point.
     * @param c The control point.
     */
    Bezier(Point2D p1, Point2D p2, Point2D c);

    /**
     * @brief Constructor for a Bezier curve with custom points.
     * @param elts A vector containing extremities and control points.
     */
    Bezier(std::vector<Point2D> elts);

    /**
     * @brief Get the degree of the Bezier curve.
     * @return The degree of the Bezier curve.
     */
    int get_degree() const;

    /**
     * @brief Get the drawing points of the Bezier curve.
     * @return A vector of points representing the Bezier curve.
     */
    std::vector<Point2D> get_drawing_points() const;

    /**
     * @brief Calculate a point on the Bezier curve by applying De Casteljau's algorithm.
     * @param t The parameter value (between 0 and 1).
     * @return The calculated point on the Bezier curve.
     */
    Point2D de_casteljau(double t) const;
};

#endif
