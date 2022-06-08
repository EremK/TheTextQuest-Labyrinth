#include "header.h"
#include "functions.h"
#include "colors.h"
#include "other.h"

void helloAdventurer()
{
	for (int i = 0; i < 2; i++)
	{
		for (int i = 1; i < 12; i++)
		{
			system("cls");
			hidecursor();
			color(i);

			cout << "\n\n\t\t\t   /\\                                                        /\\\n"
				<< "\t\t\t  |  |                                                      |  |\n"
				<< "\t\t\t /----\\               Hello, dear adventurer!              /----\\\n"
				<< "\t\t\t[______]      Welcome to my text quest \"The Labyrinth!\"   [______]\n"
				<< "\t\t\t |    |         _____                        _____         |    |\n"
				<< "\t\t\t |[]  |        [     ]                      [     ]        |  []|\n"
				<< "\t\t\t |    |       [_______][ ][ ][ ][][ ][ ][ ][_______]       |    |\n"
				<< "\t\t\t |    [ ][ ][ ]|     |  ,----------------,  |     |[ ][ ][ ]    |\n"
				<< "\t\t\t |             |     |/'    ____..____    '\\|     |             |\n"
				<< "\t\t\t  \\  []        |     |    /'    ||    '\\    |     |        []  /\n"
				<< "\t\t\t   |      []   |     |   |o     ||     o|   |     |  []       |\n"
				<< "\t\t\t   |           |  _  |   |     _||_     |   |  _  |           |\n"
				<< "\t\t\t   |   []      | (_) |   |    (_||_)    |   | (_) |       []  |\n"
				<< "\t\t\t   |           |     |   |     (||)     |   |     |           |\n"
				<< "\t\t\t   |           |     |   |      ||      |   |     |           |\n"
				<< "\t\t\t /''           |     |   |o     ||     o|   |     |           ''\\\n"
				<< "\t\t\t[_____________[_______]--'------''------'--[_______]_____________]\n";
			Sleep(200);
		}
	}
	system("cls");
	color(WHITE);
}

void backstory(playerInventory plInventory)
{
	color(GREEN);

	cout << "\n\n\n\n\t\t\tYou were making your way through a magical forest\n"
		<< "\t\t\twhen suddenly you saw a huge ajar door leading to\n"
		<< "\t\t\ta stone building half-hidden underground. Your\n"
		<< "\t\t\tcuriosity overcame rationality and you decided to\n"
		<< "\t\t\tsuccumb to the desire for adventure and went inside...\n\n\n\n";

	system("pause");
	system("cls");
	color(CYAN);

	cout << "\n\n\n\n\t\t\tAs soon as you stepped into the unknown, the door\n"
		<< "\t\t\tclosed behind you. There seems to be no turning\n"
		<< "\t\t\tback. You decided to look around... On the ceiling, \n"
		<< "\t\t\tabout 7 meters above you, at approximately equal \n"
		<< "\t\t\tintervals of 3 to 4 meters, grew fruit that you had\n"
		<< "\t\t\tnever seen before. They cast a dim blue light over \n"
		<< "\t\t\tthe room. Thanks to their insignificant light, you\n"
		<< "\t\t\tthe room. Thanks to their insignificant light, you\n"
		<< "\t\t\twere in a long corridor with several turns.\n\n\n\n";

	system("pause");
	system("cls");

	initAndCheckInventory(plInventory);

	system("pause");
	system("cls");

	color(WHITE);
}

void initAndCheckInventory(playerInventory plInventory)
{
	srand(time(nullptr));
	plInventory.hitPoints = 100;
	plInventory.coins = rand() % 19;
	plInventory.healPotion = 1;
	plInventory.bow = 0;

	color(YELLOW);

	cout << "\n\n\n\n\t\t\tBefore moving forward you decided to check\n"
		<< "\t\t\tyour pockets. You have with you:\n\n";

	cout << "\t\t\tYour HP: " << plInventory.hitPoints << endl;
	cout << "\n\t\t\tYour coins: " << plInventory.coins << endl;
	cout << "\n\t\t\tYour heal potions: " << plInventory.healPotion << "\n\n\n\n";
}