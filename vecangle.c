// Both vector of the same size
#include "veclib.h"

float dot_Prod(vector vec_a, vector vec_b){
	float prod=0.0;
	for(int i=0; i<DIM; i++)
	{
		prod += vec_a[i]*vec_b[i];
	}
	return prod;
}

float Magnitude(vector vec_a)
{
	float mag=0.0;
	for(int i=0; i<DIM; i++)mag+=vec_a[i]*vec_a[i];
	return sqrtf(mag);
}

float vec_angle(vector vec_a,vector vec_b)
{
	float dot,mag_a,mag_b;
	dot = dot_Prod(vec_a,vec_b);
	mag_a = Magnitude(vec_a);
	mag_b =Magnitude(vec_b);
	float temp= dot/mag_a;
	temp= temp/mag_b;
	return acosf(temp);
}
