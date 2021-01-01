#include <iostream>
using namespace std;

int main()
{
	int needPrime = 10001;		// You can replace with what number you want to find. 	
	int order = 0;
	int control = 2;

	while (order < needPrime)	
	{
		bool isPrime = true;
 	 	for(int i = 2; i <= control / 2; i++)  
  		{  
      		if(control % i == 0)  
      		{  
          		//cout << control <<" is not prime."<<endl;		//If you want to see numbers that is not prime, activate this comment line  
          		isPrime = false; 
          		control++; 
          		break;  
      		}  
  		}  
  		if (isPrime)  
      		{
      			//cout << control <<" is prime"<<endl;	//If you want to see numbers that is prime, activate this comment line
      			control++;
      			order++;
      		}
	}
	control--;
	cout << order << ". prime is: " << control << endl; 
	return 0;
}