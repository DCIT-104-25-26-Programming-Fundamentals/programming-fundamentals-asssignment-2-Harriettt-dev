#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> tasks;

void addTask()
{
    string task;
    cin.ignore();
    cout << "Enter task: ";
    getline(cin, task);

    tasks.push_back(task);

    cout << "Task added: \"" << task << "\"" << endl;
}

void viewTasks()
{
    if (tasks.size() == 0)
    {
        cout << "No tasks in your to-do list." << endl;
        return;
    }

    cout << "Your Tasks:" << endl;

    for (int i = 0; i < tasks.size(); i++)
    {
        cout << i + 1 << ". " << tasks[i] << endl;
    }
}

void deleteTask()
{
    if (tasks.size() == 0)
    {
        cout << "No tasks to delete." << endl;
        return;
    }

    viewTasks();

    int number;
    cout << "Enter task number to delete: ";
    cin >> number;

    if (number < 1 || number > tasks.size())
    {
        cout << "Invalid task number." << endl;
    }
    else
    {
        cout << "Task \"" << tasks[number - 1] << "\" has been removed." << endl;
        tasks.erase(tasks.begin() + (number - 1));
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n===========================" << endl;
        cout << "      TO-DO LIST MENU" << endl;
        cout << "===========================" << endl;
        cout << "1. Add task" << endl;
        cout << "2. View tasks" << endl;
        cout << "3. Delete task" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addTask();
            break;

        case 2:
            viewTasks();
            break;

        case 3:
            deleteTask();
            break;

        case 4:
            cout << "Goodbye!" << endl;
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 4);

    return 0;
}