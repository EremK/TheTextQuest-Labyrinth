#include "header.h"
#include "colors.h"
#include "other.h"

// Functions

void main_game(playerInventory plInventory, int questionNum);

void color(int color);

void hidecursor();

// Text (cout) functions

void helloAdventurer();

void backstory(playerInventory plInventory);

void initAndCheckInventory(playerInventory plInventory);

short playersChoice(int questionNum);

void additionalAction(short plChoice, int questionNum);