#include <iostream>
using namespace std;

string getGrade(int score)
{
    if (score < 0 || score > 100)
    {
        return "";
    }
    else if (score >= 80)
    {
        return "A";
    }
    else if (score >= 70)
    {
        return "B";
    }
    else if (score >= 60)
    {
        return "C";
    }
    else if (score >= 50)
    {
        return "D";
    }
    else
    {
        return "F";
    }
}

int main()
{
    int score;

    cout << "Enter student score (0-100): ";
    cin >> score;

    string grade = getGrade(score);

    if (grade == "")
    {
        cout << "Error: Score must be between 0 and 100.";
    }
    else
    {
        cout << "Grade: " << grade;
    }

    return 0;
}