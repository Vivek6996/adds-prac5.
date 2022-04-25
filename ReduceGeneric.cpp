#include "ReduceGeneric.h"

#include <iostream>
#include <vector>
#include <cmath>
using std::vector;

ReduceGeneric::ReduceGeneric(){


}

int ReduceGeneric::reduce(vector<int> vecRec){


    if(vecRec.size() == 1){
        return vecRec[0];
    
    } else {

        int x = vecRec[vecRec.size()-1];
        vecRec.pop_back();
        int j = reduce(vecRec);

        return binaryOperator(x, j);

    }



}