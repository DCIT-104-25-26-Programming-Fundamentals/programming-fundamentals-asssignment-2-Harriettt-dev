#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void displayMatrix(int matrix[10][10], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << setw(5) << matrix[i][j];
        }
        cout << endl;
    }
}

void transposeMatrix()
{
    int matrix[10][10];
    int rows, cols;

    cout << "\nPART A" << endl;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "\nOriginal Matrix:" << endl;
    displayMatrix(matrix, rows, cols);

    cout << "\nTransposed Matrix:" << endl;
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << setw(5) << matrix[j][i];
        }
        cout << endl;
    }
}

void addMatrices()
{
    int A[10][10], B[10][10], C[10][10];
    int rows, cols;

    cout << "\nPART B - Add Two Matrices" << endl;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    cout << "\nEnter Matrix A:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    cout << "\nEnter Matrix B:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "\nResult of Addition:" << endl;
    displayMatrix(C, rows, cols);
}

void multiplyMatrices()
{
    int A[10][10], B[10][10], C[10][10];
    int rowsA, colsA, rowsB, colsB;

    cout << "\nPART C - Multiply Two Matrices" << endl;

    cout << "Enter rows of Matrix A: ";
    cin >> rowsA;
    cout << "Enter columns of Matrix A: ";
    cin >> colsA;

    cout << "Enter rows of Matrix B: ";
    cin >> rowsB;
    cout << "Enter columns of Matrix B: ";
    cin >> colsB;

    if (colsA != rowsB)
    {
        cout << "Matrix multiplication is not possible." << endl;
        return;
    }

    cout << "\nEnter Matrix A:" << endl;
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsA; j++)
        {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    cout << "\nEnter Matrix B:" << endl;
    for (int i = 0; i < rowsB; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            C[i][j] = 0;

            for (int k = 0; k < colsA; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "\nProduct Matrix:" << endl;
    displayMatrix(C, rowsA, colsB);
}

int main()
{
    transposeMatrix();
    addMatrices();
    multiplyMatrices();

    return 0;
}