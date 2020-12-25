#include <iostream>
using namespace std;

int main()
{
	unsigned int sumOfSquares = 0, squareOfSum = 0, sum = 0;

	int limit = 100;

	for (int i = 1; i <= limit; i++)
	{
		sumOfSquares += i * i;
		sum += i;
	}
	squareOfSum = sum * sum;
	cout << "Sum of squares from 1 to " << limit << " is: " << sumOfSquares << endl;
	cout << "Square of sum from 1 to " << limit << " is: " << squareOfSum << endl;
	cout << "Difference between the sum of the squares of the first "<< limit << " natural numbers and the square of the sum is: " <<
		     squareOfSum - sumOfSquares;
	return 0;
}