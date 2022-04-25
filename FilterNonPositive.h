#ifndef FILTERNONPOSITIVE_H
#define FILTERNONPOSITIVE_H

#include <iostream>
#include <vector>
#include <cmath>
using std::vector;

#include "FilterGeneric.h"

class FilterNonPositive: public FilterGeneric {

    public:
        FilterNonPositive();

    private:
        bool g(int x);





};

#endif