#include "ReduceMinimum.h"

#include <iostream>
#include <vector>
#include <cmath>
using std::vector;

ReduceMinimum::ReduceMinimum(){


}


int ReduceMinimum:: binaryOperator(int x, int y){

    if (x < y){
        return x;
    } else {
        return y;
    }

}