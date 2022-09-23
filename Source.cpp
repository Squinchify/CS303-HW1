/*
Jesse Gonzalez
Due date: 9/23/2022
Computer Science 303
Programming Assignment 1
*/

#include <iostream>
#include "FUNCTIONS.h"
#include <string>
#include <fstream>
using namespace std;


const int INDEX = 100;

int main() {
	//variables to open a text file
	string file = "readin.txt";
	ifstream inFile;
	inFile.open(file);

	//runner is the main array
	int runner[INDEX] = { 0 };
	//temp will be used for new arrays to be passed back into
	int temp[INDEX + 1] = { 0 };
	//if file has successfully opened
	if (inFile.is_open())
	{
		//read in inputs from readin.txt and insert them into index's of runner
		for (int i = 0; i < INDEX; i++)
		{
			inFile >> runner[i];
			cout << runner[i] << " ";
		}
	}
	else
	{
		cout << "File can't open" << endl;
	}


	//traverse 2d array
	for (int i = 0; i < INDEX; i++)
	{
		cout << runner[i] << " ";
	}
	cout << endl;

	isIntegerThere(2, runner, INDEX);
	runner[INDEX] = modifyInteger(2, runner, 74, INDEX);
	temp[INDEX + 1] = addInteger(66, runner, INDEX);
	temp[INDEX + 1] = zeroInteger(1, temp, INDEX + 1);

	inFile.close();

	return 0;
}

