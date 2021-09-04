// Pathfinder2e.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

#include "Tables.h"


void showTableSubMenu(); //This will display the table sub menu
void showMenu(); //This will show the main menu
void showTableAnswers(int& answer, Table& table, Hexploration& hex, int& roll, Encounter& encounter, Dice& dice); //This will accept the inputs for the Table sub menu
void showDiceMenu(); //This will give the users options for their dice
void showDiceAnswers(int& answer, Dice& dice, int& diceAnswer, Table& table, Hexploration& hex, int& roll, Encounter& encounter); //This will give the answers to the sub menu
void menuChoices(int& answer, Table& table, Hexploration& hex, int& roll, Encounter& encounter, Dice& dice); //This is to move the switch from main to a function

int main()
{
    Hexploration hex; //This is to access the Hexploration functions
    Table table; //This is to access the Table class functions
    Encounter encounter; //This is to access the Encounter class functions
    Dice dice; //This is to access the Dice class functions
    int roll; //This is a variable to hold the roll number
    int answer; //This is a variable to hold the answer variable


    showMenu();

    cin >> answer;
    cout << endl;

    menuChoices(answer, table, hex, roll, encounter, dice);
}

void menuChoices(int& answer, Table& table, Hexploration& hex, int& roll, Encounter& encounter, Dice& dice)
{
    int diceAnswer = 1; //This is a variable for a sub menus question

    //This will go through the different menu choices and will lead to the correct sub menu
    switch (answer)
    {
    case 1 :
        showDiceMenu();

        cin >> answer;
        cout << endl;

        showDiceAnswers(answer, dice, diceAnswer, table, hex, roll, encounter);
        break;
    case 2 :
        showTableSubMenu();

        cin >> answer;
        cout << endl;

        showTableAnswers(answer, table, hex, roll, encounter, dice);
        break;
    case 3 :
        cout << "Goodbye" << endl;
        break;
    //In the case of an invalid response the switch will have the user see the menu and make the choice again
    default :
        cout << "Invalid entry please reselect" << endl;
        cout << endl;

        showMenu();

        cin >> answer;
        cout << endl;

        menuChoices(answer, table, hex, roll, encounter, dice);

        break;
    }
}

void showDiceMenu()
{
    //This is going through the sub menu and giving all the options
    cout << "What type of dice would you like to roll?" << endl;
    cout << "1. A d4?" << endl;
    cout << "2. A d6?" << endl;
    cout << "3. A d8?" << endl;
    cout << "4. A d10?" << endl;
    cout << "5. A d12?" << endl;
    cout << "6. A d20?" << endl;
    cout << "7. A d100?" << endl;
    cout << "8. Exit" << endl;
    cout << endl;
}

void showDiceAnswers(int& answer, Dice& dice, int& diceAnswer, Table& table, Hexploration& hex, int& roll, Encounter& encounter)
{
    int answerInt; //This is a placeholder variable to hold the dice roll then output it

    //This switch will go through the different menu options and output the appropriate dice roll as well as ask the number of dice the user wants to roll
    //It will then reshow the menu for the user to go through
    switch (answer)
    {
    case 1 :
        cout << "How many times do you want to roll?" << endl;
        cout << "Put a number from 1 through 100" << endl;

        cin >> diceAnswer;
        cout << endl;

        dice.diceChecker(diceAnswer);

        for (int i = 0; i < diceAnswer; ++i)
        {
            answerInt = dice.roll4();
            cout << answerInt << endl;
        }

        cout << endl;

        showDiceMenu();

        cin >> answer;
        cout << endl;

        showDiceAnswers(answer, dice, diceAnswer, table, hex, roll, encounter);

        break;
    case 2 :
        cout << "How many times do you want to roll?" << endl;
        cout << "Put a number from 1 through 100" << endl;

        cin >> diceAnswer;
        cout << endl;

        dice.diceChecker(diceAnswer);

        for (int i = 0; i < diceAnswer; ++i)
        {
            answerInt = dice.roll6();

            cout << answerInt << endl;
        }

        cout << endl;

        showDiceMenu();

        cin >> answer;
        cout << endl;

        showDiceAnswers(answer, dice, diceAnswer, table, hex, roll, encounter);

        break;
    case 3 :
        cout << "How many times do you want to roll?" << endl;
        cout << "Put a number from 1 through 100" << endl;

        cin >> diceAnswer;
        cout << endl;

        dice.diceChecker(diceAnswer);

        for (int i = 0; i < diceAnswer; ++i)
        {
            answerInt = dice.roll8();

            cout << answerInt << endl;
        }

        cout << endl;

        showDiceMenu();

        cin >> answer;
        cout << endl;

        showDiceAnswers(answer, dice, diceAnswer, table, hex, roll, encounter);

        break;
    case 4 :
        cout << "How many times do you want to roll?" << endl;
        cout << "Put a number from 1 through 100" << endl;

        cin >> diceAnswer;
        cout << endl;

        dice.diceChecker(diceAnswer);

        for (int i = 0; i < diceAnswer; ++i)
        {
            answerInt = dice.roll10();

            cout << answerInt << endl;
        }

        cout << endl;

        showDiceMenu();

        cin >> answer;
        cout << endl;

        showDiceAnswers(answer, dice, diceAnswer, table, hex, roll, encounter);

        break;
    case 5 :
        cout << "How many times do you want to roll?" << endl;
        cout << "Put a number from 1 through 100" << endl;

        cin >> diceAnswer;
        cout << endl;

        dice.diceChecker(diceAnswer);

        for (int i = 0; i < diceAnswer; ++i)
        {
            answerInt = dice.roll12();

            cout << answerInt << endl;
        }

        cout << endl;

        showDiceMenu();

        cin >> answer;
        cout << endl;

        showDiceAnswers(answer, dice, diceAnswer, table, hex, roll, encounter);

        break;
    case 6 :
        cout << "How many times do you want to roll?" << endl;
        cout << "Put a number from 1 through 100" << endl;

        cin >> diceAnswer;
        cout << endl;

        dice.diceChecker(diceAnswer);

        for (int i = 0; i < diceAnswer; ++i)
        {
            answerInt = dice.roll20();

            cout << answerInt << endl;
        }

        cout << endl;

        showDiceMenu();

        cin >> answer;
        cout << endl;

        showDiceAnswers(answer, dice, diceAnswer, table, hex, roll, encounter);

        break;
    case 7 :
        cout << "How many times do you want to roll?" << endl;
        cout << "Put a number from 1 through 100" << endl;

        cin >> diceAnswer;
        cout << endl;

        dice.diceChecker(diceAnswer);

        for (int i = 0; i < diceAnswer; ++i)
        {
            answerInt = dice.roll100();

            cout << answerInt << endl;
        }

        cout << endl;

        showDiceMenu();

        cin >> answer;
        cout << endl;

        showDiceAnswers(answer, dice, diceAnswer, table, hex, roll, encounter);

        break;
    case 8 :
        showMenu();

        cin >> answer;
        cout << endl;

        menuChoices(answer, table, hex, roll, encounter, dice);
        break;
    //In the case of an invalid response the switch statement will show the menu again
    default :
        cout << "Invalid response try again" << endl;
        cout << endl;

        showDiceMenu();

        cin >> answer;
        cout << endl;

        showDiceAnswers(answer, dice, diceAnswer, table, hex, roll, encounter);
        break;
    }
}

void showMenu()
{
    cout << "Select which item on the menu you would like?" << endl;
    cout << "1. Dice roller" << endl;
    cout << "2. Table" << endl;
    cout << "3. Exit" << endl;
    cout << endl;
}

//This will show the tables sub menu
void showTableSubMenu()
{
    cout << "Select which item on the menu you would like?" << endl;
    cout << "1. Set the region" << endl;
    cout << "2. Terrain features" << endl;
    cout << "3. Random Encounter Type" << endl;
    cout << "4. Random Encounter Chance" << endl;
    cout << "5. Exit" << endl;
    cout << endl;
}

//This is all the answers and is put in a function to limit space in the main area
void showTableAnswers(int& answer, Table& table, Hexploration& hex, int& roll, Encounter& encounter, Dice& dice)
{
    //This will allow the user to run through the setRegions function and then reprompt the user to choose from the menu again
    switch (answer)
    {
    //This runs through setting the regions through the table
    case 1 :
        cout << "Please enter your roll that is from 1 through 20: " << endl;

        cin >> roll;

        cout << endl;

        table.checkRoll20(roll);

        hex.setRegion(roll);

        showTableSubMenu();

        cin >> answer;

        cout << endl;

        showTableAnswers(answer, table, hex, roll, encounter, dice);

        break;
    //This goes through the Random Terrain Feature table
    case 2 :
        cout << "Please enter your roll that is from through 20: " << endl;

        cin >> roll;

        cout << endl;

        table.checkRoll20(roll);

        hex.randomTerrainFeature(roll);

        showTableSubMenu();

        cin >> answer;

        cout << endl;

        showTableAnswers(answer, table, hex, roll, encounter, dice);

        break;
    //This brings the Random Encounter Type table
    case 3 :
        //This allows the user to enter their roll after the request and applies that roll to the roll variable
        cout << "Please enter your roll that is from 1 through 10: " << endl;

        cin >> roll;

        cout << endl;

        //It will then check the roll with the checkRoll10 variable since this table has 10 choices
        table.checkRoll10(roll);

        //It then calls for the randoEncounterType function
        encounter.randomEncounterType(roll);

        //It then calls the menu and allows the user to go back to the main menu
        showTableSubMenu();

        cin >> answer;

        cout << endl;

        showTableAnswers(answer, table, hex, roll, encounter, dice);

        break;
    //This shows the table Random Encounter Chance table
    case 4 :
        //This calls the randomEncounterChance function to bring up all the different information
        encounter.randomEncounterChance();

        //This will bring up the menu and let the user go back to the menu and choose a new option
        showTableSubMenu();

        cin >> answer;

        cout << endl;

        showTableAnswers(answer, table, hex, roll, encounter, dice);

        break;
    //This ends the menu
    case 5 :
        showMenu();

        cin >> answer;

        cout << endl;

        menuChoices(answer, table, hex, roll, encounter, dice);
        
        break;
    //This is by default in case they do not input the correct number
    default :
        //This informs the user what they can put in
        cout << "Wrong value entered reenter a number from 1 through 5 corresponding to the menu item: " << endl;
        cout << endl;

        //This will show the menu then taking the users input and goes through the function again
        showTableSubMenu();

        cin >> answer;

        cout << endl;

        showTableAnswers(answer, table, hex, roll, encounter, dice);
        cout << endl;

        break;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
