#include <iostream>
#include <iomanip>  // Include the <iomanip> library for setw
using namespace std;

const int maxStudent = 3;  //declare constant variable

//declare arrays
int studentID[maxStudent];
string studentName[maxStudent];
double scores[maxStudent];
int attendance[maxStudent];

/*
	Program purpose : To demonstrate user-defined/ programmer-defines function
	Programmer : Nur Izzah Binti Burhanuddin
	Date : 9 Nov 2023

*/
//function to user input student data
void inputStudentData() 
{
    for (int i = 0; i < maxStudent; ++i) 
	{
		//ask user to input data students
        cout << "== Enter details for student " << i + 1 << " : ==\n";

       for (int x =0; x <=0 ; x++)
       {
		   cout << "Student ID: ";
	       cin >> studentID[i];
  		}
    
        cout << "Student Name: ";
        cin >> studentName[i];  //read data to array

        cout << "Scores: ";
        cin >> scores[i];  //read data to array

        cout << "Attendance (%): ";
        cin >> attendance[i];  //read data to array
        cout << "\n";
        
    }
}

/*
	Program purpose : To demonstrate user-defined/ programmer-defines function
	Programmer : Muhammad Nureel Aqqwa bin Hisham
	Date : 20 Nov 2023

*/
//function to calculate average scores
double calculateAverageScores() 
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

/*
	Program purpose : To demonstrate user-defined/ programmer-defines function
	Programmer : Nur Syafiqah binti Samwell
	Date : 20 Nov 2023

*/
//function to calculate highest scores
double highestScores() 
{
	int highest_score_index = 0; //declare variable
	 for (int i = 1; i < maxStudent; i++)
	 {
	 	if (scores[i] > scores[highest_score_index])
        {
            highest_score_index = i;
        }
	 }
	 
	 // Display the student with the highest score
    cout<<"\nStudent with the highest score: "<< endl;
    cout<<"\tStudent ID\t\tName\t\t\tScores"<< endl;
    cout<<"\t"<<studentID[highest_score_index]<<"\t\t\t"<<studentName[highest_score_index]<<"\t\t\t"<<scores[highest_score_index]<< "\n" <<endl;
    
	return highest_score_index;
}

/*
	Program purpose : To demonstrate user-defined/ programmer-defines function
	Programmer : Nurin Irdina binti Mohd Azri
	Date : 20 Nov 2023

*/
//function to display student records
void displayStudentRecords() 
{
    // Display student records
    cout << "STUDENT RECORDS" << endl;

    cout << setw(20) << "STUDENT ID";
	cout << setw(20) << "STUDENT NAME";
	cout << setw(20) << "SCORES";
    cout << setw(20) << "ATTENDANCE" << endl;

    cout << setw(20) << "----------";
    cout << setw(20) << "----------";
    cout << setw(20) << "----------";
    cout << setw(20) << "----------" << endl;

    // Display values using a loop
    for (int i = 0; i < maxStudent; i++)
    {
        cout << setw(20) << studentID[i];
		cout << setw(20) << studentName[i];
		cout << setw(20) << scores[i];
        cout << setw(20) << attendance[i] << endl;
    }
    
    //function call
    highestScores();
}

/*
	Program purpose : To demonstrate user-defined/ programmer-defines function
	Programmer : Simon Goh Wee Hung
	Date : 19 Nov 2023

*/
int main() 
{
	char num;
	do //looping
	{
		cout << "== Student Management System ==" <<endl;
		cout << "Press 1 to Input Student Data" <<endl;
		cout << "Press 2 to Calculate Average Scores" <<endl;
		cout << "Press 3 to Highest Scores" <<endl;
		cout << "Press 4 to Display Student Records" <<endl;
		cout << "Press 5 to Exit" <<endl;
		cout << "Enter : ";
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
			highestScores();
			break;
			
			case '4':
			displayStudentRecords();
			
			case '5':
			exit(0);
			break;
			
			default:
			cout << "\n** Invalid Input **\n" << endl;
			break;
		}
	} while (num!= '5');
	return 0;
}