#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    string course;
    double gpa;
};

void input(int num, Student obj[]) {
    for (int i = 0; i < num; i++) {
        do {
            cout << "Student ID: ";
            cin >> obj[i].id;
            cin.ignore();
            if (i > 0 && obj[i - 1].id == obj[i].id) {
                cout << "Student already exists!\n";
            }
        } while (i > 0 && obj[i - 1].id == obj[i].id);
        cout << "Name: ";
        getline(cin, obj[i].name);
        cout << "Course: ";
        getline(cin, obj[i].course);
        do {
            cout << "GPA: ";
            cin >> obj[i].gpa;
            cin.ignore();
            if (obj[i].gpa < 0 || obj[i].gpa > 100) {
                cout << "0 to 100 only\n";
            }
        } while (obj[i].gpa < 0 || obj[i].gpa > 100);
        cout << endl;
    }
}

void display(int num, Student obj[]) {
    cout << "Student ID\tName\t\tCourse\t\tGPA\t\tStanding\n";
    cout << "==========================================================================\n";
    for (int i = 0; i < num; i++) {
        cout << obj[i].id << "\t\t";
        cout << obj[i].name << "\t\t";
        cout << obj[i].course << "\t\t";
        cout << obj[i].gpa << "\t\t";
        if (obj[i].gpa >= 90 && obj[i].gpa <= 100)
            cout << "Excellent\n";
        else if (obj[i].gpa >= 80)
            cout << "Very Good\n";
        else if (obj[i].gpa >= 70)
            cout << "Good\n";
        else if (obj[i].gpa >= 60)
            cout << "Passing\n";
        else
            cout << "Failed\n";
        cout << endl;
    }
    cout << "==========================================================================\n";
}

int main() {
    char choice;
    do {
        int num;
        cout << "How many students: ";
        cin >> num;
        cin.ignore();
        Student obj[num];
        input(num, obj);
        display(num, obj);
        cout << "Try again? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}
