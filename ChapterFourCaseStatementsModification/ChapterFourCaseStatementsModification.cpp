// ChapterFourCaseStatementsModification.cpp : Defines the entry point for the console application.
/*
	the switch statement in this program tells the user something
	he or she already knows: the data just entered!
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char choice;

	cout << "Enter A, B, or C: ";
	cin >> choice;
	// The following switch is missing its break statements!
	switch (choice)
	{
		case 'A': cout << "You entered A. \n";
		case 'B': cout << "You entered B. \n";
		case 'C': cout << "You entered C. \n";
		default:  cout << "You did not enter the A, B, or C! \n";
	}
    return 0;
}

// Without the break statement this causes the program to fall through.

