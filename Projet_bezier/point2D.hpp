#ifndef POINT2D_HPP
#define POINT2D_HPP

/**
 * @class Point2D
 * @brief Represents a 2D point with x and y coordinates.
 */
class Point2D {
private:
    /**
     * x (horizontal) coordinate of the point.
     */
    int x_; 

    /**
     * y (vertical) coordinate of the point.
     */
    int y_; 

public:
    /**
     * @brief Default constructor.
     * Initializes the point to (0, 0).
     */
    Point2D();

    /**
     * @brief Parameterized constructor.
     * Initializes the point with specified x and y coordinates.
     * @param x The x-coordinate of the point.
     * @param y The y-coordinate of the point.
     */
    Point2D(int x, int y);

    /**
     * @brief Copy constructor.
     * Creates a new Point2D object by copying another Point2D.
     * @param p The Point2D object to be copied.
     */
    Point2D(const Point2D &p);

    /**
     * @brief Getter for the x-coordinate.
     * @return The x-coordinate of the point.
     */
    int get_x() const;

    /**
     * @brief Getter for the y-coordinate.
     * @return The y-coordinate of the point.
     */
    int get_y() const;

    /**
     * @brief Setter for the x-coordinate.
     * @param x The new x-coordinate to set.
     */
    void set_x(int x);

    /**
     * @brief Setter for the y-coordinate.
     * @param y The new y-coordinate to set.
     */
    void set_y(int y);
};

#endif
