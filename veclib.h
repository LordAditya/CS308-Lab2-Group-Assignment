#include<math.h>
#include<stdio.h>

#define DIM 4
// vector type
typedef float vector[DIM];

// functions
// print vector
static inline void print(vector vec_a);
// vector addition
void add(vector vec_a, vector vec_b, vector vec_c);
// elementwise product
void eleProd(vector vec_a, vector vec_b, vector vec_c);
// difference of two vectors
void diff(vector vec_a, vector vec_b, vector vec_c);
// dot product
float dotprod(vector vec_a, vector vec_b);
// add other functions as needed
/// vector modulus.
static inline float vecmod(vector vec_a);
/// angle between 2 vectors
static inline float vec_angle(vector vec_a, vector vec_b);

//////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////

void print(vector vec_a) {
	printf("[ ");
	for (int i=0;i<DIM;i++)
		printf("%f ",vec_a[i]);
	printf("]\n\n");
}



