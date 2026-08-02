#include <iostream>
using namespace std;

bool isprime(int number)
{
    if (number < 2)
    {
        return false;
    }

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isprime(number))
    {
        cout << number << " is a prime number.";
    }
    else
    {
        cout << number << " is Not a prime number.";
    }

    return 0;
}