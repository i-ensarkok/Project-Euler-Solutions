#include <iostream>
using namespace std;

static bool isPrime(int n);

int main()
{
	int limit = 2000000;
	long long sum = 0;

	for(int i = 2; i < limit; i++)
	{
		if(isPrime(i))
		{
			sum += i;
			//cout << i << " ";
		}
			
	} 
	cout << endl;

	cout << "sum is: " << sum;
	return 0;
}

static bool isPrime(int n)
{
	for(int j = 2; j * j <= n; j++)
	{
		if(n % j == 0)
			return false;
	}

	return true;
}
