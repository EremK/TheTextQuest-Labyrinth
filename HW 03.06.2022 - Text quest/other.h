#include "header.h"
#include "colors.h"
#pragma once

struct playerInventory
{
	short hitPoints = 0;
	short coins = 0;
	bool healPotion = 0;
	bool bow = 0;
};

struct playerScore
{
	short totalCoins = 0;
	short killedMonsters = 0;

};

enum Choice {
	NO,
	YES
};

enum Directions {
	BACKWARD,
	FORWARD,
	LEFTWARD,
	RIGHTWARD
};

const string questions[10] = {
"You walked forward down the corridor. Choose\n\t\t\twhere to go next:",
};

const string answers[10][4] = {
	{
		"I will go rightward",
		"I will go leftward",
		"",
		"",
	},
};