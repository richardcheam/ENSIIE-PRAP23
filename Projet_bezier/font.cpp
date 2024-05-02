#include "font.hpp"

const int NUM_OF_ALPHABET = 26;

Font::Font() {
    for (int i = 0; i < NUM_OF_ALPHABET; i++) {
        alphabets.push_back(
            Glyph(std::vector<std::vector<Bezier> >(1, std::vector<Bezier>(1, Bezier(Point2D(0, 0), Point2D(0, 0)))))
        );
    }
}

Glyph & Font::operator[](char C) {
    if (C >= 65 && C <= 90) {
        return alphabets[int(C - 65)];
    }
    throw "Invalid character";
}

const Glyph Font::operator[](char C) const {
    if (C >= 65 && C <= 90) {
        return alphabets[int(C - 65)];
    }
    throw "Invalid character";
}