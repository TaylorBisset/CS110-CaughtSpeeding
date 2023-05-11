#include <iostream>

using namespace std;

int main()
{
	int userSpeed = 60;
	cout << "You are driving a little too fast, and a police officer stops you.\n";
	cout << "How fast were you going? \n";
	cout << "Your speed in mph: ";
	cin >> userSpeed;
	cout << endl;
	
	if (userSpeed <= 60)
	{
		cout << "You are free to go. No speeding ticket this time...";
	}

}
