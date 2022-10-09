#include <stdio.h>

void PrintHello()
{
	printf("Hello\n");
}
int main(int argc, char** argv)
{
	void (*ptr)();   // declarating a function pointer
	ptr = PrintHello; // initialise a function pointer
	ptr();
	return 0;
}