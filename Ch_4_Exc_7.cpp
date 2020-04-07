#include "C:\Users\PC\Documents\Visual Studio 2019\Header.h"
//Excercise 7

int main()
{
	string choice;
	double first = 0;
	double second = 0;
	char operation;
	string number;
	string number_2;
	vector <string> numbers(10);
	numbers[0] = "zero";
	numbers[1] = "one";
	numbers[2] = "two";
	numbers[3] = "three";
	numbers[4] = "four";
	numbers[5] = "five";
	numbers[6] = "six";
	numbers[7] = "seven";
	numbers[8] = "eight";
	numbers[9] = "nine";

	double i = 0;
	double j = 0;
	
	cout << "Imput two values and an operation (+, -, *, /, %) in between (to calculate):\n"
		<< "Do you want 'written' or 'integer' imputs for the numbers?\n";
	while (cin >> choice)
	{
		if (choice == "integer")
		{
			while (cin >> first >> operation >> second)
			{
				int first_1 = first;
				int second_1 = second;
				switch (operation)
				{
				case '+':
					cout << "The sum of " << first << " and " << second << " is " << first + second << endl;
					break;
				case '-':
					cout << "The difference of " << first << " and " << second << " is " << first - second << endl;
					break;
				case '*':
					cout << "The product of " << first << " and " << second << " is " << first * second << endl;
					break;
				case '/':
					if (second == 0)
						cout << "Invalid Operation: can't divide by 0\n";
					else
						cout << "The division of " << first << " and " << second << " is " << first / second << endl;
					break;
				case '%':
					if (second == 0 || second_1 == 0)
						cout << "Invalid Operation: can't divide by 0\n";
					else
						cout << "The (approximate) remainder of " << first << " and " << second << " is " << first_1 % second_1 << endl;
					break;
				default:
					cout << "ERROR, unrecognized operation\n";
					break;
				};
			};
		}
		else if (choice == "written")
		{
			cout << "Choose the numbers from 0 - 9 for the written version\n";
			while (cin >> number >> operation >> number_2)
			{
				while (i != 9 && number != numbers[i])
					++i;
				while (i != 0 && number != numbers[i])
					--i;
				while (j != 9 && number_2 != numbers[j])
					++j;
				while (j != 0 && number_2 != numbers[j])
					--j;
				if (number == numbers[i] && number_2 == numbers[j])
				{
					int i_1 = i;
					int j_1 = j;
					switch (operation)
					{
					case '+':
						cout << "The sum of " << number << " and " << number_2 << " is " << i_1 + j_1 << endl;
						break;
					case '-':
						cout << "The difference of " << number << " and " << number_2 << " is " << i_1 - j_1 << endl;
						break;
					case '*':
						cout << "The product of " << number << " and " << number_2 << " is " << i_1 * j_1 << endl;
						break;
					case '/':
						if (j == 0)
							cout << "Invalid Operation: can't divide by 0\n";
						else
							cout << "The division of " << number << " and " << number_2 << " is " << i / j << endl;
						break;
					case '%':
						if (j == 0 || j_1 == 0)
							cout << "Invalid Operation: can't divide by 0\n";
						else
							cout << "The (approximate) remainder of " << number << " and " << number_2 << " is " << i_1 % j_1 << endl;
						break;
					default:
						cout << "ERROR, unrecognized operation\n";
						break;
					};
				}
				else
					cout << "ERROR. Unrecognized number, or a number that is not from 0 - 9.\n";
			};
		}
		else
			cout << "Error, unrecognized Imput. Choose again.\n";
	};
	
}
