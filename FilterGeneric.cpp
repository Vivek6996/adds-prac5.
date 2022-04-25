#include "FilterGeneric.h"

#include <iostream>
#include <vector>
#include <cmath>
using std::vector;

FilterGeneric::FilterGeneric(){


}

vector<int> FilterGeneric::filter(vector<int> vecRec){

    vector<int> mapVec;

    if(vecRec.size() == 0){
        return mapVec;
    
    } else {

        int x = vecRec[vecRec.size()-1];

        vecRec.pop_back();
        mapVec = filter(vecRec);
        mapVec.push_back(x);

        return mapVec;

    }


}