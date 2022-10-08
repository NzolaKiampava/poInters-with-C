#include <stdio.h>
#include <stdlib.h>

int Add(int* a, int* b) //called function
{
	//a and b are pointer to integer local to Add
	printf("Address of a in Add = %d\n", &a);
	printf("Value in a of Add (address of a of main) = %d\n", a);
	printf("Value at address stored in a of Add = %d\n", *a);
	int *c = (*a) + (*b);
	return c;
}
int main(int argc, char** argv)  //calling function
{
	int a = 2, b = 4;
	printf("Address of a in main = %d\n", &a);
	//call by value
	int c = Add(&a, &b);
	printf("Sum = %d\n", c);
	return 0;
}