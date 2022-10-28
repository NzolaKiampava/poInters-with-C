#include <iostream>
using namespace std;

int Fib(int n)
{
	if(n <= 1)
	{
		return n;
	}
	return Fib(n-1) + Fib(n-2);   //recursive call
}
int main(int argc, char *argv[])
{
	int n;
	cout << "Give an n: ";
	cin>>n;
	int result = Fib(n);
	cout << result;
	
	return 0;
}