#ifndef REDUCEGCD_H
#define REDUCEGCD_H

#include <iostream>
#include <vector>
#include <cmath>
using std::vector;

#include "ReduceGeneric.h"

class ReduceGCD: public ReduceGeneric {

    public:
        ReduceGCD();

    private:
        int binaryOperator(int x, int y);

};



#endif 