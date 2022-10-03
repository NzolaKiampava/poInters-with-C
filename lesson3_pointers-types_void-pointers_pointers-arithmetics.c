#include <stdio.h>

int main(int argc, char** argv)
{
	int a = 1025;
	int* p;
	p = &a;
	
	printf("Size of int %d\n", sizeof(int));
	printf("Address = %d, value = %d\n", p, *p);
	printf("Address = %d, value = %d\n", p+1, *(p+1)); // increase 4 bytes
	char *p0;
	p0 = (char*)p; //typecasting, assign the address of p
	printf("Size of char is %d bytes\n", sizeof(char));
	printf("Address = %d, value = %d\n", p0, *p0);
	printf("Address = %d, value = %d\n", p0+1, *(p0+1));
	printf("Address = %d, value = %d\n", p0+1, *(p0+1)); //increase 1 bytes 
	
	//1025 = 00000000 00000000 00000100 00000001
	
	//void pointers - generic pointers
	void *pp;
	pp = = p;
	printf("Address = %d\n", pp);//we can only access the address, that's 'cause is void type
	
	return 0;
}