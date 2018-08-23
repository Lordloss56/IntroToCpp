#pragma once
struct student
{
	int studentID;

	int enrolled;
	//scrLTExm = score of last exam
	int scrLTExm; 


};

void printStudent(student target);

float avgTestScore(student score[], int size);
float medianScore(student score[], int size);
int gwtEnrolledStudentCount(student roster[], int size);

