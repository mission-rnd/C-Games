#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ReversiGame {
	char **board;	// char 'w' for whites, 'b' for blacks ' ' for empty 
	// do allocate memory for '\0' as it is character array.
	char *player1name;
	char *player2name;
	int whiteCount = 0;
	int blackCount = 0;
	int NumberofMoves = 0;
	int rows, cols;
	int turn = 1;   //1 for white, -1 for black
	int state = 0;  //0 for unfinished, 1 for game over
	int winner = 0; //1 for white, -1 for black
}ReversiGame;


void endGame(ReversiGame *game);
int hasMove(ReversiGame *game);
void modifyTurn(ReversiGame *game);

/*

Create a new ReversiGame By allocating memory from Heap , Let it be game;
Create a 2D Array from Heap(Dynamically) with specified number of rows and cols
and copy its reference to game->board;

Note : Return NULL for Invalid Inputs
Note : Copy Rows into newlyCreatedBoard->rows , and vice versa for cols ,
Also copy player1name,player2name.
*/

ReversiGame * createNewGame(int rows, int cols, char *player1, char *player2) {
	ReversiGame *changeThis = NULL;
	return changeThis;
}


/*
Copy the tobeCopied Array into game->board .
Learn how to Copy a 2D array when address of first row is given.
Note this function is called in the following way

Also Initialize the turn variable, whiteCount with no of white coins and same for black.

Do Nothing for Invalid Inputs
*/

void initializeReversiGame(ReversiGame *game, char *tobeCopiedBoard, int rows, int cols, int turn) {
	return;
}

/*
Check if the Current board is in End Position . Return 0 if the game is Ended, 1 if not .
Win Condition : Either all the squares are filled or a stalemate position (No one can Move)

*/

int checkReversiGameOver(ReversiGame *game){
	return 0;
}

void printMoves(ReversiGame *game){
	/*
	Sample output :
	Whites Count : 5
	Black Count : 4
	Move Count : 9
	*/
	return;
}

/*
Print the Board in a Good Way.Make sure Each Number is properly formatted and Seperated, and Row lines too .
Print Empty Space when you encounter 0.Also make sure your board looks good for 5x5 or 7x7 boards too .
Use your Thinking / UI Skills .
See the link we shared for sample screenshots for inspiration.
*/

void drawBoardOnScreen(ReversiGame *game) {
	return;
}

/*
Clear The Screen , So that we can redraw the Board (which has modified values )
*/

void clearScreen(ReversiGame *game){
	system("cls");
}

/*
Clear the Screen and ReDraw the Board ,Call above two functions
*/

void clearAndRedrawScreen(ReversiGame *game){
	
}



