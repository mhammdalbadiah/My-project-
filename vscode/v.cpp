#include <iostream>
using namespace std;

int main() {
    int numSubjects;


    cout << "enter the number of subjects : " << endl;
    cin >> numSubjects;

    double grades[100][6];
    double totalGrades[100];
     
     cout << "enter your grades : " << endl;
    for (int s = 0; s < numSubjects; s++) {
        for (int j = 0; j < 6; j++) {
            
            cin >> grades[s][j];
            cout<< "subject : " <<grades[s] << "mark : " << grades[j]  << endl;
        }           

        for (int j = 0; j < 6; j++) {
            totalGrades[s] += grades[s][j];
        totalGrades[s] = 0;
        }
    }

    for (int i = 0; i < numSubjects; i++) {


        cout << "Subject " << i + 1 << " total = " << totalGrades[i] << " | Grade: ";

        double g = totalGrades[i];
        if (g >= 97)
            cout << "A+";
        else if (g >= 93)
            cout << "A";
        else if (g >= 87)
            cout << "B+";
        else if (g >= 83)
            cout << "B";
        else if (g >= 77)
            cout << "C+";
        else if (g >= 73)
            cout << "C";
        else if (g >= 67)
            cout << "D+";
        else if (g >= 60)
            cout << "D";
        else
            cout << "F";

        cout << "\n";
    }

    return 0;
}
