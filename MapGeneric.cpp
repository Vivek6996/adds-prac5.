#include "MapGeneric.h"

vector<int> MapGeneric::map(vector<int> vecRec){

    vector<int> mapVec;

    if(vecRec.size() == 0){
        return mapVec;
    
    } else {

        int x = vecRec[vecRec.size()-1];

        vecRec.pop_back();
        mapVec = map(vecRec);
        mapVec.push_back(this->f(x));

        return mapVec;

    }

}









