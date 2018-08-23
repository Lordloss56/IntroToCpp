#pragma once

void printNumbers(int numbers[], int size);

int sumNumbers(int numbers[], int size);

int smallestValue(int numbers[], int size);

int largestValue(int numbers[], int size);

int findIndex(int numbers[], int size, int value, int start)
{
	for (int i = 0; i < size; ++i)
	{
		if (numbers[i] == value)
		{
			return i;
		}
	}
}

int countElement(int numbers[], int size, int value, int start)
{
	int counter = 0;
	for (int i = start; i < size; ++i)
	{
		if (numbers[i] == value)
		{
			counter++;
		}
	}
	return counter;
}