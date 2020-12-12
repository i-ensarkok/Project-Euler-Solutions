#include <iostream>
using namespace std;

int main()
{
	int palindrome,product;
	bool isPalindrome;
	int lower_limit = 100;
	int upper_limit = 999;
	
	for(int product1 = lower_limit; product1 <= upper_limit; product1++)
	{
		for(int product2 = lower_limit; product2 <= upper_limit; product2++)
		{
			isPalindrome = true;
			product = product1 * product2;
			string str_product = to_string(product);

			for (int i = 0; i < (str_product.length() / 2); i++)
			{
				if(str_product[i] != str_product[str_product.length() - i - 1] )
				{						
					isPalindrome = false;
				}				
			}

			if(isPalindrome)
			{
				palindrome = product;
			}
		}
	}

	cout << "The largest polindrome is: " << palindrome;
	
	return 0;
}