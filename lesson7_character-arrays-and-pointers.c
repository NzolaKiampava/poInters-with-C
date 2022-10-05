#include <stdio.h>

void print(char* C) // "char* c" or "char c[]"
{
	int i;
	while(*C != '\0') // or *(C+i)
	{
		printf("%c", *C);
		C++;
	}
	
	/*
	or
		while(C[i] != '\0')
		{
			printf("%c", C[i]);
			i++;
		}
	*/
	printf("\n");
}
int main(int argc, char** argv)
{
	char C[20] = "hello";
	print(C);
	return 0;
}