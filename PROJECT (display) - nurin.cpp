#include <iostream>
#include <iomanip>  // Include the <iomanip> library for setw

using namespace std;

struct student
{
    char name[50];
    float marks;
} s[3];  // Increase the array size to match the number of students you want to input

int main()
{
    cout << "Enter student records" << endl;

    // storing records
    for (int i = 0; i < 50; ++i)
    {
        cout << "For student " << i + 1 << "." << endl;

        cout << "Enter name: ";
        cin >> s[i].name;

        cout << "Enter marks: ";
        cin >> s[i].marks;
    }

    // Display student records
    cout << "STUDENT RECORDS" << endl;

    cout << setw(20) << "NAME";
    cout << setw(20) << "MARKS" << endl;

    cout << setw(20) << "----------";
    cout << setw(20) << "----------" << endl;

    // Display values using a loop
    for (int i = 0; i < 50; i++)
    {
        cout << setw(20) << s[i].name;
        cout << setw(20) << s[i].marks << endl;
    }

    return 0;
}