#include "Reel.h"

Reel::Reel() {
    faces = {
        "LEMON       ",
        "CHERRY      ",
        "BANANA      ",
        "SEVEN       ",
        "DIAMOND     ",
        "BELL        ",
        "HEART       ",
        "STAR        ",
        "STRAWBERRY  ",
        "GRAPE       ",
        "BELL        ",
        "HORSESHOE   ",
        "HEART       ",
        "PEAR        ",
        "ORANGE      ",
        "TEN         ",
        "KING        ",
        "QUEEN       ",
        "JACK        ",
        "JOKER       "
    };
    spin();
}

void Reel::spin() {
    this->face = faces[rand() % 19];
}

string Reel::getFace() {
    return face;
}

