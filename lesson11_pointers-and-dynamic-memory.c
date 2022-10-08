#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int a; //goes on stack memory
	
	int *p;
	p = (int*)malloc(sizeof(int)); //one block of memory of 4 bytes
	//or p = new int;
	*p = 10;
	
	free(p);
	//or delete[] p;
	p = (int*)malloc(20*sizeof(int)); //allocate array of 20 integers
	//or p = new int[20]
	*p = 20;
	
	printf("%d", *p);
	return 0;
}