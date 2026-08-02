#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    return a / b;
}

int modulus(int a, int b)
{
    return a % b;
}

double power(double a, double b)
{
    return pow(a, b);
}

int main()
{
    int choice;
    double num1, num2;

    cout << fixed << setprecision(2);

    do
    {
        cout << "\n============================\n";
        cout << "    SIMPLE CALCULATOR\n";
        cout << "============================\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Modulus\n";
        cout << "6. Exponentiation\n";
        cout << "7. Quit\n";
        cout << "Select an operation (1-7): ";
        cin >> choice;

        if (choice == 7)
        {
            cout << "Goodbye!" << endl;
            break;
        }

        if (choice < 1 || choice > 7)
        {
            cout << "Invalid choice." << endl;
            continue;
        }

        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        switch (choice)
        {
        case 1:
            cout << "Result: " << add(num1, num2) << endl;
            break;

        case 2:
            cout << "Result: " << subtract(num1, num2) << endl;
            break;

        case 3:
            cout << "Result: " << multiply(num1, num2) << endl;
            break;

        case 4:
            if (num2 == 0)
                cout << "Error: Cannot divide by zero." << endl;
            else
                cout << "Result: " << divide(num1, num2) << endl;
            break;

        case 5:
            if ((int)num2 == 0)
                cout << "Error: Cannot divide by zero." << endl;
            else
                cout << "Result: " << modulus((int)num1, (int)num2) << endl;
            break;

        case 6:
            cout << "Result: " << power(num1, num2) << endl;
            break;
        }

    } while (true);

    return 0;
}