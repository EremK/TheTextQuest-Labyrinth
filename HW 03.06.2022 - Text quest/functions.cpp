#include "header.h"
#include "functions.h"
#include "colors.h"
#include "other.h"

void main_game(playerInventory plInventory)
{
	//helloAdventurer();

	backstory(plInventory);
}

void color(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void hidecursor()
{
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO info;
	info.dwSize = 100;
	info.bVisible = FALSE;
	SetConsoleCursorInfo(screen, &info);
}