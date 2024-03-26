#include<stdio.h>
#include<stdlib.h>
#include <windows.h>
extern double dot_product_c_kernel(double A[], double B[], int size);

int main() {
	double A[3] = { 1.0, 2.0, 3.0 };
	double B[3] = { 4.0, 5.0, 6.0 };
    
    int size = sizeof(A) / sizeof(A[0]); // Size of the vectors

    
    double result =  dot_product_c_kernel(A, B, size);

    
    printf("Dot product of the vectors: %.lf\n", result);
}