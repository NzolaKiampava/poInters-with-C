#include <stdio.h>

void Func(int (*A)[2][2]) // Argument: 3-D array of integers
{
	
}
int main(int argc, char** argv)
{
	int C[3][2][2] = {{{2,5},{7,9}},{{3,4},{6,1}},{{0,8},{11,13}}};
	
	int A[2] = {1,2};
	printf("%d\n", C); 
	printf("%d\n", *C);              //*C or C[0] or &C[0][0]
	printf("%d\n", *(C[0][1]+1));    // or C[0][1][1]
	printf("%d\n", *(C[1]+1));       //or C[1][1] or &C[1][1][0]
	int B[2][3] = {{2,4,6},{5,7,8}}; // B returns int(*)[3]
	Func(C);
	return 0;
}