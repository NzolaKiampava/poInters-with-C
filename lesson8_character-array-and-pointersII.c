#include <stdio.h>

void print(const char* C) // only read, not write
{
	// C[0] = "A";      CAN'T BE MODIFIED
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
	//char *C = "HELLO";   // STRING GET STORED IN THE SPACE FOR 
	char C[20] = "hello";  // STRING GET STORED AS COMPILE TIME CONSTANT
	print(C);
	return 0;
}