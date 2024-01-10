// Function definitions
#include "Arrays.h"
#include <iostream>
using namespace std;

void arrayExamples()
{
	displayDaysOfWeek();
	displayPlayArea();
}

void displayDaysOfWeek()
{
	string daysOfWeek[7] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
	cout << "Days of the Week" << endl;
	for (int i = 0; i < 7; i++)
	{
		cout << i + 1 << " : " << daysOfWeek[i] << endl;
	}
	cout << endl;
}

void displayPlayArea()
{
	cout << "Game Board" << endl;
	cout << "==========" << endl;
	const int boardHeight = 10;
	const int boardWidth = 10;
	int row;
	int col;
	string gameBoard[boardHeight][boardWidth];

	for (row = 0; row < boardHeight; row++)
	{
		for (col = 0; col < boardWidth; col++)
		{
			if (row == 0 || row == boardHeight - 1)
			{
				gameBoard[row][col] = "-";
			}
			else 
			{
				if (col == 0 || col == boardWidth - 1)
				{
					gameBoard[row][col] = "|";
				}
				else
				{
					gameBoard[row][col] = "*";
				}
			}
		}

	}
	for (int i = 0; i < 5; i++)
	{
		row = (rand() % (boardHeight - 2) + 1);
		col = (rand() % (boardWidth - 2) + 1);
		gameBoard[row][col] = "X";
	}
	for (row = 0; row < boardHeight; row++)
	{
		for (col = 0; col < boardWidth; col++)
		{
			cout << " " << gameBoard[row][col];
		}
		cout << endl;
	}
}

void startScreen()
{
	cout << "CI411 Week 7" << endl;
	cout << "============" << endl << endl;
	cout << "   Arrays   " << endl;
	cout << "============" << endl << endl;
}

void endScreen()
{
	cout << "========" << endl;
	cout << "Goodbye!" << endl;
}