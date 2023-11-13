#include <iostream>
#include <string>
using namespace std;

const int maxStudent = 3;  //declare constant variable

//declare arrays
int studentID[maxStudent];
string studentName[maxStudent];
double scores[maxStudent];
int attendance[maxStudent];

//function to user input student data
void inputStudentData() 
{
    for (int i = 0; i < maxStudent; ++i) 
	{
        cout << "== Enter details for student " << i + 1 << " : ==\n";

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
}

//function to calculate average scores
double calculateAverageScores() 
{
    double totalScores = 0;
    for (int i = 0; i < maxStudent; ++i) {
        totalScores += scores[i];
    }

    return (totalScores / maxStudent);
}

//function to calculate highest scores
void calculateHighestScores() 
{
	int highest_score_index = 0;
	 for (int i = 1; i < maxStudent; i++)
	 {
	 	if (scores[i] > scores[highest_score_index])
        {
            highest_score_index = i;
        }
	 }
	
}

//function to display student records
void displayStudentRecords() 
{
    cout << "\nStudent Records:\n";
    cout << "----------------------------------------------\n";
    cout << "ID\tName\tScores\tAttendance\n";
    cout << "----------------------------------------------\n";

    for (int i = 0; i < maxStudent; ++i) 
	{
        cout << studentID[i] << "\t" << studentName[i] << "\t" << scores[i] << "\t" << attendance[i] << "%\n";
    }

    cout << "----------------------------------------------\n";
    cout << "Average Scores: " << calculateAverageScores << "\n";
}

int main() 
{
	char num;
	do 
	{
		cout << "== Pilih anjirr drpd yg aku da list ni ==" <<endl;
		cout << "Press 1 to Input Student Data" <<endl;
		cout << "Press 2 to Calculate Average Scores" <<endl;
		cout << "Press 3 to Calculate Highest Scores" <<endl;
		cout << "Press 4 to Display Student Records" <<endl;
		cout << "Press 5 to Exit" <<endl;
		cin >> num;
		
		switch (num)
		{
			case '1':
			inputStudentData();
			break;
			
			case '2':
			calculateAverageScores();
			break;
			
			case '3':
			inputStudentData();
			break;
			
			case '4':
			displayStudentRecords();
			
			case '5':
			exit(0);
			break;
			
			default:
			cout << "*** Invalid Input ***" << endl;
			break;
		}
	} while (num!= '5');
	
	return 0;
}
