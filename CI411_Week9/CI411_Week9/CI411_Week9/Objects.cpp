// Function definitions

#include "Objects.h"
#include <iostream>
using namespace std;

bool Character::checkIsAlive()
{
	if (health <= 0)
	{
		isAlive = false;
		cout << name << " is dead." << endl;
	}
	else
	{
		isAlive = true;
		cout << name << " is alive." << endl;
	}
	return isAlive;
}

void Character::displayStats()
{
	cout << "Player Character: " << name << endl;
	cout << "HP: " << health << " || Speed: " << speed << endl;
	
}

Character::Character()
{
	cout << "Character created." << endl;
}

Character::Character(string characterName, float characterHP)
{
	name = characterName;
	health = characterHP;
	cout << "Character created." << endl;
	cout << "Name: " << name << endl;
	cout << "Health: " << health << endl;
}

NPC::NPC()
{
	cout << "NPC Created." << endl;
}

NPC::NPC(std::string fac, std::string mes)
{
	faction = fac;
	message = mes;
	cout << "NPC Created." << endl;
	cout << "Faction: " << faction << endl;
	cout << message << endl << endl;
}

PlayerCharacter::PlayerCharacter(std::string pcName, float pcHealth, std::string potion, int manaPoints)
{
	name = pcName;
	health = pcHealth;
	potionCarrying = potion;
	mana = manaPoints;
	cout << "Player Character " << name << " created." << endl;
	cout << "HP: " << health << endl;
	cout << "Potion: " << potionCarrying << endl;
	cout << "Mana: " << mana << endl;
}

