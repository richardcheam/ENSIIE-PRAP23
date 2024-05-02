#ifndef FONT_HPP
#define FONT_HPP

#include "glyph.hpp"

/**
 * @class Font
 * @brief Represents a font composed of glyphs.
 */
class Font {
private:
    /**
     * @brief Vector of glyphs representing the alphabets in the font.
     */
    std::vector<Glyph> alphabets;

public:
    /**
     * @brief Default constructor for Font.
     * Initializes the font with default settings, empty font.
     */
    Font();

    /**
     * @brief Accessor for glyphs in the font.
     * @param c The character representing the desired glyph.
     * @return A reference to the glyph corresponding to the given character.
     */
    Glyph &operator[](char c);

    /**
     * @brief Accessor for glyphs in the font.
     * @param c The character representing the desired glyph.
     * @return The glyph corresponding to the given character.
     */
    const Glyph operator[](char c) const;
};

#endif
