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

static inline void print(vector vec_a) {
	printf("[");
	for (int i=0;i<DIM;i++)
		printf("%f ",vec_a[i]);
	printf("]");
}
//////////////////////////////////////////////////////////

static inline float vecmod(vector vec_a){
	float a = 0;
	for (int i=0;i<DIM;i++)
		a += (vec_a[i]*vec_a[i]);
	return sqrt(a);
}

//////////////////////////////////////////////////////////

static inline float vec_angle(vector vec_a, vector vec_b){
	float f = float dotprod(vec_a, vec_b), f1 = vecmod(vec_a), f2 = vecmod(vec_b);
	if(f1 != 0 && f2 != 0){
		return f/(f1*f2);
	}
	else{
		printf("Error Message: zero vector does not have defined angle with any vector");
		exit(-1);
	}
}

////////////////////////////////////////////////////////////
