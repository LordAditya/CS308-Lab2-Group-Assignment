// Dot Product
// Both vector of the same size

#include "veclib.h"

float dotprod(vector vec_a, vector vec_b){
    float val = 0;
    for(int i=0;i<DIM;i++){
        val += (vec_a[i] * vec_b[i]);
    }
    return val;
};

//////////////////////////////////////////////////

