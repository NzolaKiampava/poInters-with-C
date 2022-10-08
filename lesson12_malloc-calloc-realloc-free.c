#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int n, i;
	printf("Enter size of array\n");
	scanf("%d", &n);
	
	int *A = (int*)malloc(n*sizeof(int)); //dynamically allocated array  
	
	for(i = 0; i < n; i++)
	{
		A[i] = i + 1;
	}	
	//free(A);  //deallocated the memory
	//A = NULL; //after free, adjust pointer to NULL
	
	//using realloc
	int *B = (int*)realloc(A, 2*n*sizeof(int));
	printf("Previous block address = %d, new address = %d\n", A,B);
	for(i = 0; i < 2*n; i++)
	{
		printf("%d\n", A[i]);
	}
	return 0;
}