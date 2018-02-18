#ifndef DIAMONDSQUARE_H
#define DIAMONDSQUARE_H

#include "randomizer.h"
#include <cstdlib>


class DiamondSquare
{
    private:
        std::size_t up_left_corner;
        std::size_t down_left_corner;
        std::size_t up_right_corner;
        std::size_t down_right_corner;

    public:
        DiamondSquare(Randomizer rand);
    };


#endif // DIAMONDSQUARE_H
