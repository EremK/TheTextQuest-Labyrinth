#include "header.h"
#include "colors.h"
#include "other.h"

// Functions

void main_game(playerInventory* plInventory, playerScore* totalSc);

void color(int color);

void hidecursor();

// Text (cout) functions

void helloAdventurer();

void backstory(playerInventory* plInventory);

void initAndCheckInventory(playerInventory* plInventory);

short playersChoice(int &questionNum);

void additionalAction(playerInventory* plInventory, playerScore* totalSc, short plChoice, int &questionNum);

void chestRoom(playerInventory* plInventory, playerScore* totalSc);

void dogRoom(playerInventory* plInventory, playerScore* totalSc, short plChoice);

void printTotalScore(playerInventory* plInventory, playerScore* totalSc);