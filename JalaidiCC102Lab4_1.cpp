#include <iostream>
using namespace std;

int main() {
    bool runAgain = true;

    while (runAgain) {
        int students, quizzes;
        cout << "Enter number of students: ";
        cin >> students;
        cout << "Enter number of quizzes: ";
        cin >> quizzes;

        int scores[50][50];
        double average[50];

        
        for (int i = 0; i < students; i++) {
            cout << "Student " << i + 1 << " scores: ";
            for (int j = 0; j < quizzes; j++) {
                cin >> scores[i][j];
            }
        }

        
        for (int i = 0; i < students; i++) {
            int sum = 0;
            for (int j = 0; j < quizzes; j++) {
                sum += scores[i][j];
            }
            average[i] = sum / (double)quizzes;
        }

        
        cout << "\nStudent";
        for (int j = 0; j < quizzes; j++) {
            cout << "\tQ" << j + 1;
        }
        cout << "\tAverage\n";

        for (int i = 0; i < students; i++) {
            cout << i + 1;
            for (int j = 0; j < quizzes; j++) {
                cout << "\t" << scores[i][j];
            }
            cout << "\t" << average[i] << endl;
        }

        char again;
        cout << "\nRun program again? (y/n): ";
        cin >> again;

        if (again == 'n' || again == 'N') {
            runAgain = false;
        }
    }

    return 0;
}