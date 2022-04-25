#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H

#include <iostream>
#include <vector>
#include <cmath>
using std::vector;

class FilterGeneric {

    public:
        FilterGeneric();
        vector<int> FilterGeneric::filter(vector<int>);
    private:
       virtual bool g(int x) = 0;


};



#endif