#include <iostream>
using namespace std;

#include "Tables.h"

int Table::checkRoll20(int& roll)
{
	//This is to check to see if the number is between 1 and 20
	//If it is not then it will request a new roll and recheck
	//It will return the role to allow the program to run the next program
	//The & sign is needed to prevent confusion for the next function
	while (roll < 1 || roll > 20)
	{
		cout << "Please enter a number from 1 to 20" << endl;
		cin >> roll;
		cout << endl;
	}
	
	cout << "Thank you. Your roll is: " << roll << endl;
	cout << endl;

	return roll;
}

int Table::checkRoll10(int& roll)
{
	//This is to check to see if the number is between 1 and 10
	//If it is not then it will request a new roll and recheck
	//It will return the role to allow the program to run the next program
	//The & sign is needed to prevent confusion for the next function
	while (roll < 1 || roll > 10)
	{
		cout << "Please enter a number from 1 to 10" << endl;
		cout << endl;
		cin >> roll;
	}

	cout << "Thank you. Your roll is: " << roll << endl;
	cout << endl;

	return roll;
}