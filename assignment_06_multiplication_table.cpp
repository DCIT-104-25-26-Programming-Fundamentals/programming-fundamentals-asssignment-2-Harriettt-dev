#include <iostream>
using namespace std;

void singleTable(int num)
{
    cout << "\nMultiplication Table for " << num << ":" << endl;

    for (int i = 1; i <= 12; i++)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

void allTables(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << "\nMultiplication Table for " << i << ":" << endl;

        for (int j = 1; j <= 12; j++)
        {
            cout << i << " x " << j << " = " << i * j << endl;
        }

        cout << "------------------------" << endl;
    }
}

int main()
{
    int num, n;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 0)
    {
        cout << "Error: Enter a positive number." << endl;
        return 0;
    }

    singleTable(num);

    cout << "\nEnter a number N: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Error: Enter a positive number." << endl;
        return 0;
    }

    allTables(n);

    return 0;
}