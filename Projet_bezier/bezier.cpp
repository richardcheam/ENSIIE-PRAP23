#include "bezier.hpp"

Bezier::Bezier(Point2D p1, Point2D p2) {
    elements.push_back(p1);
    elements.push_back(p2);
}
Bezier::Bezier(Point2D p1, Point2D p2, Point2D c) {
    elements.push_back(p1);
    elements.push_back(c);
    elements.push_back(p2);
}

Bezier::Bezier(std::vector<Point2D> elts){
    elements = elts;
}

int Bezier::get_degree() const {
    return (elements.size() - 1);
}

std::vector<Point2D> Bezier::get_drawing_points() const {
    int degree;
    degree = get_degree();
    if (degree == 1) {
        return elements;
    }
    else if (degree == 2) {
        std::vector<Point2D> p;
        for (int i = 0; i <= 20; i++) {
            Point2D res = de_casteljau(double(i) / 20);
            p.push_back(res);
        }
        return p;
    }
    throw "An Error in Bezier";
}

Point2D Bezier::de_casteljau(double t) const {
    std::vector<Point2D> current = elements;
    int n = current.size();

    while (n > 1) {
        std::vector<Point2D> next;
        for (int i = 0; i < n - 1; i++) {
            double x = (current[i].get_x() * (1 - t)) + (current[i + 1].get_x() * t);
            double y = (current[i].get_y() * (1 - t)) + (current[i + 1].get_y() * t);
            next.emplace_back(x, y);
        }
        current = std::move(next);
        n = current.size();
    }

    return current[0];
}
