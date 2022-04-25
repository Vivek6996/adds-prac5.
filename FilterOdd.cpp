#include "FilterOdd.h"

#include <iostream>
#include <vector>
#include <cmath>
using std::vector;

FilterOdd::FilterOdd(){


}

bool FilterOdd:: g(int x){

    if(x % 2 == 1){
        return true;
    } else {
        return false;
    }


}