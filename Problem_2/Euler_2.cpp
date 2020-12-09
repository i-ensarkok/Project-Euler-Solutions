#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int prevTwo, prevOne, nextTerm, sum = 0;
	vector <int> Fibonacci;

	prevTwo = 1;
	prevOne = 2;
	nextTerm = 0;

	Fibonacci.push_back(1);
	Fibonacci.push_back(2);

	while(nextTerm < 4000000){
		nextTerm = prevOne + prevTwo;
		Fibonacci.push_back(nextTerm);
		prevTwo = prevOne;
		prevOne = nextTerm;
	}

	for (int i = 0; i < Fibonacci.size(); i++){
		cout << Fibonacci[i] << endl;
		if(Fibonacci[i] % 2 ==0)
			sum += Fibonacci[i];
	}

	cout <<"Sum of even values: " << sum;

	return 0;
}