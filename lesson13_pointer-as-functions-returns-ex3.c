#include <stdio.h>
#include <stdlib.h>

void PrintHelloWorld()
{
	printf("Hello world\n");
}
int* Add(int* a, int* b) //called function  - return pointer to type integer
{
	//a and b are pointer to integer local to Add
	int* c = (int*)malloc(sizeof(int));
	*c = (*a) + (*b);
	return c;
}
int main(int argc, char** argv)  //calling function
{
	int a = 2, b = 4;
	//call by value
	int* ptr = Add(&a, &b);
	PrintHelloWorld();
	printf("Sum = %d\n", *ptr);
	return 0;
}