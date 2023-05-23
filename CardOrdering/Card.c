/*
This file contains the implementation of the functions required by the CardOrdering program.
*/

#include <stdio.h>
#include "Card.h"

#pragma warning(disable : 4996)

char* suits[] = { "Club", "Diamond", "Heart", "Spade" };
char* numbers[] = { "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten" };
char* faces[] = { "Jack", "Queen", "King" };

void DisplaySuit(FILE *fptr, unsigned char suit)
{
	switch (suit)
	{
	case 'c':
	case 'C':
		fprintf(fptr, "%10s - ", suits[0]);
		break;

	case 'd':
	case 'D':
		fprintf(fptr, "%10s - ", suits[1]);
		break;

	case 'h':
	case 'H':
		fprintf(fptr, "%10s - ", suits[2]);
		break;

	case 's':
	case 'S':
		fprintf(fptr, "%10s - ", suits[3]);
		break;

	default:
		fprintf(fptr,"    %c %s - ", suit, "Suit");
		break;
	}

	return;
}


void DisplayNumber(FILE* fptr, unsigned short item)
{
	if ((item < 1) || (item > 10))
		fprintf(fptr, "Number %d\n", item);
	else
		fprintf(fptr, "%s\n", numbers[item-1]);
}

void DisplayFace(FILE* fptr, unsigned short item)
{
	if ((item < 11) || (item > 13))
		fprintf(fptr, "Face %d\n", item);
	else
		fprintf(fptr, "%s\n", faces[item-11]);
}
