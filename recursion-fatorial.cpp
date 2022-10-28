#include <iostream>
using namespace std;

// Recursion

int Factorial(int n)
{
	cout << "I am calculating F("<< n <<")\n";
	if(n == 0)
	{
		return 1;
	}
	int F = n*Factorial(n-1);  //Recursion call
	cout << "Done ! F(" << n << " = "<< F <<")\n";
	return F;
}
int main(int argc, char *argv[])
{
	int n;
	cout << "Give me an n: ";
	cin>>n;
	
	int result = Factorial(n);
	cout << result;
	return 0;
}