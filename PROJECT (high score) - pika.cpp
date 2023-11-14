#include <iostream>
using namespace std;

int main ()
{
	//declaration constant value
	const int maxStudent = 50;
	
	//declaration of arrays
	int studentID [maxStudent] = {0};
	string studentName [maxStudent];
 	double scores [maxStudent] = {0.0};	
 	int i, x;                         
 	
 	//input data into the array 
 	for (i = 0; i<maxStudent; i++)
 	{	
 		cout<<"Enter Student's ID for student "<<i+1<<" : ";
 		cin>>studentID[i]; //read data into array
 		
 		cout<<"Enter Student's Name for student "<<i+1<<" : ";
 		cin>>studentName[i]; //read data into array
 		
 		cout<<"Enter Student's scores for student "<<i+1<<": ";
 		cin>>scores[i]; //read data into array 	
		 cout << "\n";	
	 }
	 
	 cout<<"\nList of students' scores: "<<endl;
	 
	 cout<<"\tStudent ID\t\tName\t\t\tScores"<<endl;
	 
	 //print the data in the array 
	 for (x = 0; x<maxStudent; x++)
	 {
	 	i=x;
	 	cout<<i+1<<".\t"<<studentID[x]<<"\t\t\t"<<studentName[x]<<"\t\t\t"<<scores[x]<<endl;
	 }
	 
	 //find the student with the highest scores
	 int highest_score_index = 0;
	 
	 for (i = 1; i < maxStudent; i++)
	 {
	 	if (scores[i] > scores[highest_score_index])
        {
            highest_score_index = i;
        }
	 }
	
	// Display the student with the highest score
    cout<<"\nStudent with the highest score: "<< endl;
    cout<<"\tStudent ID\t\tName\t\t\tScores"<< endl;
    cout<<"\t"<<studentID[highest_score_index]<<"\t\t\t"<<studentName[highest_score_index]<<"\t\t\t"<<scores[highest_score_index]<<endl;
	
	return 0;
 }