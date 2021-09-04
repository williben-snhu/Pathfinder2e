#include <iostream>
#include <algorithm>
using namespace std;

#include "Tables.h"

void Encounter::randomEncounterChance()
{
	string answerString; //This is a placement variable to hold the information from the question

	//This is the question with the list for all of the different regions as well as the input from the user
	cout << "What region would you like to see the DC for?" << endl;
	cout << "Aquatic?" << endl;
	cout << "Arctic?" << endl;
	cout << "Desert?" << endl;
	cout << "Forest?" << endl;
	cout << "Mountain?" << endl;
	cout << "Plains?" << endl;
	cout << "Swamp?" << endl;
	cout << "All?" << endl;
	cout << endl;

	cin >> answerString;

	std::for_each(answerString.begin(), answerString.end(), [](char& c)
		{
			c = ::tolower(c);
		});

	cout << endl;

	//This is an if else if code to go through the different options from the question
	if (answerString == "aquatic")
	{
		cout << "Aquatic: " << endl;
		cout << "DC: 17" << endl;
		cout << endl;
	}
	else if (answerString == "arctic")
	{
		cout << "Arctic: " << endl;
		cout << "DC: 17" << endl;
		cout << endl;
	}
	else if (answerString == "desert")
	{
		cout << "Desert: " << endl;
		cout << "DC: 17" << endl;
		cout << endl;
	}
	else if (answerString == "forest")
	{
		cout << "Forest: " << endl;
		cout << "DC: 14" << endl;
		cout << endl;
	}
	else if (answerString == "mountain")
	{
		cout << "Mountain: " << endl;
		cout << "DC: 16" << endl;
		cout << endl;
	}
	else if (answerString == "plains")
	{
		cout << "Plains: " << endl;
		cout << "DC: 12" << endl;
		cout << endl;
	}
	else if (answerString == "swamp")
	{
		cout << "Swamp: " << endl;
		cout << "DC: 14" << endl;
		cout << endl;
	}
	else if (answerString == "all")
	{
		cout << "Aquatic: " << endl;
		cout << "DC: 17" << endl;
		cout << "Arctic: " << endl;
		cout << "DC: 17" << endl;
		cout << "Desert: " << endl;
		cout << "DC: 17" << endl;
		cout << "Forest: " << endl;
		cout << "DC: 14" << endl;
		cout << "Mountain: " << endl;
		cout << "DC: 16" << endl;
		cout << "Plains: " << endl;
		cout << "DC: 12" << endl;
		cout << "Swamp: " << endl;
		cout << "DC: 14" << endl;
		cout << endl;
	}

	//This gives the user the chance to go through the function again
	cout << "Would you like to do another Random Enounter Chance?" << endl;

	cin >> answerString;

	//This is to do some input verification and to change the answerString to all lowercase to make the if else if statement work out
	std::for_each(answerString.begin(), answerString.end(), [](char& c)
		{
			c = ::tolower(c);
		});

	cout << endl;

	if (answerString == "yes")
	{
		randomEncounterChance();
	}
	else
	{
		cout << "Goodbye" << endl;
		cout << endl;
	}
}

void Encounter::randomEncounterType(int roll)
{
	string answerString; //This is a variable to hold the answer to the question below

	//This uses the switch statement to run through the different areas for the table
	switch (roll)
	{
	case 1 :
	case 2 :
	case 3 :
	case 4 :
	case 5 :
		cout << "Harmless" << endl;
		break;
	case 6 :
	case 7 :
		cout << "Hazard" << endl;
		break;
	case 8 :
	case 9 :
	case 10 :
		cout << "Creature" << endl;
		break;
	}

	//This lets the user decide if they want to go back into the Random Encounter Type table
	cout << "Would you like to do another Random Encounter Type?" << endl;

	cin >> answerString;

	//This is to do some input verification and to change the answerString to all lowercase to make the if else if statement work out
	std::for_each(answerString.begin(), answerString.end(), [](char& c)
		{
			c = ::tolower(c);
		});

	cout << endl;

	//If they say yes they will be able to put in a new roll and the roll will be checked and then run back through the function
	//If they say no then it will say Goodbye and they will go back to the main menu
	if (answerString == "yes")
	{
		cout << "Enter a new roll" << endl;

		cin >> roll;

		checkRoll10(roll);

		randomEncounterType(roll);
	}
	else if (answerString == "no")
	{
		cout << "Goodbye" << endl;
		cout << endl;
	}
}