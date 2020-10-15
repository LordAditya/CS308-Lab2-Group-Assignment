
/* vecnorm.c */

// Each function in a separate file

#include "veclib.h"

void diff(vector vec_a, vector vec_b, vector vec_c) {
	int j;
	for( j = 0 ; j < DIM ; j++){
		vec_c[j] = vec_a[j] - vec_b[j];
	}
	return; 
}
/////////////////////////////////////////////////////////



//for magnitude only 

/*
#include <stdio.h>
#include <stdlib.h>

void vectorNorm( float[DIM] vec , float &norm){

	norm = sqrt( pow(vec[0],2) + pow(vec[1],2) + pow(vec[2],2) + pow(vec[3],2) );

}
*/
//////////////////////////////////////////////////////////
