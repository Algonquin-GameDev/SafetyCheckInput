#include <iostream>

using namespace std;

int GetInteger();

int main()
{
	cout << "Enter a number...\n";
	int number = GetInteger();
	cout << "The number you entered was: " << number << endl;

	system("pause");
	return 0;
}

int GetInteger()
{
	int value = 0;
	while (!(cin >> value))
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	return value;
}