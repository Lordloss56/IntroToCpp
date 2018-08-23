#include<iostream>
#include"student.h"

void printStudent(student target)
{
	std::cout << "ID number: " << target.studentID << std::endl;
	std::cout << "Courses enrolled in: " << target.enrolled << std::endl;
	std::cout << "Last exam score:" << target.scrLTExm<< std::endl;

}

float avgTestScore(student score[], int size)
{
	int sum = 0;

	for (int i = 0; i < size; ++i)
	{
		sum += score[i].scrLTExm;
	}

	return sum / (float)size;
	
}

float medianScore(student score[], int size)
{
	bool swapped = false;
		do 
		{
			for (int i = 0; i < size - 1; ++i)
			{
				if (gradebook[i].lastExamScrore > gradebook[i].lastExamScore)
				{
					student temp = gradebook[i];
					gradebook[i] = gradebook[i + 1];
					gradebook[i + 1] = temp;

					swapped = true;
				}
			}
		} while (swapped == true);

		if ((size % 2) == 0)
		{
			int sume = gradebook[size / 2].lastExameScore + gradebook[size / 2 - 1].lastExamScore;
		}
		else
		{
			return gradebook[size / 2].lastExamScore;
		}

	}
