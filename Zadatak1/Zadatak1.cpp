// Zadatak1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include <iostream>
#include <stdio.h>

#define PI 3.14159265
#define IME "VLADE DIVAC"
#define BROJ 52
using namespace std;
int main()
{
	printf("Da li se ti zoves %s\b\b\b\b\b%s?\n","Djura", "Risto");
	printf("Broj pi ima vrednost %f .\n", PI);
	int a = 5;
	printf("a=%c\n", a); //??

	printf("Kosarkas %s nosi patike broj %d\n", IME, BROJ);

	int i = 777, j =- 1;
	printf("Celi brojevi: \n\n");
	printf("|%10d|%10d|\n",i, j);
	printf("|%-10d|%-10d|\n", i, j);
	printf("|010o|%010o|\n",i, j);
	printf("|%10x|%010X|\n",i, j);
	printf("|%10u|%10lu|\n",i, j);

	float x = 1234.56;
	printf("Realni brojevi:\n");
	printf("|%10f|%-10f|\n", x, x);
	printf("|%10.3f|%-10.3f|\n", x, x);
	printf("|%10.0f|%-10.0f|\n", x, x);
	printf("|%10e|%10f|%10g|\n", x, x);
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
