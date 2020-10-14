
#define DIM 4
// vector type
typedef vector float[DIM];

// functions
// print vector
void print(vector vec_a);
// vector addition
vector add(vector vec_a, vector vec_b, vector *vec_c);
// elementwise product
vector eleProd(vector vec_a, vector vec_b, vector *vec_c);
// difference of two vectors
vector diff(vector vec_a, vector vec_b, vector *vec_c);
// dot product
float dotprod(vector vec_a, vector vec_b);
// add other functions as needed
/// vector modulus.
float vecmod(vector vec_a);
/// angle between 2 vectors
float vec_angle(vector vec_a, vector vec_b);

//////////////////////////////////////////////////////////

void print(vector vec_a) {
	printf("[");
	for (i=0;i<DIM;i++)
		printf("%f ",vec_a[i]);
	printf("]");
}
//////////////////////////////////////////////////////////

float vecmod(vector vec_a){
	float a = 0;
	for (i=0;i<DIM;i++)
		a += (vec_a[i]*vec_a[i]);
	return sqrt(a);
}

//////////////////////////////////////////////////////////

float vec_angle(vector vec_a, vector vec_b){
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