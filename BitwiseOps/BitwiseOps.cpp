// BitwiseOps.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
	//Task 30
	//1) Remove p-th digit in natural number N;
	int N, p, c;
	cout << "Enter natural numbers N and p\n";
	cin >> N>> p;
	// N=a1*10^k+a2*10^k-1+...+aM;	
	cout << "Number " << N << " without digit " << p << endl;
	cout<< N / ((int)pow(10, p ))*(int)pow(10, p-1) + N % (int)pow(10, p-1) << endl;
	//2) Insert digit c in p-th place
	cin >> N >> p >> c;
	cout << "Number " << N << " with inserted digit " << c << endl<< N / ((int)pow(10, p + 1))*((int)pow(10, p + 2)) + c * (int)pow(10, p+1) + N % ((int)pow(10, p+1)) << endl;
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
