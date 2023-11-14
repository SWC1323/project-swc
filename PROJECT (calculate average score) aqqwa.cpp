/*
Filename:calculate average score.cpp
Programmer:Aqqwa
Matrix programmer:AM2307013932
Programmer description:calculate the average score of 50 students
date:15/11/2023
*/

#include <iostream> // Include the iostream library
using namespace std; // Use the standard namespace

int main() {    // Begin block
    // Declare a constant integer for the number of scores
    const int numScores = 50;
    // Declare a variable to hold the sum of the scores
    double sum = 0;
    // Start a loop that runs for each score
    for(int i = 0; i < numScores; i++)
    {
        // Declare a variable to hold the current score
        double score;
        // Prompt the user to enter their score
        cout << "Enter your score" << (i+1) << ":";
        // Read the score from the user
        cin >> score;
        // Add the score to the sum
        sum += score;
    }

    // Calculate the average score
    double average = sum / numScores;   
    // display the average score
    cout << "The average score is: " << average << endl;

    return 0;
}   // End block