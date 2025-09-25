#include <iostream>

using std::cin;
using std::cout;
using std::string;

const int MAX_SIZE = 10;

void matrixInput(int matrix[][MAX_SIZE], int rows, int cols, string name)
{
    cout << "\n\nEnter elements of " << name << " matrix\n\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
};

void displayMatrix(int matrix[][MAX_SIZE], int rows, int cols, string name)
{
    cout << "\n\n"
         << name << " Matrix:\n\n";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << "\t";
        }

        cout << "\n";
    }
};

int addMatrix(int matrix1[][MAX_SIZE], int matrix2[][MAX_SIZE],
              int result[][MAX_SIZE], int rows, int cols)
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
};

int main()
{

    int rows, cols;
    int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE],
        result[MAX_SIZE][MAX_SIZE];

    cout << "\n\n========== MATRIX CALCULATOR ==========\n\n";

    cout << "Enter the number or rows (max 10): ";
    cin >> rows;

    cout << "Enter the number or columns (max 10): ";
    cin >> cols;

    if (rows > MAX_SIZE || cols > MAX_SIZE || rows < 1 || cols < 1)
    {

        cout << "\n\nInvalid dimensions! Matrix max size is 10x10\n\n";

        return 1;
    };

    matrixInput(matrix1, rows, cols, "first");
    matrixInput(matrix2, rows, cols, "second");

    addMatrix(matrix1, matrix2, result, rows, cols);

    displayMatrix(matrix1, rows, cols, "First");
    displayMatrix(matrix2, rows, cols, "Second");
    displayMatrix(result, rows, cols, "Result (Sum)");

    return 0;
}