#include <stdio.h>

extern float dot_product_c_kernel(float A[], float B[], int size) {
    float result = 0.0;
    for (int i = 0; i < size; i++) {
       
        result += A[i] * B[i];
       
    }
    
    return result;
}


