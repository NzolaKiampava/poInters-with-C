#include <stdio.h>

//call by reference
void increment(int *p)
{
	*p = (*p) + 1;
}
int main(int argc, char** argv)
{
	int a;
	a = 10;
	increment(&a);  //passing the address
	printf("a = %d\n", a);
	return 0;
}