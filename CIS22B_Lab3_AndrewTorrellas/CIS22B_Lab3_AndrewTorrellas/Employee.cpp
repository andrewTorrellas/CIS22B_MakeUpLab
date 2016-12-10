// Implementation file for the Employee class
// Needed for the Employee class
#include "Employee.h"

//**********************************************************************************
// The constructor initialized number to 0, name and hireDate to " ".
//**********************************************************************************
Employee::Employee()
{
	name = "";
	number = 0;
	hireDate = "";
}

Employee::Employee(string n, int num, string h)
{
	name = n;
	number = num;
	hireDate = h;
}

//***********************************************************************************
// The desctructor displays a message
//***********************************************************************************
Employee::~Employee()
{
	cout << "Destructor for Employee class." << endl;
}

void Employee::dynamicDisplayAttributes()
{
	cout << "--------------------------------------------------------------" << endl << endl;
	cout << "The employee's name is: " << getName() << endl;
	cout << "The employee's number is: " << getNumber() << endl;
	cout << "The employee's hiring date is: " << getHireDate() << endl;
	cout << "--------------------------------------------------------------" << endl << endl;
}

void Employee::staticDisplayAttributes()
{
	cout << "--------------------------------------------------------------" << endl << endl;
	cout << "The employee's name is: " << getName() << endl;
	cout << "The employee's number is: " << getNumber() << endl;
	cout << "The employee's hiring date is: " << getHireDate() << endl;
	cout << "--------------------------------------------------------------" << endl << endl;
}
