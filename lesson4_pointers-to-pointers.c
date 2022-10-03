#include <stdio.h>

int main(int argc, char** argv)
{
	int x = 5;
	int* p = &x;
	*p = 6;
	
	int** q = &p;
	int*** r = &q;
	
	
	printf("Address p = %d Value = %d\n", p, *p);      // add****8  value = 6
	printf("Address of q = %d value = %d\n", q, *q);   // add****4  value = add****8
	printf("Value of **q = %d\n", *(*q));              //value = 6
	printf("Value of **r = %d\n", *(*r));              //value = add****8
	printf("Vlue of ***r = %d\n", *(*(*r)));           //value = 6 
	
	***r = 10;
	printf("X = d\n", x);   //12
	**q = *p + 2;           //dereferecing
	printf("X = %d\n", x);  //12
	return 0;
}