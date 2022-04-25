#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H


#include <iostream>
#include <vector>
#include <cmath>
using std::vector;


class ReduceGeneric {

    public:
        ReduceGeneric();
        int ReduceGeneric::reduce(vector<int> vecRec);

    private:
        virtual int binaryOperator(int x, int y) = 0;



};


#endif