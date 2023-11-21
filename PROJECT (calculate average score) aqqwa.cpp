/*
Filename:calculate average score.cpp
Programmer:Aqqwa
Matrix programmer:AM2307013932
Programmer description:calculate the average score of 50 students
date:20/11/2023
*/

const int maxStudent = 3;  //declare constant variable

//declare arrays
int studentID[maxStudent];
string studentName[maxStudent];
double scores[maxStudent];
int attendance[maxStudent];

//function to calculate average scores
int main()
{
	double sum = 0;  //declaration variables
    for(int i = 0; i < maxStudent; i++) 
    {
        sum += scores[i];
    }
    
    double average = sum / maxStudent;  //calculate average
    cout << "\nThe total scores is: " << sum << "\n"; //output
	cout << "The average score is: " << average << "\n" << endl; //output
    
    return 0;
}