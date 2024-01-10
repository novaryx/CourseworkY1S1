#pragma once
#include <iostream>
// Function declarations

class Circle
{
public:
	float radius = 0;
	float getArea();
	float getCircumference();
private:
	float pi = 3.14;
};

class Square
{
public:
	float sideLength = 0;
	float getArea();
	float getPerimeter();
};

class Character
{
public:
	float health = 100, speed = 10;
	int stamina = 100, strength = 2, xp = 0;
	std::string name, weapon;
	bool armed = true, isAlive = true;
	bool checkIsAlive();
	void displayStats();


};


void createCircles();
void createSquares();

void startScreen();
void endScreen();

