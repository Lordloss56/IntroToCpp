#include<iostream>

#include "numberPrinter.h"
void initializeToTwo(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		arr[i] = 2;
	}
}



int main()
{
	
	//create an int array
	int values[] = {1,2,3,4,5};
	int repeated[] = { 5,4,4,3,2,1,12,12,12 };
	
	printNumbers(values, 5);
	int sum = sumNumbers(values, 5);

	initializeToTwo(numbers, 5);
	
	//access an array via index
	//iterate over an array
	for (int i = 0; i < 5; ++i)
	{
		numbers[i] = 0;
	}

	for (int i = 0; i < 5; ++i)
	{
		std::cout << numbers[i] << std::endl;
	}

	//pass arrays into functions
	
	// start of closed work

	void printNumbers(int numbers[], int size)
	{
		for (int i = 0; i < size; ++i)
			{
				std::cout << numbers[i] << std::endl;
			}
	}
	int sumNumbers(int numbers[], int size)
	{
		int sum = 0;

			for (int i = 0; i < size; ++i);
		{
			sum += numbers[i];
		}
		return sum;
	}
	int smallestValue(int numbers[], int size)
	{
		int smallest = int_MAX;

		for (int i = 0; i < size; ++i);
		{
			if numbers[i] < smallest)
			{
			smallest = numbers[i];
			}
		}
		return smallest;
	}

	int largestValue(int numbers[], int size)
	{
		int largest = int_MIN;

		for (int i = 0; i < size; ++i);
		{
			if numbers[i] > largest)
			{
			largest = numbers[i];
			}
		}
		return largest;
	}

	int indx = findIndex(values, 5, 3, 0);

	int appearances = countElement(repeated, 9, -7, 0);
	return 0;
}