#include <iostream>
using namespace std;

void printFibonacci(int n)
{
    int a = 0, b = 1, c;

    cout << "Fibonacci sequence: ";

    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";

        c = a + b;
        a = b;
        b = c;
    }

    cout << endl;
}

void checkFibonacci(int num)
{
    int a = 0, b = 1, c;

    while (a < num)
    {
        c = a + b;
        a = b;
        b = c;
    }

    if (a == num)
    {
        cout << num << " is a Fibonacci number." << endl;
    }
    else
    {
        cout << num << " is NOT a Fibonacci number." << endl;
    }
}

int main()
{
    int n, num;

    cout << "How many terms? ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Error: Enter a positive number." << endl;
        return 0;
    }

    printFibonacci(n);

    cout << "\nEnter a number to check: ";
    cin >> num;

    checkFibonacci(num);

    return 0;
}