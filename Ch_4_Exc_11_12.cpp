#include"C:\Users\PC\Documents\Visual Studio 2019\Header.h"
//Exc. 11,12 (asking a user to choose a max)

int main()
{
	vector<int>prime(1);
	prime[0] = 2;
	int numbers = 2;
	int i = 0;
	// Asking a user for a max number
	int input = 0;
	cout << "Imput a number:\n";
	cin >> input;
	cout << "Let's find prime numbers from 1 to " << input << endl;
	while (++numbers)
	{
		while ((prime[i] != 0) && (numbers % prime[i] != 0) && (i < prime.size()))
		{
			
			if ((i == (prime.size() - 1)) && (prime[i] != 0) && (numbers % prime[i] != 0))
			{
				prime.push_back(numbers);
				cout << numbers << endl;
				i = 0;
			}
			else 
				++i;
		};
	
		if ((prime[i] != 0) && (numbers % prime[i] == 0))
		{
			i = 0;
		};

		if (numbers == input)
		{
			cout << "Total number of prime numbers is " << prime.size();
			return 0;
		};
	}

}
