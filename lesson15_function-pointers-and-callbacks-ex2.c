#include <stdio.h>
// callback function should compare two integers, 
// should return 1 if first element has higher rank,
// 0 if element are equal  and -1 if second element has higher rank

int compare(int a, int b) 
{
	if(a > b) return 1;
	else return -1;
}
int BubbleSort(int* A, int n, int(*compare)(int, int))
{
	int i, j, temp;
	
	for(i = 0; i < n; i++) 
	{
		for(j = 0; j < n-1; j++)
		{
			if(compare(A[j], A[j+1]) > 0)  // compare A[j] with A[j+1] and swap if need.  if change the signal the order with be in descending
			{
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
	}
}

int main(int argc, char** argv)
{
	int i, A[] = {3,2,1,5,6,4};
	BubbleSort(A,6,compare);
	
	for(i = 0; i < 6; i++) printf("%d ", A[i]);
	return 0;
}