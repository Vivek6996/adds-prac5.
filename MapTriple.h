#ifndef MAPTRIPLE_H
#define MAPTRIPLE_H

#include "MapGeneric.h"
#include <cmath>

class MapTriple: public MapGeneric {

    public:
    MapTriple();

    private:
        int f(int x){
            return x * 3;
        }

};

#endif
