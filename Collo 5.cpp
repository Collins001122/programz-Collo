// Program to calculate bonus and salary for employees...
#include <iostream>
using namespace std;
int main ()
{
	int isalary;
	int iservice;
	float fbonus;
	int counter;
	bool okcontinue = true;
	char idontchar;
while (okcontinue)
{
	cout << "You are employee #" << counter << "to use this.endl";
	cout << "enter your base salary: endl";
	cin >> isalary;
	cout << "Enter total # of years serviced: \n";
	cin >> iservice;
	
	if (iservice >= 10) fbonus = isalary * 0.1;
	if ((iservice < 10) && (iservice >=5)) fbonus = isalary * 0.05;
	if ((iservice < 5) && (iservice >= 1)) fbonus = isalary * 0.025;
	cout << "Your bonus is: " <<fbonus << ". Enter 'e' to exit or 'c' to continue.\n";
	cin >> idontchar;
if (idontchar == 'e') return 0; 
}
		
}