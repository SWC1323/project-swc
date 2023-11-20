/*
Filename:calculate average score.cpp
Programmer:Aqqwa
Matrix programmer:AM2307013932
Programmer description:calculate the average score of 50 students
date:15/11/2023
*/

#include <iostream> // Include the iostream library for input/output operations
using namespace std; // Use the standard namespace

const int maximum = 50; // Define a constant for the maximum number of students
int studentID[maximum]; // Array to store student IDs
string studentNAME[maximum]; // Array to store student names
double scores[maximum]; // Array to store student scores
int overallStudent = 0; // Variable to keep track of the total number of students
double averageofStudent = 0.0; // Variable to store the average score of students

// Function to calculate the average score of students
double calculateStudentAverageScores()
{
    double sum = 0.0; // Variable to store the sum of scores
    for(int i = 0; i < overallStudent; i++) // Loop through each student
    {
        sum += scores[i]; // Add the score of the current student to the sum
    }
    if(overallStudent > 0) // Check if the number of students is greater than 0
    {
       averageofStudents = sum / overallStudent; // Calculate the average score
    }
    cout << "Average score of students: " << averageofStudents << endl; // Print the average score
    return averageofStudents; // Return the average score
}