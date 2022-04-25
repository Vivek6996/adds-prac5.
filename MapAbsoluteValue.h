#ifndef MAPABSOLUTEVALUE_H
#define MAPABSOLUTEVALUE_H

#include "MapGeneric.h"
#include <stdlib.h> 
#include <cmath>


class MapAbsoluteValue: public MapGeneric {

    public:
    MapAbsoluteValue();

    private:
        int f(int x);

};

#endif
