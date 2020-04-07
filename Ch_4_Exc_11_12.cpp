#include"C:\Users\PC\Documents\Visual Studio 2019\Header.h"
//Exc. 11,12 (asking a user to choose a max)
// The aim is to identify the prime numbers to a given number the user inputs
// (This does not yet use the sieve of eratosthenes approach)
//(Another approachm which I might add would be to check the square root of the input number...
// ... and check the numbers' divisibility to those prime numbers that are below it)
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
		//Check to see if a given number is divisible to our numbers in the list
		while ((prime[i] != 0) && (numbers % prime[i] != 0) && (i < prime.size()))
		{
			// If we come to the last prime number, and its still not divisible, then it must be prim
			// So add to the list
			if ((i == (prime.size() - 1)) && (prime[i] != 0) && (numbers % prime[i] != 0))
			{
				prime.push_back(numbers);
				// Print the prime number
				cout << numbers << endl;
				// prepare for the next loop, by i = 0
				i = 0;
			}
			// ++i to check the number's divisibility with all the prime numbers in the list
			else 
				++i;
		};
		
		// If our loop finds that  our number is divisible by one of the primes..
		//.. it makes the i = 0, to repeat the loop for the next number
		if ((prime[i] != 0) && (numbers % prime[i] == 0))
		{
			i = 0;
		};
		// When we reach to our input number, it prints the total number of primes
		
		if (numbers == input)
		{
			cout << "Total number of prime numbers is " << prime.size();
			return 0;
		};
	}

}
