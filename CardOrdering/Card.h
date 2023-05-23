/*
This header file contains the definitions for the CardOrdering program.
*/

#define SUCCESS_EXIT 0
#define ERROR_EXIT -1

#define RANDOM_CARD_FILE "RandomCards.txt"
#define ORDERED_CARD_FILE "OrderedCards.txt"

#define MAX_STACK_SIZE 13

void DisplaySuit(FILE* fptr, unsigned char suit);		// print suit as text
void DisplayNumber(FILE* fptr, unsigned short item);	// print number as text
void DisplayFace(FILE* fptr, unsigned short item);		// print face as text

typedef struct card
{
	unsigned char suit;			// 'S' Spade, 'H' Heart,'D' Diamond and 'C' Club	
	unsigned short item;		// 1-10 numbers and 11-13  Jack, Queen and King
	void (*ptrDisplayItem) (FILE* fptr, unsigned short item); // display number/face
} Card;
