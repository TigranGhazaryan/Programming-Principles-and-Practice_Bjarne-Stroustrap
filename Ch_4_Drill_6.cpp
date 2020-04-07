#include "C:\Users\PC\Documents\Visual Studio 2019\Header.h";
//Drill 6
int main()
{
	double value = 0;
	vector <double> list;
	cout << "Please imput a value and a unit\n";
	int i = 0;
	i < list.size();
	while (cin >> value) 
	{
		list.push_back(value);
		sort(list.begin(), list.end());
		
		if (i == 0)
		{
			cout << value << endl;
		}
		else if (value == list[0])
		{
			cout << value << " - the smallest so far\n";
		}
		else if (value >= list[i])
		{
			cout << value << " - the largest so far\n";
		}
		else
		{
			cout << value << endl;
		};
		++i;
	};
}