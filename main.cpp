#include "FilterForTwoDigitPositive.h"
#include "FilterGeneric.h"
#include "FilterNonPositive.h"
#include "FilterOdd.h"
#include "MapAbsoluteValue.h"
#include "MapGeneric.h"
#include "MapSquare.h"
#include "MapTriple.h"
#include "ReduceGCD.h"
#include "ReduceGeneric.h"
#include "ReduceMinimum.h"

#include <iostream>
#include <cmath>
using std::vector;

int main(){

vector<int> vec {-1,2,3,4,-5};

MapTriple triple;
MapSquare square;
MapAbsoluteValue absV;

vector<int> tripleAns = triple.map(vec);

std::cout << "Triple " << std::endl;
    for (int x: tripleAns) {
        std::cout << x << " "; 
    }

std::cout << std::endl;

vector<int> squareAns = square.map(vec);

std::cout << "Square " << std::endl;
    for (int x: squareAns) {
        std::cout << x << " "; 
    }

std::cout << std::endl;
vector<int> absVAns = absV.map(vec);

std::cout << "Absolute Values " << std::endl;
    for (int x: absVAns){
        std::cout << x << " ";
    }


}


