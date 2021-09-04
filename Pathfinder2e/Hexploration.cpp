#include <iostream>
#include <algorithm>
using namespace std;

#include "Tables.h"



void Hexploration::setPreviousRoll(int roll) 
{
	//If the roll is not 14, 15, 16, 17, 18, 19, or 20 then previousRoll will be set as that roll otherwise previousRoll will maintain it's previous number 
	previousRoll = roll;
}

void Hexploration::outputRegions()
{
	cout << "Plains: " << plains << endl;
	cout << "Deserts: " << desert << endl;
	cout << "Aquatic: " << aquatic << endl;
	cout << "Mountain: " << mountain << endl;
	cout << "Forest: " << forest << endl;
	cout << "Swamp: " << swamp << endl;
	cout << "Arctic: " << arctic << endl;
}

void Hexploration::setRegion(int roll)
{
	string answerString; //A variable that is a placeholder for the function for when the user is requested information

	//The switch statement is used to go through the rolls to attach the correct information based off the number
	switch (roll)
	{
	case 1 :
	case 2 :
	case 3 :
		cout << "Plains" << endl;
		plains += 1;
		setPreviousRoll(roll);
		cout << "The total amount of Plains regions is: " << plains << endl;
		break;
	case 4 :
	case 5 :
		cout << "Desert" << endl;
		desert += 1;
		setPreviousRoll(roll);
		cout << "The total amount of Desert regions is: " << desert << endl;
		break;
	case 6 :
	case 7 :
		cout << "Aquatic" << endl;
		aquatic += 1;
		setPreviousRoll(roll);
		cout << "The total amount of Aquatic regions is: " << aquatic << endl;
		break;
	case 8 :
	case 9 :
		cout << "Mountain" << endl;
		mountain += 1;
		setPreviousRoll(roll);
		cout << "The total amount of Mountain regions is: " << mountain << endl;
		break;
	case 10 :
	case 11 :
		cout << "Forest" << endl;
		forest += 1;
		setPreviousRoll(roll);
		cout << "The total amount of Forest regions is: " << forest << endl;
		break;
	case 12 :
		cout << "Swamp" << endl;
		swamp += 1;
		setPreviousRoll(roll);
		cout << "The total amount of Swamp regions is: " << swamp << endl;
		break;
	case 13 :
		cout << "Arctic" << endl;
		arctic += 1;
		setPreviousRoll(roll);
		cout << "The total amount of Arctic regions is: " << arctic << endl;
		break;
	case 14 :
	case 15 :
	case 16 :
	case 17 :
	case 18 :
	case 19 :
	case 20 :
		//If the user uses the number from 14 through 20 then it will run this if else code
		//It will first check to see if the previous roll is the default value of 0 and if it is 0 then it will have them reroll
		//If previousRoll has been set then it will run the function again with the previousRoll as the arguement
		if (previousRoll == 0)
		{
			cout << "Reroll" << endl;
		}
		else
		{
			setRegionPreviousRoll(previousRoll);
		}
		break;
	}

	cout << endl;

	//It will then output the previous roll which is for testing
	cout << previousRoll << endl;

	//Then it will request to see if the user wants to run the table again
	cout << "Would you like to do another region?" << endl;

	cin >> answerString;

	//This is to do some input verification and to change the answerString to all lowercase to make the if else if statement work out
	std::for_each(answerString.begin(), answerString.end(), [](char& c)
		{
			c = ::tolower(c);
		});

	cout << endl;

	//If they answer yes then it will request a new roll, check the roll, the redo the function
	//If they answer no then it will say goodbye and output all the variables
	if (answerString == "yes")
	{
		cout << "Enter new roll: " << endl;

		cin >> roll;

		cout << endl;

		checkRoll20(roll);

		setRegion(roll);
	}
	else if (answerString == "no")
	{
		cout << "Goodbye" << endl;
		outputRegions();
		cout << endl;
	}
}

void Hexploration::setRegionPreviousRoll(int roll)
{
	//The switch statement is used to go through the rolls to attach the correct information based off the number
	switch (roll)
	{
	case 1:
	case 2:
	case 3:
		cout << "Plains" << endl;
		plains += 1;
		setPreviousRoll(roll);
		cout << "The total amount of Plains regions is: " << plains << endl;
		break;
	case 4:
	case 5:
		cout << "Desert" << endl;
		desert += 1;
		setPreviousRoll(roll);
		cout << "The total amount of Desert regions is: " << desert << endl;
		break;
	case 6:
	case 7:
		cout << "Aquatic" << endl;
		aquatic += 1;
		setPreviousRoll(roll);
		cout << "The total amount of Aquatic regions is: " << aquatic << endl;
		break;
	case 8:
	case 9:
		cout << "Mountain" << endl;
		mountain += 1;
		setPreviousRoll(roll);
		cout << "The total amount of Mountain regions is: " << mountain << endl;
		break;
	case 10:
	case 11:
		cout << "Forest" << endl;
		forest += 1;
		setPreviousRoll(roll);
		cout << "The total amount of Forest regions is: " << forest << endl;
		break;
	case 12:
		cout << "Swamp" << endl;
		swamp += 1;
		setPreviousRoll(roll);
		cout << "The total amount of Swamp regions is: " << swamp << endl;
		break;
	case 13:
		cout << "Arctic" << endl;
		arctic += 1;
		setPreviousRoll(roll);
		cout << "The total amount of Arctic regions is: " << arctic << endl;
		break;
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
		//If the user uses the number from 14 through 20 then it will run this if else code
		//It will first check to see if the previous roll is the default value of 0 and if it is 0 then it will have them reroll
		//If previousRoll has been set then it will run the function again with the previousRoll as the arguement
		if (previousRoll == 0)
		{
			cout << "Reroll" << endl;
		}
		else
		{
			setRegionPreviousRoll(previousRoll);
		}
		break;
	}
}

void Hexploration::randomTerrainFeature(int roll)
{
	string answerString; //This is a placeholder for the variable so that when the user inputs their answer below it can be held

	//The switch statement lets the function to attatch the right value based off of the roll
	switch (roll)
	{
	case 1 :
	case 2 :
	case 3 :
		cout << "Landmark: A feature of some significane that distinguishes the hex as noteworthy" << endl;
		break;
	case 4 :
	case 5 :
	case 6 :
		cout << "Secret: The hex contains a secret the party uncovers upon exploring the hex" << endl;
		break;
	case 7 :
	case 8 :
	case 9 :
		cout << "Resource: The hex contains some valuable resource appropriate to the terrain" << endl;
		break;
	case 10 :
	case 11 :
	case 12 :
	case 13 :
	case 14 :
	case 15 :
	case 16 :
	case 17 :
	case 18 :
	case 19 :
	case 20 :
		cout << "Standard: A standard representation of the terrain type" << endl;
		break;
	}

	//It will go through and see if the user wants to do the terrain feature again
	cout << "Would you like to do another terrain feature?" << endl;

	cin >> answerString;

	//This is to do some input verification and to change the answerString to all lowercase to make the if else if statement work out
	std::for_each(answerString.begin(), answerString.end(), [](char& c)
		{
			c = ::tolower(c);
		});

	cout << endl;

	//If they answer yes it will have the user enter a new roll, check the roll, and the rerun the function
	//If they answer no then it will say goodbye
	if (answerString == "yes")
	{
		cout << "Enter new roll: " << endl;

		cin >> roll;

		cout << endl;

		checkRoll20(roll);

		randomTerrainFeature(roll);
	}
	else if (answerString == "no")
	{
		cout << "Goodbye" << endl;
		cout << endl;
	}
}