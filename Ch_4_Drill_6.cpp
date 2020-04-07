#include "C:\Users\PC\Documents\Visual Studio 2019\Header.h";
//Drill 6 
// Write out user's input (as a double), track to see if its the smallest or largest so far, and write it. 
int main()
{
	double value = 0;
	vector <double> list;
	cout << "Please imput a value and a unit\n";
	int i = 0;
	i < list.size();
	while (cin >> value) 
	{
		//Add the value to the vector list
		list.push_back(value);
		// Sort the list to better find the smallest and largest numbers
		sort(list.begin(), list.end());
		
		// If its the first number, it cannot be largest or smallest, so just cout
		if (i == 0)
		{
			cout << value << endl;
		}
		//Check to see if its the smallest  or largest so far, comparing it to the list
		else if (value == list[0])
		{
			cout << value << " - the smallest so far\n";
		}
		else if (value >= list[i])
		{
			cout << value << " - the largest so far\n";
		}
		//If its neither, just cout the imput (covers all other case)
		else
		{
			cout << value << endl;
		};
		++i;
	};
}
