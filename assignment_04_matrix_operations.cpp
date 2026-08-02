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
const int MAX = 10;
void printMatrix(int matrix[MAX][MAX], int rows, int cols, string title) {
    cout << "\n" << title << ":\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << setw(5) << matrix[i][j];
        }
        cout << endl;
    }
}
void readMatrix(int matrix[MAX][MAX], int rows, int cols, string name) {
    cout << "Enter number of rows for " << name << ": \n ";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element [" << i << "][" << j << "] : ";
            cin >> matrix[i][j];
        }
    }
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}
void transposeMatrix() {
    int matrix[MAX][MAX], transposed[MAX][MAX];
    int rows, cols;
    cout << "\n--- PART A — Transpose a Matrix ---\n";
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    readMatrix(matrix, rows, cols, "Original Matrix");
    printMatrix(matrix, rows, cols, "Original Matrix");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            transposed[i][j] = matrix[j][i];
        }
    }
    printMatrix(transposed, cols, rows, "Transposed Matrix");
}
void addMatrices() {
    int matrix1[MAX][MAX], matrix2[MAX][MAX], sum[MAX][MAX];
    int rows, cols;
    cout << "\n--- PART B — Add Two Matrices ---\n";
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    readMatrix(matrix1, rows, cols, "Matrix 1");
    readMatrix(matrix2, rows, cols, "Matrix 2");
    printMatrix(matrix1, rows, cols, "Matrix 1");
    printMatrix(matrix2, rows, cols, "Matrix 2");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printMatrix(sum, rows, cols, "Sum of Matrices");
}
void multiplyMatrices() {
    int matrixA[MAX][MAX], matrixB[MAX][MAX], product[MAX][MAX];
    int m, n, p;
    cout << "\n--- PART C — Multiply Two Matrices ---\n";
    count << "for matrix A (M x N) and matrix B (N x P):\n";
    cout << "Enter number of rows for Matrix A: ";
    cin >> m;
    cout << "Enter number of columns for Matrix A / rows for Matrix B: ";
    cin >> n;
    cout << "Enter number of columns for Matrix B: ";
    cin >> p;
    readMatrix(matrixA, m, n, "Matrix A");
    readMatrix(matrixB, n, p, "Matrix B");
printMatrix(matrixA, m, n, "Matrix A");
printMatrix(matrixB, n, p, "Matrix B");
for (int i = 0; i < m; i++) {
    for (int j = 0; j < p; j++) {
        result[i][j] = 0;
        {
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < p; j++) {
                for (int k = 0; k < n; k++) {
                    result[i][j] += matrixA[i][k] * matrixB[k][j];
                }
            }
        }
        printMatrix(result, m, p, "Product of A and B");
    }
int main() {
    count << "\n==================";
    count << "\n MATRIX OPERATIONS";
    count << "\n==================\n";
    count << "\n1. Transpose a Matrix";
    count << "\n2. Add Two Matrices";
    count << "\n3. Multiply Two Matrices";
    count << "\n4. Exit";
    count << "\n\nEnter your choice (1-4): ";
    cin >> choice;
if (choice == 1) {
    transposeMatrix();
    } else if (choice == 2) {
        addMatrices();
    } else if (choice == 3) {
        multiplyMatrices();
    } else if (choice == 4) {
        cout << "Goodbye!" << endl; break;
    } else {
        cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
    }
    {
    return 0;
}