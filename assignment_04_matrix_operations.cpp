// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 4
// =============================================================================
//
// TASK: Matrix Operations
//
// Write a C++ program that performs three operations on matrices (2D arrays),
// each implemented in its own function.
//
// NOTE: Use a fixed maximum size of 10 for array dimensions.
//       Declare arrays as int matrix[10][10].
//
// -----------------------------------------------------------------------------
// PART A — Transpose a Matrix
// -----------------------------------------------------------------------------
// - Read an M x N matrix from the user.
// - Compute and display its transpose (rows become columns, columns become rows).
//
// Example (2 x 3 input):
//
//   Original Matrix:      Transposed Matrix:
//   1  2  3               1  4
//   4  5  6               2  5
//                         3  6
//
// -----------------------------------------------------------------------------
// PART B — Add Two Matrices
// -----------------------------------------------------------------------------
// - Read two matrices of exactly the same size (M x N).
// - Compute their element-wise sum and display the result.
//
// -----------------------------------------------------------------------------
// PART C — Multiply Two Matrices
// -----------------------------------------------------------------------------
// - Read matrix A of size M x N and matrix B of size N x P.
//   (Number of COLUMNS in A must equal number of ROWS in B.)
// - Compute and display the matrix product A x B (result is M x P).
//
// -----------------------------------------------------------------------------
// EXPECTED INPUT FORMAT
// -----------------------------------------------------------------------------
// The user enters each row's values one at a time:
//
//   Enter number of rows: 2
//   Enter number of columns: 3
//   Enter element [0][0]: 1
//   Enter element [0][1]: 2
//   ...
//
// -----------------------------------------------------------------------------
// REQUIREMENTS
// -----------------------------------------------------------------------------
// - Use nested loops for all operations (no external libraries).
// - Each operation must be in its own function (see scaffold below).
// - Display each matrix in a neat, aligned grid using setw().
// - Tip: Complete Part A first, then Parts B and C.
//

// =============================================================================
// YOUR CODE BELOW — remove the // symbols from the scaffold and fill it in
// =============================================================================

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;



// Function to display a matrix
(int matrix[10][10], int rows, int cols)
{
  for(int i = 0; i < rows; i++)
    { for(int j = 0; j < cols; j++)
      { cout << setw(5) << matrix[i][j];}
        cout << endl; }
}

// Part A 
null transposeMatrix()
{
    int matrix[10][10];
    int rows, cols;

    cout << "\nPART A " << endl;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    for(int i = 0; i < rows; i++)
    { for(int j = 0; j < cols; j++)
        { cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "\nOriginal Matrix:" << endl;
    displayMatrix(matrix, rows, cols);

    cout << "\nPart A:" << endl;
    for(int i = 0; i < cols; i++)
    {
        for(int j = 0; j < rows; j++)
        { cout << setw(5) << matrix[j][i]; }
        cout << endl;
    }
}

// Part B - Add two matrices
null addMatrices()
{
    int A[10][10], B[10][10], C[10][10];
    int rows, cols;

    cout << "\nPART B - Add Two Matrices" << endl;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    cout << "\nEnter Matrix A:" << endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        { cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> A[i][j]; }
    }

    cout << "\nEnter Matrix B:" << endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "\nResult of Addition:" << endl;
    displayMatrix(C, rows, cols);
}

// Part C - Multiply two matrices
null multiplyMatrices()
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

    if(colsA != rowsB)
    {
        cout << "Matrix multiplication is not possible." << endl;
        return;
    }

    cout << "\nEnter Matrix A:" << endl;
    for(int i = 0; i < rowsA; i++)
    {
        for(int j = 0; j < colsA; j++)
        {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    cout << "\nEnter Matrix B:" << endl;
    for(int i = 0; i < rowsB; i++)
    {
        for(int j = 0; j < colsB; j++)
        {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }

    for(int i = 0; i < rowsA; i++)
    {
        for(int j = 0; j < colsB; j++)
        {
            C[i][j] = 0;

            for(int k = 0; k < colsA; k++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    cout << "\nProduct Matrix:" << endl;
    displayMatrix(C, rowsA, colsB);
}

int main()
{
    PartA();
    addMatrices();
    multiplyMatrices();

    return 0;
}

