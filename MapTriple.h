#ifndef MAPTRIPLE_H
#define MAPTRIPLE_H

#include "MapGeneric.h"

#include <cmath>
#include <iostream>
#include <vector>
using std::vector;

class MapTriple: public MapGeneric {

    public:
    MapTriple();

    private:
        int f(int x);

};

#endif
