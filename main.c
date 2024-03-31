/*
* Member 1: Shem Matthew J. Salih
* Member 2: Luis Gabriel Roxas
*/

#include<stdio.h>
#include<stdlib.h>
#include <windows.h>
#include <time.h>
#include <math.h>
typedef long long int ll;
extern float dot_product_c_kernel(float A[], float B[], int size);

extern float asm_dot_product(float arr1[], float arr2[], ll nVec);


ll get_random_exp(low, high) {
	
	ll random_number = rand() % (high - low + 1) + low;

	return random_number;
}

int main() {

	srand(time(NULL));
	float asm_ans = 0.0;
	float sdot;
	sdot = 0.0;

	
	int nRuns = 30;
	
	
	printf("Test #,vecSize,c_answer,asm_answer,equality_check\n");
	for (int k = 0; k <= 30; k++)
	{
		
		int exp = k;
		ll limit = pow(2, 25);
		ll n = get_random_exp(100000, limit);
		printf("Test #%d, %lld,", k, n);

		
		/*printf("2^%d, %lld, ",k, n);*/
		float* arr1 = (float*)malloc(n * sizeof(float)); 
		float* arr2 = (float*)malloc(n * sizeof(float)); 
		for (ll i = 0; i < n; i++) {
			arr1[i] = (float)rand() / RAND_MAX; 

			arr2[i] = (float)rand() / RAND_MAX; 

		}
		clock_t begin = clock();
		for (int i = 0; i < nRuns; i++) {
			asm_ans = asm_dot_product(arr1, arr2, n);
		}
		clock_t end = clock();
		double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
		
		



		begin = clock();
		for (int i = 0; i < nRuns; i++) {
			dot_product_c_kernel(arr1, arr2, n, &sdot);
		}

		end = clock();
		time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
		


		printf("  %.2f, %.2f, %s", sdot, asm_ans,  sdot == asm_ans ? "PASS" : "FAIL");
		printf("\n");
		free(arr1);
		free(arr2);
	}
	

	

    return 0;
}