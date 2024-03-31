# Analysis of Results
![image](https://github.com/odxscholars/LBYArchx86toC/assets/85560422/201ad639-ee1c-4da7-9f19-3e0bcd1bb7ad)

_Table 1: Running Time and Answers of the Kernels with Increasing Vector Size_

To analyze the results of the two kernels in terms of both answer accuracy and running time, we created Table 1. It was observed that as the vector size increases, the execution time of both kernels also increases. Additionally, it is noteworthy that when the vector size reaches $2^{27}$, an overflow occurs in the result, causing the subsequent answers to be the same. Therefore, the answer becomes incorrect once the vector size reaches $2^{27}$.

## Comparison of x86 and C kernel times in Debug Mode
![image](https://github.com/odxscholars/LBYArchx86toC/assets/85560422/7f37a02e-468a-486a-9348-36c45291b9d2)

_Figure 1. Comparison of x86 and C kernel running times in Debug Mode_

The graph shows the time comparison (in milliseconds) of the two kernels as the vector size (in billions) increases. In Debug Mode, the x86 kernel is faster compared to its C counterpart. 

## Comparison of x86 and C kernel times in Release Mode
![image](https://github.com/odxscholars/LBYArchx86toC/assets/85560422/44ba590e-62bd-4aba-bb80-3d556b8f214b)

_Figure 2. Comparison of x86 and C kernel running times in Release Mode_

The graph shows the time comparison (in milliseconds) of the two kernels as the vector size (in billions) increases. In Release Mode, the x86 kernel is slower compared to its C counterpart. 

## Correctness of Output
![image](https://github.com/odxscholars/LBYArchx86toC/assets/85560422/ccac2a04-3a90-488e-9d2a-85fb8110fa58)

_Table 2. Terminal Output of the correctness of the x86 and C kernels_

Given a vector with random input and a fixed size, we perform tests on both the C and x86 kernels to compare their outputs. After conducting a total of 30 tests, where the equality check consistently passes, we conclude that the output from the x86 kernel is correct. 
