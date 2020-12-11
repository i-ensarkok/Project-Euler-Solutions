#include <iostream>
using namespace std;

int main()
{
	__int64 number = 600851475143;
	__int64 cout_number = 600851475143;
	int largest = 0;
	
	for (int i = 2; i <= number; i++)
	{
		if(number % i == 0)
		{
			number /= i;
			cout << i << endl;	
			largest = i;
			i--;		
		}		
	}

	cout << "The largest factors of the " << cout_number << " is: " << largest;

	return 0;
}