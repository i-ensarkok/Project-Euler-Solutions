#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> numbers;
	int limit = 1000;
	
	for (int i=1; i < limit; i++){
		
		if(i % 3 == 0  || i % 5 ==0 )
			numbers.push_back(i);				
	}

	for(int i =0; i < numbers.size(); i++){
		cout << numbers[i] << endl;
	}
	return 0;
}