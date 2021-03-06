/* ReverseArrayPointer.cpp : This program passes an original array to function, where it sets the contents inside it equal to a pointer array
	and then reverses the content of the pointer array and displays the content to the screen.
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

//Declare prototype
void reverse_array(int[], const int);

/*
	This function loops through the original array and displays it to the screen.  It then calls the reverse_array function 
	to display the array reversed.
*/
int main()
{
	//Declare local variables
	const int SIZE = 5;
	int orginalArray[SIZE] = { 10,20,30,40,50 };

	//Loop through the array and display it to the screen
	cout << "Original Array: ";
	for (int i = 0; i<5; i++) {
		cout << orginalArray[i] << ", ";
	}

	//Call the reverse_array fuction
	reverse_array(orginalArray, SIZE);
}

/*
	This function takes a pointer array and sets it equal to the original array that was passed in.  Then, it reverses the contents 
	inside the array and displays it to the screen.
*/
void reverse_array(int paramArray[], const int ARRAY_SIZE) {

	//Declare local variables
	int * pointerA = nullptr;
	pointerA = new int[ARRAY_SIZE];

	//Loop through the original array and set it equal to the contents of the original array
	for (int i = 0; i<ARRAY_SIZE; i++)
	{
		*(pointerA + i) = paramArray[i];
	}

	//Loop throgh and reverse the contents of the pointer array
	for (int i = 0; i<ARRAY_SIZE; i++)
	{
		*(pointerA + i) = *(paramArray + (ARRAY_SIZE - i - 1));
	}

	cout << endl << "Reversed Array: ";

	//Display the contents of the pointer array
	for (int i = 0; i<ARRAY_SIZE; i++)
	{
		cout << *(pointerA + i) << ", ";
	}
}



