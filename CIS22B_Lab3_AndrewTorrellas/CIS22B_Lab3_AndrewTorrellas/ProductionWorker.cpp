// Implementation file for ProductionWorker class
// Needed for productionWorker class
#include "ProductionWorker.h"

//**********************************************************************************
// The constructor initialized shift and hourlyRate to 0.0
//**********************************************************************************
ProductionWorker::ProductionWorker() : Employee() // Call default employee constructor
{
	shift = 0;
	hourlyRate = 0.0;
}

ProductionWorker::ProductionWorker(string n, int num, string h, int s, double r) : Employee(n, num, h)
// Overloaded ProductionWorker Constructor. Passes str1, num1, str2 to Employee's overloaded constructor
{
	shift = s;
	hourlyRate = r;
}

//***********************************************************************************
// The desctructor displays a message
//***********************************************************************************
ProductionWorker::~ProductionWorker()
{
	cout << "Destructor for ProductionWorker class." << endl;
}

//***********************************************************************************
// Function to display class attributes using dynamic binding
//***********************************************************************************
void ProductionWorker::dynamicDisplayAttributes()
{
	cout << "--------------------------------------------------------------" << endl << endl;
	cout << "The employee's name is: " << getName() << endl;
	cout << "The employee's number is: " << getNumber() << endl;
	cout << "The employee's hiring date is: " << getHireDate() << endl;
	// Set condition for accessor getShift from ProductionWork class
	if (getShift() == 1)
		cout << "This employee works day shift." << endl;
	else if (getShift() == 2)
		cout << "This employee works night shift." << endl;
	cout << "This employee's hourly pay rate is: $" << getHourlyRate() << endl << endl;
	cout << "--------------------------------------------------------------" << endl << endl;
}

//***********************************************************************************
// Function to display class attributes using static binding
//***********************************************************************************
void ProductionWorker::staticDisplayAttributes()
{
	cout << "--------------------------------------------------------------" << endl << endl;
	cout << "The employee's name is: " << getName() << endl;
	cout << "The employee's number is: " << getNumber() << endl;
	cout << "The employee's hiring date is: " << getHireDate() << endl;
	// Set condition for accessor getShift from ProductionWork class
	if (getShift() == 1)
		cout << "This employee works day shift." << endl;
	else if (getShift() == 2)
		cout << "This employee works night shift." << endl;
	cout << "This employee's hourly pay rate is: $" << getHourlyRate() << endl << endl;
	cout << "--------------------------------------------------------------" << endl << endl;
}