/*
Read the suit and number on the cards from the  file into memory.
Put them in ascending order into another file
*/

#include <stdio.h>
#include "Card.h"

#pragma warning(disable : 4996)

int main(void)
{
	Card card_ary[MAX_STACK_SIZE]; // Array of Card structures

	FILE* fPtrIn = NULL;
	FILE* fPtrOut = NULL;

	// Open the random card file for reading
	
	if ((fPtrIn = fopen(RANDOM_CARD_FILE, "r")) == NULL)
	{
		printf("Error in opening the random card file %s.\n", RANDOM_CARD_FILE);
		return ERROR_EXIT;
	}

	// Open the ordered card file for writing
	
	if ((fPtrOut = fopen(ORDERED_CARD_FILE, "w")) == NULL)
	{
		printf("Error in opening the ordered card file %s.\n", ORDERED_CARD_FILE);
		fclose(fPtrIn);		// close the input file before exit as good habit
		return ERROR_EXIT;
	}

	// Read the cards into the structure array

	int num_cards = 0;		// number of cards
	Card* ptr = card_ary;

	while (num_cards < MAX_STACK_SIZE)
	{
		fscanf(fPtrIn, " %c %hu", &ptr->suit, &ptr->item);

		if (feof(fPtrIn))
			break;
		else
		{
			if (ptr->item <= 10)
				ptr->ptrDisplayItem = DisplayNumber;	// display a number
			else
				ptr->ptrDisplayItem = DisplayFace;		// display a face

			num_cards++;
			ptr++;			// Point to the next element of the card array
		}
	}

	fclose(fPtrIn);	// we are finished with the random file, close it

	if (num_cards <= 0)
	{
		printf("No cards to play.\n");
		fclose(fPtrOut);		// close the output file before exit as good habit
		return ERROR_EXIT;
	}

	// Order the cards using the Bubble Sort Algorithm

	for (int i=0; i < num_cards; i++)
	{
		for (int j = 0; j < num_cards-1; j++)
		{
			Card dummy;
			
			// swap the consecutive cards if necessary
			
			if ((card_ary[j].suit > card_ary[j + 1].suit) || 
				((card_ary[j].suit == card_ary[j + 1].suit) && (card_ary[j].item > card_ary[j + 1].item)))
			{
				dummy = card_ary[j+1];
				card_ary[j+1] = card_ary[j];
				card_ary[j] = dummy;
			}
		}
	}

	// Write the ordered deck to the output file

	ptr = card_ary;

	for (int i = 0; i <= num_cards-1; i++, ptr++)
	{
		DisplaySuit(fPtrOut, ptr->suit);
		ptr->ptrDisplayItem(fPtrOut, ptr->item);
	}

	fclose(fPtrOut);	// we are finished with the ordered file, close it

	printf("Cards ordered in the output file!..\n");

	return SUCCESS_EXIT;
}
