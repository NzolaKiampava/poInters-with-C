#include <stdio.h>

void increment(int a)
{
	a = a + 1;
	printf("Address of a in increment function is = %d\n", &a);
}
int main(int argc, char** argv)
{
	int a = 10;
	increment(a);
	printf("Value of a = %d\n", a);
	printf("Address of a in main function is = %d\n", &a);
	return 0;
}