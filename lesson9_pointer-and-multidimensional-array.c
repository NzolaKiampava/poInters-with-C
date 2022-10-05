#include <stdio.h>

int main(int argc, char** argv)
{
	int i, j;
	int B[2][3] = 
	{
		{2,3,6},
		{4,5,8}
	};
	
	int (*p)[3] = B;
	
	printf("%d\n", B);
	printf("%d\n", *B); // OR B[0] OR &B[0][0]
	printf("%d\n", B+1);
	printf("%d\n", *(B+1)); // OR &B[1][0]
	
	printf("%d\n", *(B+1)+2);
	printf("%d\n", *(*B+1));
	
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 3; j++) {
			printf("%d\n", *(B[i]+j));
		}
	}
	return 0;
}