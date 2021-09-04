#include <iostream>
#include <cstdlib>
using namespace std;

#include "Tables.h"

int Dice::diceChecker(int& diceAnswer)
{
	while (diceAnswer < 1 || diceAnswer > 100)
	{
		cout << "Invalid number of rolls. Reinput the number." << endl;
		cout << "How many times do you want to roll?" << endl;

		cin >> diceAnswer;
		cout << endl;
	}

	return diceAnswer;
}

int Dice::roll4()
{
	return rand() % 4 + 1;
}

int Dice::roll6()
{
	return rand() % 6 + 1;
}

int Dice::roll8()
{
	return rand() % 8 + 1;
}

int Dice::roll10()
{
	return rand() % 10 + 1;
}

int Dice::roll12()
{
	return rand() % 12 + 1;
}

int Dice::roll20()
{
	return rand() % 20 + 1;
}

int Dice::roll100()
{
	return rand() % 100 + 1;
}