// Author: Xiaosa Yang and Andrew Torrellas
// Date: 11/21/2016
// Program Description:
// This program uses four classes: Employee, ShiftSupervisor, ProductionWorker, and TeamLeader, each declared
// in individual specification files, along with each class's member functuons defined in their individual
// implementation filles. Member functions of each class are called from main function. This program complies
// with those files to collect and display employees's info based on their position within the company.
// Patner's Score: 3

// Preprocessor directives
#include <iostream>
#include <cstdlib>
#include <string>
#include "Employee.h"
#include "ProductionWorker.h"
#include "TeamLeader.h"
#include "ShiftSupervisor.h"

// Define global variables for menu choices
#define EMPLOYEE 1
#define WORKER 2
#define TEAM_LEADER 3
#define SUPERVISOR 4
using namespace std;

int main()
{
	// Define instance of Employee, ProductionWorker, TeamLeader and ShiftSupervisor classes
	ProductionWorker w1;
	TeamLeader t1;
	ShiftSupervisor s1;
	// Define and initialize variable loopCondition to hold user input
	string loopCondition = "";
	// Define variable intInput to hold interger input
	int intInput;
	int emplNum;
	// Define variable stringInput to hold string input
	string emplName;
	string stringInput;
	string hiringDate;
	// Define variable doubleInput to hold double type input
	double doubleInput;
	// Define variable position to hold position choice
	int position = 1;

	// Show default and overloaded constructor
	cout << "First we will demonstrate the default and overloaded constructor for the" << endl
		 << "employee class." << endl;
	cout << "Here is the display for the default constructor... " << endl << endl;
	Employee emp1;
	emp1.dynamicDisplayAttributes();
	system("pause");

	cout << endl << "Now we will create a new employee object using the overloaded constructor." << endl;
	cout << "We initialize the new employee object with the following attributes:" << endl;
	cout << "Name = Andrew, Number = 11, and HiringDate = 6/15/2015" << endl;
	Employee emp2("Andrew", 11, "6/15/2015");
	emp2.dynamicDisplayAttributes();
	system("pause");

	system("cls");
	// End example

	// Show dynamic and static binding
	cout << "Next, we will demonstrate static and dynamic binding." << endl;
	cout << "We first define a production worker object.  Then we pass the" << endl
		<< "objects address to an employee object pointer." << endl << endl;
	system("pause");
	system("cls");
	ProductionWorker Worker("Bob", 16, "5/6/2016", 1, 20.0);
	Employee* testEmployee = &Worker; 

	cout << "In the first case we use a virtual function." << endl;
	cout << "In this case the ProductionWorker class function is called." << endl;
	cout << "This is an example of dynamic binding at runtime." << endl;
	testEmployee->dynamicDisplayAttributes();

	cout << "In the second case we use a static function." << endl;
	cout << "In this case the Employee class function is called." << endl;
	cout << "This is an example of static binding at compilation." << endl;
	testEmployee->staticDisplayAttributes();
	system("pause");
	system("cls");

	// using a while loop to set exit condition for the program
	while (1)
	{
		int innerLoop = 0;
		// Prompt user to continue or exit program
		cout << "Now we will test the other classes using an Employee Management System." << endl;
		cout << "This program will collect employee information." << endl;
		cout << "To exit the program please enter [quit]." << endl;
		cout << "Otherwise enter any key to continue: ";
		// Get user input 
		getline(cin, loopCondition);

		if (loopCondition == "quit")
		{
			cout << "You have elected to exit the program." << endl;
			cout << "Please re-run the program to continue." << endl;
			system("pause");
			exit(100);
		}
		// If user choose to continue the program
		else{
			// Begin data collection

			// Using while loop to display the menu and get a choice from user 
			while (innerLoop == 0)
			{
				// Prompt user to select position option
				cout << "Please enter the employee's job title." << endl;
				cout << "Available positions are Worker, Team Lead, and Supervisor." << endl;
				cout << "Job title selection menu:" << endl;
				cout << "1. Employee" << endl;
				cout << "2. Worker" << endl;
				cout << "3. Team Lead" << endl;
				cout << "4. Supervisor" << endl; 
				cout << "Please enter your choice: ";
				cin >> position;
				cin.ignore();
				// Respond to the user's menu selection using switch statement
				switch (position)
				{
				case EMPLOYEE:
				{
					cout << "--------------------------------------------------------------" << endl << endl;
					cout << "This demonstrates the basic employee class." << endl;
					cout << "Please enter the employee's name: ";
					getline(cin, emplName);
					emp1.setName(emplName);
					cout << "Please enter the employee's number: ";
					cin >> emplNum;
					emp1.setNumber(emplNum);
					cout << "Please enter the employee's hiring date (MM/DD/YYYY): ";
					cin.ignore();
					getline(cin, hiringDate);
					emp1.setHireDate(hiringDate);
					emp1.dynamicDisplayAttributes();

					system("pause");
					system("cls");
					break;
				}

				case WORKER:
				{
					innerLoop = 1;
					cout << "This demonstrates the production worker class." << endl;
					cout << "Please enter the employee's name: ";
					getline(cin, emplName);
					w1.setName(emplName);
					cout << "Please enter the employee's number: ";
					cin >> emplNum;
					w1.setNumber(emplNum);
					cout << "Please enter the employee's hiring date (MM/DD/YYYY): ";
					cin.ignore();
					getline(cin, hiringDate);
					w1.setHireDate(hiringDate);
					// Prompt user to enter input if user selects WORKER
					cout << "Please enter the employee's shift (day = 1 and night = 2): ";
					// Get user input
					cin >> intInput;
					// call setShift member function from ProductionWorker class
					w1.setShift(intInput);
					cout << "Please enter the employee's hourly pay rate: ";
					cin >> doubleInput;
					// call setHourlyRate function from ProductionWorker class
					w1.setHourlyRate(doubleInput);
					// Display user input
					w1.dynamicDisplayAttributes();
					cin.ignore();
					system("pause");
					system("cls");
					break;
				}
				
				case TEAM_LEADER:
				{
					innerLoop = 1;
					cout << "This demonstrates the team leader class." << endl;
					cout << "Please enter the employee's name: ";
					getline(cin, emplName);
					t1.setName(emplName);
					cout << "Please enter the employee's number: ";
					cin >> emplNum;
					t1.setNumber(emplNum);
					cout << "Please enter the employee's hiring date (MM/DD/YYYY): ";
					cin.ignore();
					getline(cin, hiringDate);
					t1.setHireDate(hiringDate);
					// Prompt user to enter input if user selects WORKER
					cout << "Please enter the employee's shift (day = 1 and night = 2): ";
					// Get user input
					cin >> intInput;
					// call setShift member function from ProductionWorker class
					t1.setShift(intInput);
					cout << "Please enter the employee's hourly pay rate: ";
					cin >> doubleInput;
					// call setHourlyRate function from ProductionWorker class
					t1.setHourlyRate(doubleInput);
					// Prompt user to enter input if user selects TEAM_LEADER option
					cout << "Please enter the employee's monthly bonus: ";
					cin >> doubleInput;
					// Call function setAmount from TeamLeader class
					t1.setAmount(doubleInput);
					// Prompt user to enter required training hours
					cout << "Please enter the employee's required training hours: ";
					// Get user input
					cin >> doubleInput;
					// Call function setRequired fom TeamLeader class
					t1.setRequired(doubleInput);
					// Prompt user to enter training hours attended
					cout << "Please enter the employee's attended training hours: ";
					// Get user input 
					cin >> doubleInput;
					// Call function setAttended from TeamLeader class
					t1.setAttended(doubleInput);
					// Display the data user entered
					t1.dynamicDisplayAttributes();
					cin.ignore();
					break;
				}

				case SUPERVISOR:
				{
					innerLoop = 1;
					cout << "This demonstrates the supervisor class." << endl;
					cout << "Please enter the employee's name: ";
					getline(cin, emplName);
					s1.setName(emplName);
					cout << "Please enter the employee's number: ";
					cin >> emplNum;
					s1.setNumber(emplNum);
					cout << "Please enter the employee's hiring date (MM/DD/YYYY): ";
					cin.ignore();
					getline(cin, hiringDate);
					s1.setHireDate(hiringDate);
					// Prompt user to enter annual salary if SUPERVISOR option was choosen
					cout << "Please enter the employee's annual salary: ";
					// Get user input for salary
					cin >> doubleInput;
					// Call function setSalary from ShiftSupervisor class
					s1.setSalary(doubleInput);
					// Prompt user to enter production bonus
					cout << "Please enter the employee's production bonus: ";
					// Get user input to production bonus
					cin >> doubleInput;
					// Call function setProductionBonus from ShiftSupervisor class
					s1.setProductionBonus(doubleInput);
					// Display user full inputs 
					s1.dynamicDisplayAttributes();
					cin.ignore();
					break;
				}

				default:
					// Prompt user to enter a valid choice
					cout << "This is an invalid entry, please repeat." << endl;
					cin.ignore();
					break;
				}
			}

		}
	}
	system("pause");
	return 0;
}