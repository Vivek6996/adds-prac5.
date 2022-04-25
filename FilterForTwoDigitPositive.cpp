#include "FilterForTwoDigitPositive.h"

#include <iostream>
#include <vector>
#include <cmath>
using std::vector;

FilterForTwoDigitPositive::FilterForTwoDigitPositive(){


}

bool FilterForTwoDigitPositive:: g(int x){

    if (x > 0 && x/100 == 0) {
        return true;
    } else {
        return false;
    }


}