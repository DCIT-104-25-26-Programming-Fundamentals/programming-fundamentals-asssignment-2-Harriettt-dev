#include <iostream>
using namespace std;

int findSum(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

double findAverage(int arr[], int n)
{
    int sum = findSum(arr, n);
    return (double)sum / n;
}

int findMaximum(int arr[], int n)
{
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int findMinimum(int arr[], int n)
{
    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int main()
{
    int n;

    cout << "How many numbers? ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Error: Number of values must be positive." << endl;
        return 0;
    }

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "\nResults:" << endl;
    cout << "Sum: " << findSum(arr, n) << endl;
    cout << "Average: " << findAverage(arr, n) << endl;
    cout << "Maximum: " << findMaximum(arr, n) << endl;
    cout << "Minimum: " << findMinimum(arr, n) << endl;

    return 0;
}