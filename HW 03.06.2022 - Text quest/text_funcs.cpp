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

void backstory(playerInventory* plInventory)
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

void initAndCheckInventory(playerInventory* plInventory)
{
	if (plInventory->hitPoints == 0)
	{
		srand(time(0));
		plInventory->hitPoints = 100;
		plInventory->coins = rand() % 19;
		plInventory->healPotion = 1;
		plInventory->bow = 0;
	}

	color(YELLOW);
	cout << "\n\n\n\n\t\t\tBefore moving forward you decided to check\n"
		<< "\t\t\tyour pockets. You have with you:\n\n";

	cout << "\t\t\tYour HP: " << plInventory->hitPoints << endl;
	cout << "\n\t\t\tYour coins: " << plInventory->coins << endl;
	if (plInventory->bow != 0)
		cout << "\n\t\t\tBow and arrows: " << plInventory->bow << endl;
	if (plInventory->auraOfLuck != 0)
		cout << "\n\t\t\tEndless Luck (passive): " << plInventory->auraOfLuck << endl;
	cout << "\n\t\t\tYour heal potions: " << plInventory->healPotion << "\n\n\n\n";
}

short playersChoice(int& questionNum)
{
	char key;
	color(CYAN);
	system("cls");

	cout << "\n\n\n\n\t\t\t" << questions[questionNum] << "\n\n";

	for (int i = 0; i < 4; i++)
	{
		if (answers[questionNum][i] != "")
		{
			cout << "\t\t\t" << i + 1 << ". " << answers[questionNum][i] << endl << endl;
		}
	}

	while (1)
	{
		key = _getch();

		switch (key)
		{
		case '1':
			if (answers[questionNum][0] != "")
			{
				return 1;
			}
			break;
		case '2':
			if (answers[questionNum][1] != "")
			{
				return 2;
			}
			break;
		case '3':
			if (answers[questionNum][2] != "")
			{
				return 3;
			}
			break;
		case '4':
			if (answers[questionNum][3] != "")
			{
				return 4;
			}
			break;
		}
	}
	system("cls");
}

void additionalAction(playerInventory* plInventory, playerScore* totalSc, short plChoice, int& questionNum)
{
	if (plChoice == 1 && questionNum == 0)
	{
		system("cls");
		chestRoom(plInventory, totalSc);
	}
	else if (questionNum == 1)
	{
		system("cls");
		dogRoom(plInventory, totalSc, plChoice);
	}
}

void chestRoom(playerInventory* plInventory, playerScore* totalSc)
{
	srand(time(0));
	cout << "\n\n\n\n\t\t\tYou walk into a gloomy room with a medium-\n"
		<< "\t\t\tsized chest in the center. Will you open it?\n\n";
	cout << "\t\t\t1. Yes!\n"
		<< "\t\t\t2. No!\n";

	while (1)
	{
		char key;
		short luckCheck = rand() % 3;
		key = _getch();

		switch (key)
		{
		case '1':
			if (luckCheck == 0) // 1st POSSIBLE ENDING
			{
				system("cls");
				color(RED);
				cout << "\n\n\n\n\t\t\tWow! Looks like the chest turned out to be\n"
					<< "\t\t\talive. You became his lunch. Game over!\n\n";
				color(CYAN);
				printTotalScore(plInventory, totalSc);
			}
			else
			{
				system("cls");
				plInventory->bow = 1;
				plInventory->coins += rand() % 30;
				cout << "\n\n\n\n\t\t\tYou have found some treasures and weapon inside!\n"
					<< "\t\t\tYour current inventory:";
				initAndCheckInventory(plInventory);
			}
			system("pause");
			break;
		case '2':
			system("cls");
			cout << "\n\n\n\n\t\t\tYou decide not to open the chest and leave the\n"
				<< "\t\t\tgray room. Who knows, maybe it was the right\n"
				<< "\t\t\tchoice.\n\n\n\n";
			system("pause");
			break;
		}

		if (key == '1' || key == '2')
			break;
	}


}

void dogRoom(playerInventory* plInventory, playerScore* totalSc, short plChoice)
{
	srand(time(0));

	switch (plChoice)
	{
	case 1:
	{
		short luckCheck = rand() % 4;
		if (luckCheck == 0) // 2nd POSSIBLE ENDING
		{
			system("cls");
			color(RED);
			cout << "\n\n\n\n\t\t\tThe luminous creature's sleep was more sensitive than\n"
				<< "\t\t\tyou expected. Before you knew it, the creature jumped\n"
				<< "\t\t\tup to you and cut you into small pieces! You're dead!\n\n";
			color(CYAN);
			printTotalScore(plInventory, totalSc);
		}
		else
		{
			system("cls");
			cout << "\n\n\n\n\t\t\tYou're a natural ninja! You passed by undetected!\n\n\n\n";
		}
		system("pause");
		break;
	}
	case 2:
	{
		short luckCheck = rand() % 5;
		if (plInventory->bow == true)
		{
			if (luckCheck == 0)
			{
				system("cls");
				plInventory->auraOfLuck = 1;
				cout << "\n\n\n\n\t\t\tUnbelievable! Your shooting skills are top notch today!\n"
					<< "\t\t\tThe arrow fired from a distance of about 75 meters hit\n"
					<< "\t\t\tthe creature exactly in the eye. Immediately afterwards,\n"
					<< "\t\t\tyou felt a rush of strength and luck. The glowing aura\n"
					<< "\t\t\tgradually began to flow in a thin stream from the\n"
					<< "\t\t\tcreature to you. Your current inventory:\n\n";
				initAndCheckInventory(plInventory);
			}
			else // 3rd POSSIBLE ENDING
			{
				system("cls");
				color(RED);
				cout << "\n\n\n\n\t\t\tIt's pretty hard to shoot a bow in the dark. When you\n"
					<< "\t\t\tlet go of the bowstring, a moment later you heard a\n"
					<< "\t\t\tterrifying roar! You hit the creature in the paw. It seems\n"
					<< "\t\t\tto have completely paralyzed you in some way. You\n"
					<< "\t\t\tdied a long and agonizing starvation for two weeks.\n"
					<< "\t\t\tShooting an arrow at an unknown creature wasn't the\n"
					<< "\t\t\tsmartest thing to do...\n\n";
				color(CYAN);
				printTotalScore(plInventory, totalSc);
			}
		}
		else // 4th POSSIBLE ENDING
		{
			system("cls");
			color(RED);
			cout << "\n\n\n\n\t\t\tDespite the fact that you did not have a bow with you,\n"
				<< "\t\t\tyou decided to try to defeat the creature in fist\n"
				<< "\t\t\tcombat. Second place in the district boxing\n"
				<< "\t\t\tchampionship, which you won when you were 17 years\n"
				<< "\t\t\told, gave you a lot of self-confidence!\n\n\n\n";
			system("pause");
			system("cls");
			cout << "\n\n\n\n\t\t\tHmm, looks like the creature didn't want to fight\n"
				<< "\t\t\tby the rules! Unfortunately, you became its dinner :(\n\n";
			color(CYAN);
			printTotalScore(plInventory, totalSc);
		}
		break;
	}
	case 3:
	{

	}
	case 4:
	{

	}
	}
}

void printTotalScore(playerInventory* plInventory, playerScore* totalSc)
{
	totalSc->totalCoins = plInventory->coins;
	cout << "\n\t\t\tYour final score:\n\n"
		<< "\t\t\tEarned coins: " << totalSc->totalCoins << endl
		<< "\t\t\tKilled monsters: " << totalSc->killedMonsters << "\n\n\n\n";

	system("pause");
	exit(0);
}