#include <iostream>
#include "FUNCTIONS.h"
using namespace std;

/* a function that will traverse the array passed into it with the value the user is looking for
and if found, will output the found array at the index found */
void isIntegerThere(const int TARGET, int array[], const int ARRSIZE)
{
	//flag utilized to help display error message if never turned true
	bool isThere = false;
	for (int i = 0; i < 10; i++)
	{
		//if search is found at position i, it will output the value and at what index
		if (TARGET == array[i])
		{
			cout << "Value " << TARGET << " found at index " << i << endl;
			isThere = true;
		}
	}
	//error message
	if (isThere == false)
		cout << "Unable to find " << TARGET << " in the index." << endl;
	return;
}
/* modifyInteger is very similar to isIntegerThere with a few differences, it still runs through the array
looking for a specific integer but it will now instead of reporting back that it is indeed there, modify
the integer to what the user wants it to be, then show it to the user
*/

int modifyInteger(const int TARGET, int array[], const int TOMOD, const int ARRSIZE)
{
	//boolean variable to indicate wether an integer has been modified
	bool isModded = false;
	//using search to find the value needed in the array
	for (int i = 0; i < ARRSIZE; i++)
	{
		//if search is found at this position, it will output the value and at what index
		if (TARGET == array[i])
		{
			array[i] = TOMOD;
			cout << "Value " << TARGET << " found at index " << i << " is now " << TOMOD << endl;
			isModded = true;
		}
	}
	if (isModded == false)
	{
		cout << "Unable to find the integer to be modified." << endl;
	}
	return array[ARRSIZE];
}

/* addInteger will take the number wanting to be added into a new array at the end of the
index, temp, to return to the user
*/
int addInteger(const int ADDNUM, int array[], int arrSize)
{
	//utilizing the counter "i" to determine the size of our index in array "temp"
	int i = 0;
	//temp will be returned so that the array will keep the added integer
	int temp[101] = { 0 };
	for (i = 0; i < arrSize; i++)
	{
		//filling in temp with the passed through array's index values
		temp[i] = array[i];
		//if i reaches the end of the index, add the paramater ADDNUM to the end of temp
		if (i = arrSize - 1)
		{
			temp[i + 1] = ADDNUM;
		}
	}
	cout << endl;
	return temp[i + 1];
}

/* This function takes the index number that the user wants zeroed in the array, finds it,
then changes the value in that index to zero.
array is being returned since the values in the index have changed.
*/
int zeroInteger(const int INDEX, int array[], const int ARRSIZE)
{
	bool found = false;
	for (int i = 0; i < ARRSIZE; i++)
	{
		//if i is equal to INDEX in array do this
		if (i == INDEX)
		{
			array[i] = 0;
			cout << "Index at position " << INDEX << " has been changed to zero." << endl;
			//helps control error message
			found = true;
		}
	}
	if (found = false)
		cout << "Unable to find that index position." << endl;

	return array[ARRSIZE];
}