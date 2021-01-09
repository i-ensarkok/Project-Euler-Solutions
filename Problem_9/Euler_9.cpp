#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a, b, c, product;
	bool flag = true;
	int t_a, t_b, t_c;

	
	for(c = 1; c < 1000; c++)
	{		
		for (b = 1; b  < c; b++)
		{			
			for (a = 1; a < b; a++)
			{
				int c2 = c * c;
				int a2b2 = a * a + b * b;
				
				if(c2 == a2b2)
				{
					if(a + b + c == 1000)
					{
						product = a * b * c;						
						flag = false;
						t_a =a, t_b = b, t_c = c;								
					}						
				}

				if (!flag)
				break;
			}
			if (!flag)
				break;
		}
	}
	

	cout <<"a is: " << t_a << " b is: "<< t_b << " c is: "<< t_c <<". and the product is: " << product;



	return 0;
}