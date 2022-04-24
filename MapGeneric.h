#ifndef MAPGENERIC_H
#define MAPGENERIC_H

#include <iostream>
#include <vector>
using namespace std;



class MapGeneric{

    public:
         vector<int> MapGeneric::map(vector<int> vecRec);

    private:
        virtual int f(int x) = 0;


};


#endif