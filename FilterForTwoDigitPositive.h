#ifndef FILTERFORTWODIGITPOSITIVE_H
#define FILTERFORTWODIGITPOSITIVE_H

#include <iostream>
#include <vector>
#include <cmath>
using std::vector;

#include "FilterGeneric.h"

class FilterForTwoDigitPositive: public FilterGeneric {

    public:
        FilterForTwoDigitPositive();

    private:
        bool g(int x);


};




#endif