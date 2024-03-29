#include<stdio.h>
#include<stdlib.h>
#include <windows.h>
#include <time.h>
#include <math.h>
typedef long long int ll;
extern float dot_product_c_kernel(float A[], float B[], int size);

extern float asm_dot_product(float arr1[], float arr2[], ll nVec);


int get_random_exp(low, high) {

	int random_number = rand() % (high - low + 1) + low;

	return random_number;
}

int main() {

	srand(1);
	float asm_ans = 0.0;
	float c_ans= 0.0;

	//vector and n initializations
	int exp = 24;
	printf("%d\n", exp);
	ll n = pow(2,exp);
	printf("n^%d: %lld\n",exp, n);
	float* arr1 = (float*)malloc(n * sizeof(float)); // Dynamically allocate memory for arr1
	float* arr2 = (float*)malloc(n * sizeof(float)); // Dynamically allocate memory for arr2
	for (int i = 0; i < n; i++) {
		arr1[i] = (float)rand() / RAND_MAX; // Random float between 0 and 1
		
		arr2[i] = (float)rand() / RAND_MAX; // Random float between 0 and 1
		
	}


	//for output verification
	/*printf("(");
	for (int i = 0; i < n; i++) {
		printf("%f, ", arr1[i]);
	}
	printf("0 )\n");
	printf("(");
	for (int i = 0; i < n; i++) {
		printf("%f, ", arr2[i]);
	}
	printf("0 )\n");*/




	// function calls
	clock_t begin = clock();
	asm_ans = asm_dot_product(arr1, arr2, n);
	

	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("asm return value: %.2f\n", asm_ans);
	printf("C execution time (in seconds): %lf\n", time_spent);
	printf("C execution time (in milliseconds): %lf\n\n\n\n\n", time_spent*1000);



	begin = clock();
	c_ans = dot_product_c_kernel(arr1, arr2, n);
	
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("C return value: %.2f\n", c_ans);
	printf("ASM execution time (in seconds): %lf\n", time_spent);
	printf("ASM execution time (in milliseconds): %lf\n", time_spent*1000);
	

	

    return 0;
}