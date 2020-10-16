/* vecmain.c*/
// main program

#include "veclib.h"

void print(vector vec_a) {
	printf("[");
	for (int i=0;i<DIM;i++)
		printf("%f ",vec_a[i]);
	printf("]\n\n");
}

int main() {
	vector vecA, vecB, vecC;
	// read vectors vecA, vecB as input

	printf("Input vector A (vecA) :\n");
	for(int j = 0 ; j < DIM ; j++){
		scanf("%f", &vecA[j]);
	}

	printf("Input vector B (vecB) :\n");
	for(int j = 0 ; j < DIM ; j++){
		scanf("%f", &vecB[j]);
	}
  
	print(vecA);
	print(vecB);
  
	printf("Printing vector sum\n");
	add(vecA,vecB,vecC);
	print(vecC);

	printf("Printing vector-element wise product, vecA*vecB\n");
	eleProd(vecA,vecB,vecC);
	print(vecC);
	
	printf("Printing vector-difference, vecA-vecB\n");
	diff(vecA, vecB, vecC);
	print(vecC);

	printf("Printing dot-product, vecA.vecB\n");
	printf("%f\n\n",dotprod(vecA, vecB));

	printf("Printing angle between vecA and vecB, vecA-vecB\n");
	printf("%f",vec_angle(vecA, vecB));

	// print and display other outputs
	// product, difference, dot product, angle

	return 0;
} // end main

//////////////////////////////////////////////////
