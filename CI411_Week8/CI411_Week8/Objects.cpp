// Function definitions

#include "Objects.h"
#include <iostream>
using namespace std;

float Circle::getArea()
{
	return radius * radius * pi;
}

float Circle::getCircumference()
{
	return radius * 2 * pi;
}


float Square::getArea()
{
	return sideLength * sideLength;
}

float Square::getPerimeter()
{
	return sideLength * 4;
}

void createCircles()
{
	Circle smallCircle;
	smallCircle.radius = 5;
	Circle largeCircle;
	largeCircle.radius = 20;
	cout << "Radius = 5, Area = " << smallCircle.getArea() << ", Circumference = " << smallCircle.getCircumference() << endl;
	cout << "Radius = 20, Area = " << largeCircle.getArea() << ", Circumference = " << largeCircle.getArea() << endl;
}

void createSquares()
{
	Square smallSquare;
	smallSquare.sideLength = 5;
	Square largeSquare;
	largeSquare.sideLength = 20;
	cout << "Side Length = 5, Area = " << smallSquare.getArea() << ", Perimeter = " << smallSquare.getPerimeter() << endl;
	cout << "Side Length = 20, Area = " << largeSquare.getArea() << ", Perimeter = " << largeSquare.getPerimeter() << endl;
}

bool Character::checkIsAlive()
{
	if (health <= 0)
	{
		isAlive = false;
	}
	else
	{
		isAlive = true;
	}
	return isAlive;
}

void Character::displayStats()
{
	cout << "Player Character: " << name << endl;
	cout << "HP: " << health << " || XP: " << xp << endl;
	cout << "Stamina: " << stamina << " || Speed: " << speed << " || Strength: " << strength << endl;
	cout << "Armed: " << armed << " || Alive: " << isAlive << endl << endl;;
}
void startScreen()
{
	cout << "==============" << endl;
	cout << " CI411 Week 8 " << endl;
	cout << "==============" << endl;
	cout << "    Objects   " << endl;
	cout << "==============" << endl;	
}

void endScreen()
{
	cout << "=============" << endl;
	cout << "   Goodbye   " << endl;
	cout << "=============" << endl;
}
