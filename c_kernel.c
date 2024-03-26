#include <stdio.h>

extern double dot_product_c_kernel(double A[], double B[], int size) {
    double result = 0.0;
    for (int i = 0; i < size; i++) {
        printf("A[i] = %lf B[i] = %lf\n", A[i], B[i]);
        result += A[i] * B[i];
        printf("Result: %lf\n", result);
    }
    //printf("Result before returning: %lf\n", result);
    return result;
}


