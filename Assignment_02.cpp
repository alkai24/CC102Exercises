#include <iostream>
#include <vector>
using namespace std;

int main() {
    int students, subjects;

    cout << "How many students? ";
    cin >> students;
    cout << "How many subjects? ";
    cin >> subjects;

    vector<vector<int>> grades(students, vector<int>(subjects));

    cout << "\nLet's enter the grades!\n\n";
    for (int i = 0; i < students; i++) {
        cout << "Student " << i + 1 << ":\n";
        for (int j = 0; j < subjects; j++) {
            cout << "  Subject " << j + 1 << ": ";
            cin >> grades[i][j];
        }
    }

    cout << "\n--- Grade Summary ---\n\n";
    for (int i = 0; i < students; i++) {
        int sum = 0;
        cout << "Student " << i + 1 << " grades: ";
        for (int j = 0; j < subjects; j++) {
            cout << grades[i][j];
            if (j < subjects - 1) cout << ", ";
            sum += grades[i][j];
        }
        double avg = (double)sum / subjects;
        cout << "  →  Average: " << avg << "\n";
    }

    int highest = grades[0][0], hStudent = 1, hSubject = 1;
    for (int i = 0; i < students; i++)
        for (int j = 0; j < subjects; j++)
            if (grades[i][j] > highest) {
                highest = grades[i][j];
                hStudent = i + 1;
                hSubject = j + 1;
            }

    cout << "\nTop score is " << highest
         << ", earned by Student " << hStudent
         << " in Subject " << hSubject << ". Great job!\n";

    return 0;
}