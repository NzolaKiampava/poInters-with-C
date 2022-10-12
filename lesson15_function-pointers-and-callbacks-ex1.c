#include <stdio.h>
#include <stdlib.h>

void A()
{
	printf("Hello\n");
}
void B(void (*ptr)())  // function pointers as argument
{
	ptr();  // call-back function that "ptr" points to
}
int main(int argc, char** argv)
{
	void (*p)() = A;
	B(P);
	
	//OR DO SIMPLY 
	// B(A)   //name of function return a pointer     //A is callback function
	return 0;
}