#include "header.h"
#include "colors.h"
#pragma once

struct playerInventory
{
	short hitPoints = 0;
	short coins = 0;
	bool healPotion = 0;
	bool bow = 0;
	bool auraOfLuck = 0;
	bool dogComrade = 0;
};

struct playerScore
{
	short totalPointsScore = 0;
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

const string questions[3] = {
"You walked forward down the corridor. Choose\n\t\t\twhere to go next:",
"After walking further in the left direction for\n\t\t\tabout 50 meters in complete darkness, you found\n\t\t\tyourself in a spacious room. A faint tinkling sound\n\t\t\tcherished your ears, and bones of various sizes were\n\t\t\tscattered on the floor. Some of them resemble human\n\t\t\tbones.\n\n\t\t\tYour gaze immediately latched onto the\n\t\t\tbrightest object around. After a closer look, you\n\t\t\trealized that both the sound and the light were\n\t\t\tcoming from it. It was a large furry creature,\n\t\t\tresembling a large dog with silver fur that glowed and\n\t\t\ttinkled. What to do next?",
"As you walked on, you stumbled into a room five times\n\t\t\tthe size of the previous one. As soon as you stepped\n\t\t\tinside, a wall of earth and stone closed behind you.\n\t\t\tYou immediately guessed that it was the magic of an\n\t\t\tearth dragon.\n\t\t\tWhat to do next?"
};

const string answers[3][4] = {
	{
		"I will go rightward",
		"I will go leftward",
		"",
		"",
	},
	{
		"I'll try to sneak into the next corridor without being seen",
		"I'll shoot the creature with a bow",
		"I'll throw a healing potion at the creature",
		"I'll try to communicate with the creature and ask for an exit",
	},
	{
		"I'll give him a fight",
		"I'll run away",
		"",
		"",
	}
};