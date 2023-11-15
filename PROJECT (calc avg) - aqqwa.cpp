#include <iostream>
using namespace std;

int main() {
    const int numScores = 3;
    double sum = 0;
    for(int i = 0; i < numScores; i++) 
    {
        double score;
        cout << "Enter your score" << (i+1) << ": ";
        cin >> score;
        sum += score;
    }

    double average = sum / numScores;
    cout << "The average score is: " << average << endl;

    return 0;
}