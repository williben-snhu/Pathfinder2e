#pragma once
#ifndef TABLES_H
#define TABLES_H


#include <iostream>
using namespace std;

//This class is to store functions that all other classes need
class Table 
{
public:
	int checkRoll20(int& roll); //This will be used to make sure the roll is valid for the table for up to the number 20
	int checkRoll10(int& roll); //This will be used to make sure the roll is valid for the table for up to the number 10
};

//This class is for the random number generator
class Dice
{
public:
	int roll4(); //This will be used for a random number from 1 through 4
	int roll6(); //This will be used for a random number from 1 through 6
	int roll8(); //This will be used for a random number from 1 through 8
	int roll10(); //This will be used for a random number from 1 through 10
	int roll12(); //This will be used for a random number from 1 through 12
	int roll20(); //This will be used for a random number from 1 through 20
	int roll100(); //This will be used for a random number from 1 through 100
	int diceChecker(int& diceAnswer); //This will be used for input validation to make sure the number of dice is between 1 and 100
};

//This class is to store functions and variables in regards to encounters
class Encounter: public Table
{
public:
	void randomEncounterType(int roll); //This is a table that will display all the chances for each type of region
	void randomEncounterChance(); //This is a table to display what encounter you will get based off the roll
};

//This class will have all the information in regards to the hexploration table
class Hexploration: public Table
{

public:
	int previousRoll = 0; //This will hold a previous rolls information as long as it fits certain criteria
	int arctic = 0; //This will count how many arctic regions there are
	int forest = 0; //This will count how many forest regions there are
	int desert = 0; //This will count how many desert regions there are
	int mountain = 0; //This will count how many mountain regions there are
	int aquatic = 0; //This will count how many aquatic regions there are
	int swamp = 0; //This will count how many swamp regions there are
	int plains = 0; //This will count how many plains regions there are

	void setPreviousRoll(int roll); //This will be used to check the previous roll and possibly set it to the variable previous roll
	void setRegion(int roll); //This will be used to see what region the roll is for and increase the number for the region
	void setRegionPreviousRoll(int roll); //This is a function to fix an issue that builds when leaving after calling for the previousRoll
	void outputRegions(); //This will output all the region values
	void randomTerrainFeature(int roll); //This will be used to see what terrain features there are
};

#endif // !Tables_H