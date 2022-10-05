#include <stdio.h>

int SumOfElement(int* A, int size) // "int* A" or "int A[]" ...it's the same
{
	int i, sum = 0;

	printf("SOE - size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
	for(i = 0; i < size; i++)
	{
		sum += A[i]; // A[i] is *(A+i)  value
	}
	
	return sum;
}
int main(int argc, char** argv)
{
	int A[] = {1, 2, 3, 4, 5};
	int size = sizeof(A)/sizeof(A[0]);
	int total = SumOfElement(A, size); // A can be used for &A[0]
	printf("Sum of Elements = %d\n", total);
	printf("Main - size of A = %d, size of A[0] = %d\n", sizeof(A), sizeof(A[0]));
	return 0;
}