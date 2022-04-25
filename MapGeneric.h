#ifndef MAPGENERIC_H
#define MAPGENERIC_H

#include <iostream>
#include <vector>
#include <cmath>
using std::vector;



class MapGeneric {

    public:
        vector<int> map(vector<int> vecRec);

    private:
        virtual int f(int x) = 0;


};


#endif