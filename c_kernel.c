#include <stdio.h>

void dot_product_c_kernel(float A[], float B[], int size, float * sdot) {
    float result = 0.0;
    for (int i = 0; i < size; i++) {
       
        result += A[i] * B[i];
       
    }
    *sdot = result;
    
}


