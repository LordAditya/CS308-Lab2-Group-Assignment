/* vecadd.c */
// Each function in a separate file

#include "veclib.h"

void add(vector vec_a, vector vec_b, vector *vec_c) {

	for(int j = 0 ; j < DIM ; j++){
		*vec_c[j] = vec_a[j]+vec_b[j];
	}
	
}
//////////////////////////////////////////////////////////


