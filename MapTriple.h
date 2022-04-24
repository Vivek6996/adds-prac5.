#ifndef MAPTRIPLE_H
#define MAPTRIPLE_H

#include "MapGeneric.h"


class MapTriple: public MapGeneric {

    public:
    MapTriple();

    private:
        int f(int x){
            return x * 3;
        }

};

#endif
