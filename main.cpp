#include<iostream>
#include<cmath>
#include"coordin.h"
///////////////////////////////////////////////////////
using std::cout;
using std::cin;
using std::endl;
///////////////////////////////////////////////////////
int main()
{
	rect rplace;
	polar pplace;

	cout << "Enter the x and y values: ";

	while (cin >> rplace.x >> rplace.y)
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Next two numbers (q to quit): ";
	}
	cout << "Done." << endl;
	system("pause");
	return 0;
}