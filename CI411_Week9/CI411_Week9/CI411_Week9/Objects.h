#pragma once

// Function declarations
#include <iostream>
class Character
{
public:
	std::string name = "Character";
	float health = 10;
	float speed = 10;
	bool isAlive = false;
	bool checkIsAlive();
	void displayStats();
	Character();
	Character(std::string characterName, float characterHP);
};

class NPC : Character
{
public:
	std::string faction;
	std::string message;
	NPC();
	NPC(std::string fac, std::string mes);
};

class PlayerCharacter : Character
{
public:
	std::string potionCarrying;
	int mana;
	PlayerCharacter(std::string pcName, float pcHealth, std::string potion, int manaPoints);
};