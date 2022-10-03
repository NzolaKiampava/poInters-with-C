#include <stdio.h>

int main(int argc, char** argv)
{
	int a = 10;
	int* p;
	p = &a;
	
	//Pointers arithmetics
	printf("Address p is %d\n", p);
	printf("Value at address p is %d\n", *p);
	printf("Size of integer is %d bytes\n", sizeof(int));
	printf("Address p+1 is %d\n", p+1);
	printf("Value of address p+1 is %d\n", *(p+1)); //garbage value
	return 0;
}