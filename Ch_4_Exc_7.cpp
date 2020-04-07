#include "C:\Users\PC\Documents\Visual Studio 2019\Header.h"
//Excercise 7
// Makes a smiple calculator, that inputs digits or written numbers (from list of 0-9) (converts it)
// And prints out the answer in a specific form

int main()
{
	string choice;
	// First and second input of numbers as digits
	double first = 0;
	double second = 0;
	char operation;
	// First and second input of numbers in written form
	string number;
	string number_2;
	// Creates a list of numbers in written form
	// This will help us identify the specific Digit according to its position in the list
	// (e.g. "zero" is positioned at [0]
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

	//These would be our indicators for checking the above list for the two String inputs through a loop
	double i = 0;
	double j = 0;
	
	cout << "Imput two values and an operation (+, -, *, /, %) in between (to calculate):\n"
		<< "Do you want 'written' or 'integer' imputs for the numbers?\n";
	while (cin >> choice)
	{
		//Asks if the user wants an Integer version of the calculator
		if (choice == "integer")
		{
			while (cin >> first >> operation >> second)
			{
				//These assignments are done for the case of divisibility (modulo), since doubles cannot do this operation
				int first_1 = first;
				int second_1 = second;
				//Using a swtich operation instead of "If" makes it simpler in case of Char inputs
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
					// Cover cases where you might divide by 0 (so there is no error)
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
		//Asks if the user wants the Written version of the calculator
		else if (choice == "written")
		{
			//Written form comes with limitations to single-digits
			cout << "Choose the numbers from 0 - 9 for the written version\n";
			while (cin >> number >> operation >> number_2)
			{
				//The following two loops both for i and j do the following:
				//They go through the list and compare the given written input "number" to the list of the vectors
				// E.g. the user inputs "five" and we compare it to the list numbers[4] = "five"
				
				while (i != 9 && number != numbers[i])
					++i;
				while (j != 9 && number_2 != numbers[j])
					++j;
				
				// if the number is found we do the operation similar to the above one
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
					// We prepare for the next loop
					// (So that we start from 0 to ++ till 9 again)
					i = 0;
					j = 0;
				}
				// If the (written form of the) number isn't found in our list, we let the user know
				else
				{
					cout << "ERROR. Unrecognized number, or a number that is not from 0 - 9.\n";
					//Again we prepare for the next loop
					i = 0;
					j = 0;
			};
		}
		else
			cout << "Error, unrecognized Imput. Choose again.\n";
	};
	
}
