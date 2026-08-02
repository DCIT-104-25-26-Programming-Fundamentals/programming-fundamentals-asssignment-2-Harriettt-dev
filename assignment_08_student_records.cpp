#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

struct Student
{
    string name;
    int id;
    vector<double> scores;
};

vector<Student> students;

double average(Student s)
{
    double sum = 0;

    for (int i = 0; i < s.scores.size(); i++)
    {
        sum += s.scores[i];
    }

    return sum / s.scores.size();
}

void addStudent()
{
    Student s;
    int n;

    cin.ignore();
    cout << "Student name: ";
    getline(cin, s.name);

    cout << "Student ID: ";
    cin >> s.id;

    cout << "How many scores? ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        double score;
        cout << "Enter score " << i + 1 << ": ";
        cin >> score;
        s.scores.push_back(score);
    }

    students.push_back(s);

    cout << "Student \"" << s.name << "\" added successfully." << endl;
}

void displayStudents()
{
    if (students.size() == 0)
    {
        cout << "No students added yet." << endl;
        return;
    }

    cout << fixed << setprecision(2);

    for (int i = 0; i < students.size(); i++)
    {
        cout << "\nName: " << students[i].name << endl;
        cout << "ID: " << students[i].id << endl;
        cout << "Scores: ";

        for (int j = 0; j < students[i].scores.size(); j++)
        {
            cout << students[i].scores[j] << " ";
        }

        cout << "\nAverage: " << average(students[i]) << endl;
    }
}

void calculateAverage()
{
    int id;
    bool found = false;

    cout << "Enter student ID: ";
    cin >> id;

    cout << fixed << setprecision(2);

    for (int i = 0; i < students.size(); i++)
    {
        if (students[i].id == id)
        {
            cout << students[i].name << "'s average score: "
                 << average(students[i]) << endl;
            found = true;
            break;
        }
    }

    if (found == false)
    {
        cout << "Student ID not found." << endl;
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n===============================" << endl;
        cout << " STUDENT RECORD SYSTEM MENU" << endl;
        cout << "===============================" << endl;
        cout << "1. Add student" << endl;
        cout << "2. Display all students" << endl;
        cout << "3. Calculate average score" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            calculateAverage();
            break;

        case 4:
            cout << "Goodbye" << endl;
            break;

        default:
            cout << "Invalid choice." << endl;
        }

    } while (choice != 4);

    return 0;
}