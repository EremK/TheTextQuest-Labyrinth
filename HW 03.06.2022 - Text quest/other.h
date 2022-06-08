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

enum Choice {
	NO,
	YES
};

enum Directions {
	BACKWARD,
	FORWARD,
	LEFT,
	RIGHT
};

const string questions[10] = {
"",
};

const string answers[10][4] = {
	{
		"",
		"",
		"",
		"",
	},
};