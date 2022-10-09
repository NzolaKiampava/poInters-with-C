#include <stdio.h>

void PrintHello(char* name)
{
	printf("Hello %s\n", name);
}
int main(int argc, char** argv)
{
	void (*ptr)(char*);  //declarating a function pointer
	ptr = PrintHello;    //initialise a function pointer
	ptr("Kiampava");
	return 0;
}