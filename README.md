## Comparison of x86 and C kernel times in Debug Mode
![image](https://github.com/odxscholars/LBYArchx86toC/assets/85560422/7f37a02e-468a-486a-9348-36c45291b9d2)

The graph shows the time comparison (in milliseconds) of the two kernels as the vector size (in billions) increases. In Debug Mode, the x86 kernel is faster compared to its C counterpart. 

## Comparison of x86 and C kernel times in Release Mode
![image](https://github.com/odxscholars/LBYArchx86toC/assets/85560422/44ba590e-62bd-4aba-bb80-3d556b8f214b)

The graph shows the time comparison (in milliseconds) of the two kernels as the vector size (in billions) increases. In Release Mode, the x86 kernel is slower compared to its C counterpart. 

## Correctness of Output
![image](https://github.com/odxscholars/LBYArchx86toC/assets/85560422/ccac2a04-3a90-488e-9d2a-85fb8110fa58)

Given a vector with random input and a fixed size, we perform tests on both the C and x86 kernels to compare their outputs. After conducting a total of 30 tests, where the equality check consistently passes, we conclude that the output from the x86 kernel is correct.
