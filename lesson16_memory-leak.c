// "simple Betting game"
// "jack Queen King" - computer shuffles these cards
// player has to guess the position of queen
// if he wins, he takes 3*bet
// if he looses,  he looses the bet amount
// player has $100 initially
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int cash = 100;
void Play(int bet) 
{
	//char C[3] = {'J', 'Q', 'K'};  // created as local varirable, and will go at stack memory
	char *C = (char*)malloc(3*sizeof(char));  // using dynamic memory (heap)      C++: char *c = new char[3]
	C[0] = 'J';
	C[1] = 'Q';
	C[2] = 'K';
	printf("Shuffling ...");
	srand(time(NULL)); // seeding number generator
	int i;
	for(i = 0; i < 5; i++) 
	{
		int x = rand() % 3;   // taking number randomily between 0 and 2
		int y = rand() % 3;
		int temp = C[x]; 
		C[x] = C[y]; 
		C[y] = temp;  // swaps characters at position x and y 
	}	
	int playersGuess;
	printf("What's the position of Queen - 1, 2 or 3 ? ");
	scanf("%d", &playersGuess);
	if(C[playersGuess - 1] == 'Q')
	{
		cash += 3*bet;
		printf("You have win! Result = \%c %c %c\ Total Cash= %d", C[0],C[1],C[2], cash);
	}
	else
	{
		cash -= bet;
		printf("You Loose ! Result = \%c %c %c\ Total Cash= %d", C[0],C[1],C[2], cash);
	}
	
	free(C);  // deallocating or clean C from memory heap
}
int main(int argc, char** argv)
{
	int bet;
	printf("**Welcome to the Virtual Casino\n");
	while(cash > 0)
	{
		printf("What's your bet? $");
		scanf("%d", &bet);
		if(bet == 0 || bet > cash) break;
		Play(bet);
		printf("\n*********************************************************\n\n");
	}
	return 0;
}
	