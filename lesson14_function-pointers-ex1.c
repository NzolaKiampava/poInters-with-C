#include <stdio.h>

int Add(int a, int b) 
{
	return a+b;
}
int main(int argc, char** argv)
{
	int c;
	int (*p)(int, int); //syntax of function pointer declaration
	
	// initialiaze function pointer
	p = &Add; //or p = Add // function name will return us pointer
	
	//de-referencing and executing the function
	c = (*p)(2,3);  // or c = p(2,3)
	printf("%d\n", c);
	return 0;
}