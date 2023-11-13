/*
	File : studentInput.cpp
	Programmer : Ezzah
	Date : 9 November 2023
	Description : Write a function named inputStudentData() to collect user input for student ID, student name, 
	              scores, and attendance (% of the student’s attendance). Store this input into the corresponding arrays.
*/

#include <iostream>
using namespace std;

int main ()
{
	//declare const variables;
	const int maxStudent = 50;
	
	//declare all variables and array
	int studentID[maxStudent], attendance[maxStudent];
	string studentName[maxStudent];
	double scores[maxStudent];
	
    for (int i = 0; i < maxStudent; ++i) // i represent total student
	{
		//users input data
        cout << "Enter details for student " << i + 1 << " :\n";

        cout << "Student ID: ";
        cin >> studentID[i];
        cout << "Student Name: ";
        cin >> studentName[i];
        cout << "Scores: ";
        cin >> scores[i];
        cout << "Attendance (%): ";
        cin >> attendance[i];
        cout << "\n";
        
    }
    
    //display student data
    cout << "\nStudent Records:\n";
    cout << "----------------------------------------------\n";
    cout << "ID\tName\tScores\tAttendance\n";
    cout << "----------------------------------------------\n";

    for (int i = 0; i < maxStudent; ++i) 
        cout << studentID[i] << "\t" << studentName[i] << "\t" << scores[i] << "\t" << attendance[i] << "%\n";
    
    return 0;
}
