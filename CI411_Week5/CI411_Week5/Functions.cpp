// CI411 Week 5
// Functions Source
// Nova Reene

#include <iostream>
#include"Functions.h"
using namespace std;

// Function Definitions

void newFunction()
{
	cout << "This got executed" << endl << endl;
}

float circleArea(float radius)
{
	float pi = 3.142;
	return pi * radius * radius;
}

float circleCircumference(float radius)
{
	float pi = 3.142;
	return pi * radius * 2;
}

float hypotenuseCalculator(float length1, float length2)
{
	return sqrt((length1 * length1) + (length2 * length2));
}

void startScreen()
{
	cout << "C++ Functions Examples" << endl;
	cout << "======================" << endl << endl;
	cout << "       Welcome        " << endl;
	cout << "       =======        " << endl;
}

void mainMenuLoop()
{
	bool exitProgram = false;
	while (exitProgram == false)
	{

		int playerChoice;
		cout << "Option Menu" << endl;
		cout << "===========" << endl;

		cout << "Please select the program to run: " << endl;
		cout << " 1: Combat Example" << endl;
		cout << " 2: RPG Example" << endl;
		cout << " 3: For Loop" << endl;
		cout << " 4: Exit Program" << endl;
		cin >> playerChoice;

		switch (playerChoice)
		{
		case 1:
			combatWhileExample();
			break;
		case 2:
			rpgEncounter();
			break;
		case 3:
			forLoopExample();
			break;
		case 4:
			exitProgram = true;
			break;
		default:
			break;
		}
	}
	
}

void combatWhileExample()
{
	cout << "Simple Combat Loop" << endl;
	cout << "------------------" << endl;

	bool gameOver = false;
	float playerHealth = 50;
	float enemyHealth = 50;
	float playerAttack = 10; // 10 as a placeholder value if no valid choice is made
	float enemyAttack = 10;
	int playerChoice;
	do
	{
		cout << "Please select an option" << endl << endl;
		cout << " 1: Attack" << endl;
		cout << " 2: Defend (halves enemy damage)" << endl;
		cout << " 3: Evade (50% chance to take no damage)" << endl;
		cin >> playerChoice;
		switch (playerChoice)
		{
		case 1:
			cout << endl << "1: Attack Selected" << endl;
			playerAttack = rand() % 20 + 1; // randomise player damage between 1 and 20
			enemyAttack = rand() % 15 + 1; // randomise enemy damage between 1 and 15
			break;
		case 2:
			cout << endl << "2: Defend Selected" << endl;
			playerAttack = 0;
			enemyAttack = (rand() % 15 + 1) / 2;
			break;
		case 3:
			cout << endl << "3: Evade Selected" << endl;
			playerAttack = 0;
			if (rand() % 2 == 0)
			{
				enemyAttack = 0;
			}
			else
			{
				enemyAttack = rand() % 15 + 1;
			}
			break;
		default:
			cout << endl << "Invalid choice selected" << endl;
			playerAttack = 0; // if nothing is picked, do nothing
			enemyAttack = rand() % 15 + 1; // enemy gets a free hit
			break;
		}
		cout << "Your attack will do " << playerAttack << " damage." << endl;
		cout << "Your enemy's attack will do " << enemyAttack << " damage." << endl;
		playerHealth = playerHealth - enemyAttack;
		enemyHealth = enemyHealth - playerAttack;

		cout << "You now have " << playerHealth << " HP." << endl;
		cout << "Your enemy now has " << enemyHealth << " HP." << endl;
		if (playerHealth <= 0 || enemyHealth <= 0)
		{
			gameOver = true;
		}
	} while (gameOver == false);

	cout << endl << "-------------------------------------------------" << endl;
	if (playerHealth <= 0)
	{
		cout << endl << "You lost!" << endl;
	}
	else
	{
		cout << endl << "You won!" << endl;
	}
	cout << endl << endl;
}

void forLoopExample()
{
	cout << "C++ Loop Examples" << endl;
	cout << "-----------------" << endl;
	cout << endl << endl;

	// For Loops
	cout << "For Loop Example: Counting to 20" << endl;
	cout << "--------------------------------" << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << i + 1 << endl; // Counts up from 1 to 20 
	}

	cout << endl << endl; // Spacer between algorithms

	cout << "For Loop Example: Counting down from 100 in steps of 5" << endl;
	cout << "------------------------------------------------------" << endl;

	for (int i = 100; i >= 0; i -= 5)  // Counts down from 100 to 0 in steps of 5
	{
		cout << i << endl;
	}

	cout << endl << endl; // Spacer between algorithms

	cout << "For Loop Example: Times Tables" << endl;
	cout << "------------------------------" << endl;
	int userInput = 0;
	cout << "Please input a number." << endl;
	cin >> userInput;
	for (int i = 0; i <= 12; i++)
	{

		cout << userInput << " * " << i << " = " << userInput * i << endl;
	}
	cout << endl << endl;
}

void rpgEncounter()
{
	// Character Select and Equip
	int playerSelection = 0;
	float damage = 0;
	float coolDown = 0;
	string characterName = "";
	string weapon = "";

	cout << "Please select a character: " << endl;
	cout << " 1: Dwarf" << endl;
	cout << " 2: Elf" << endl;
	cout << " 3: Orc" << endl;
	cout << " 4: Fighter" << endl;
	cout << " 5: Wizard" << endl;
	cin >> playerSelection;

	switch (playerSelection)
	{
	case 1:
		characterName = "Skarbumir Mudbreaker";
		weapon = "Rusty Sword";
		damage = 10;
		coolDown = 75;
		break;

	case 2:
		characterName = "Vesstan Jovalur";
		weapon = "Wooden Bow";
		damage = 5;
		coolDown = 25;
		break;

	case 3:
		characterName = "Borug the Orc";
		weapon = "Club";
		damage = 25;
		coolDown = 100;
		break;

	case 4:
		characterName = "Sir Cuitboard";
		weapon = "Iron Gauntlets";
		damage = 15;
		coolDown = 50;
		break;

	case 5:
		characterName = "Averhan the Wizard";
		weapon = "Mystical Staff";
		damage = 20;
		coolDown = 40;
		break;

	default:
		characterName = "Geoff the Useless";
		weapon = "Safety Pin";
		damage = 0;
		coolDown = 100;
		break;
	}
	cout << endl << endl;
	cout << "Your character, " << characterName << " begins their quest to save the princess, armed with their trusty " << weapon << ".";
	cout << "On their journey to find her, they encounter the dragon Dandentag, Protector Of The Sky who engages them in combat." << endl;
	cout << characterName << " attacks with " << weapon << "." << endl;
	int attackPower = damage * ((100 - coolDown) / 100);
	cout << "Your attack power totals " << attackPower;

	if (attackPower > 15)
	{
		cout << "\n Congratulations, you beat Dandentag! You discovered the princess in his lair and delivered her back to the capital.\n";
	}
	else
	{
		cout << "\n Dandentag bests you in battle. You die, leaving no one left to find the princess, who is never seen again. \n";
	}
}

void endScreen()
{
	cout << "Thank you for playing!" << endl;
	cout << "======================" << endl;
}