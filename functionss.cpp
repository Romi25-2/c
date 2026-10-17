#include <iostream>
using namespace std;

int calculateAverage(int Assign, int catest, int exam) {
    int total = Assign + catest + exam;
    return total / 3;
}

string evaluateGrade(int mark) {
    if (mark >= 75)
        return "Distinction";
    else if (mark >= 50)
        return "Pass";
    else
        return "Fail";
}

void Display(string name, int Assign, int catest, int exam) {
    int average = calculateAverage(Assign, catest, exam);
    string grade = evaluateGrade(average);

    cout << "\n==== STUDENT RESULT ====" << endl;
    cout << "Name: " << name << endl;
    cout << "Assignment: " << Assign << endl;
    cout << "CA Test: " << catest << endl;
    cout << "Exam: " << exam << endl;
    cout << "Average: " << average << endl;
    cout << "Grade: " << grade << endl;
}

int main() {
    string name;
    int Assign, catest, exam;

    cout << "Enter Student Name (or type 'exit' to stop): ";
    cin >> name;

    while (name != "exit") {
        cout << "Enter Assignment Mark: ";
        cin >> Assign;

        cout << "Enter CA Test Mark: ";
        cin >> catest;

        cout << "Enter Exam Mark: ";
        cin >> exam;

        Display(name, Assign, catest, exam);

        cout << "\nEnter next Student Name (or type 'exit' to stop): ";
        cin >> name;
    }

    cout << "\nProgram terminated." << endl;
    return 0;
}
