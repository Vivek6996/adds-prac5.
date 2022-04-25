#ifndef MAPSQUARE_H
#define MAPSQUARE_H


#include "MapGeneric.h"
#include <stdlib.h>
#include <cmath>


class MapSquare: public MapGeneric {

    public:
    MapSquare();

    private:
        int f(int x);

};

#endif
