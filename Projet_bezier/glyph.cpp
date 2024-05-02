#include "glyph.hpp"

Glyph::Glyph(std::vector<std::vector<Bezier> > c){
    curves = c;
}

std::vector<std::vector<Point2D> > Glyph::get_drawing_points() const {
    std::vector<std::vector<Point2D> > res;

    for (std::size_t i = 0; i < curves.size(); i++) {
        const std::vector<Bezier> curve = curves[i];
        std::vector<Point2D> sub_res;

        for (std::size_t j = 0; j < curve.size(); ++j) {
            const Bezier& bezier = curve[j];
            const std::vector<Point2D>& current_drawing_points = bezier.get_drawing_points();

            // Prevent having duplicate ends of curves
            std::size_t k = (j != 0);
            for (; k < current_drawing_points.size(); k++) {
                sub_res.push_back(current_drawing_points[k]);
            }
        }

        res.push_back(sub_res);
    }

    return res;
}



