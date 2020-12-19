#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int limit =20;      // This is variable 
      
    vector <int> prime;
    vector <int> power;
    int product = 1;
    
    
   for (int i = 2; i <= limit; i++)
   {
        int number = i;
        int max = 0;

        for (int j = 2; j <= number; j++)
        {
                       
            if(i % j == 0)
            {
                bool include = false;
                
                number /= j;
                //cout << j << endl;
                for (int a = 0; a < prime.size(); a++)
                {
                    if(j == prime[a])
                    {
                        include = true;
                        max++;
                        if(power[a] < max)
                        {
                            power[a] = max;
                        }
                                                 
                    }
                }  

                if (!include)
                {
                    prime.push_back(j);
                    power.push_back(1);
                    max++;                    
                }
                                       
                j--;                    
            }       
        }
    }

    for (int i = 0; i < power.size(); i++)
    {
        cout << "Power of " <<prime[i]<<" is "<<power[i] << endl;

        for(int k = 0; k < power[i]; k++)   //  I used recursive method instead of pow() function from cmath library cause pow() 
        {                                   //  function induce deflection. I don't know why. Any explain? 
            product *= prime[i];    
        }         
    }
    cout << "The smallest number that can be divided by each of the numbers from 1 to "<< limit <<" without any remainder is: " 
         << product << endl;      
}