#include "FilterNonPositive.h"

#include <iostream>
#include <vector>
#include <cmath>
using std::vector;


FilterNonPositive::FilterNonPositive(){


}

bool FilterNonPositive:: g(int x) {

    if (x < 0){
        return true;
    } else {
        return false;
    }

}