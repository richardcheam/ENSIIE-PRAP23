#include "font.hpp"
#include "draw.hpp"
#include "sdl.hpp"
#include <iostream>

int main() {
    // Initialize a font
    Font font;
    
    font['A'] = Glyph(draw_A());
    font['B'] = Glyph(draw_B());
    font['C'] = Glyph(draw_C());
    font['D'] = Glyph(draw_D());
    font['E'] = Glyph(draw_E());
    font['F'] = Glyph(draw_F());
    font['G'] = Glyph(draw_G());
    font['H'] = Glyph(draw_H());
    font['I'] = Glyph(draw_I());
    font['J'] = Glyph(draw_J());
    font['K'] = Glyph(draw_K());
    font['L'] = Glyph(draw_L());
    font['M'] = Glyph(draw_M());
    font['N'] = Glyph(draw_N());
    font['O'] = Glyph(draw_O());
    font['P'] = Glyph(draw_P());
    font['Q'] = Glyph(draw_Q());
    font['R'] = Glyph(draw_R());
    font['S'] = Glyph(draw_S());    
    font['T'] = Glyph(draw_T());  
    font['U'] = Glyph(draw_U());  
    font['V'] = Glyph(draw_V());  
    font['W'] = Glyph(draw_W());
    font['X'] = Glyph(draw_X());
    font['Y'] = Glyph(draw_Y());
    font['Z'] = Glyph(draw_Z());

    // Initialize SDL
    sdl::SDL sdl;

    if (sdl.init() != 0) {
        return -1;
    }

    const int ALPHA_WIDTH = 100;    // alphabet: width = height
    const int GAP = 30;
    const int NUM_OF_ALPHA_ROW = 7;
    const int NUM_OF_ALPHA_COL = 4;

    int win_width = (ALPHA_WIDTH * NUM_OF_ALPHA_ROW) + (GAP * (NUM_OF_ALPHA_ROW + 1));
    int win_height = (ALPHA_WIDTH * NUM_OF_ALPHA_COL) + (GAP * (NUM_OF_ALPHA_COL + 1));

    // Create windows
    sdl.add_window("Glyphes du caractère en noir", Point2D(100, 100), win_width, win_height);
    sdl.add_window("Caractère en noir", Point2D(200, 200), win_width, win_height);
    sdl.add_window("Caractère du contour rouge", Point2D(300, 300), win_width, win_height);

    // Draw alphabets on the windows
    int row = 0;
    int col = 0;
    int off_x, off_y;

    for (char C='A'; C<='Z'; C++) {
        if (col == NUM_OF_ALPHA_ROW) {
            row++;
            col = 0;
        }
        off_x = (ALPHA_WIDTH + GAP) * col + GAP;
        off_y = (ALPHA_WIDTH + GAP) * row + GAP;

        std::vector<std::vector<Point2D> > outlines = font[C].get_drawing_points();

        for (unsigned int i = 0; i < outlines.size(); i++) {

            // Draw outlines for font (black)
            sdl.get_window(0).draw_lines(outlines[i], off_x, off_y, 0, 0, 0);
            sdl.get_window(1).draw_lines(outlines[i], off_x, off_y, 0, 0, 0);
            sdl.get_window(2).draw_lines(outlines[i], off_x, off_y, 0, 0, 0);

            // Draw 2px red contour around the font (last window) (r = 255)
            sdl.get_window(2).draw_lines(outlines[i], off_x - 1, off_y, 255, 0, 0);
            sdl.get_window(2).draw_lines(outlines[i], off_x + 1, off_y, 255, 0, 0);
            sdl.get_window(2).draw_lines(outlines[i], off_x, off_y - 1, 255, 0, 0);
            sdl.get_window(2).draw_lines(outlines[i], off_x, off_y + 1, 255, 0, 0);

            sdl.get_window(2).draw_lines(outlines[i], off_x - 1, off_y - 1, 255, 0, 0);
            sdl.get_window(2).draw_lines(outlines[i], off_x - 1, off_y + 1, 255, 0, 0);
            sdl.get_window(2).draw_lines(outlines[i], off_x + 1, off_y - 1, 255, 0, 0);
            sdl.get_window(2).draw_lines(outlines[i], off_x + 1, off_y+1, 255, 0, 0);

            sdl.get_window(2).draw_lines(outlines[i], off_x - 2, off_y, 255, 0, 0);
            sdl.get_window(2).draw_lines(outlines[i], off_x + 2, off_y, 255, 0, 0);
            sdl.get_window(2).draw_lines(outlines[i], off_x, off_y - 2, 255, 0, 0);
            sdl.get_window(2).draw_lines(outlines[i], off_x, off_y + 2, 255, 0, 0);

            sdl.get_window(2).draw_lines(outlines[i], off_x - 2, off_y - 2, 255, 0, 0);
            sdl.get_window(2).draw_lines(outlines[i], off_x - 2, off_y + 2, 255, 0, 0);
            sdl.get_window(2).draw_lines(outlines[i], off_x + 2, off_y - 2, 255, 0, 0);
            sdl.get_window(2).draw_lines(outlines[i], off_x + 2, off_y + 2, 255, 0, 0);
            
            // Fill alphabets
            if (i == 0) {   
                // fill each caractère with black 
                sdl.get_window(1).fill(outlines[i], off_x, off_y, 0, 0, 0);
                sdl.get_window(2).fill(outlines[i], off_x, off_y, 0, 0, 0);
            }
            else {          
                // fill with white (inner hole) for A,B,D,O,P,Q,R
                sdl.get_window(1).fill(outlines[i], off_x, off_y, 255, 255, 255);
                sdl.get_window(2).fill(outlines[i], off_x, off_y, 255, 255, 255);
            }
        }
        col++;
    }

    // Display the alphabets on 3 windows
    sdl.get_window(0).present();
    sdl.get_window(1).present();
    sdl.get_window(2).present();

    // Waiting for all windows to be closed
    sdl.waiting();

    // Close SDL
    sdl.quit();

    return 0;

}