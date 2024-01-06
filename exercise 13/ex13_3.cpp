#include <iostream>
using namespace std;
const int N = 4;
void inputMatrix(double[][N]);
void matrixMultiply(const double[][N], const double[][N], double[][N]);
void showMatrix(const double[][N]);
int main()
{
    double A[N][N], B[N][N], C[N][N];
    cout << "Input the first matrix.....\n";
    inputMatrix(A);
    cout << "Input the second matrix.....\n";
    inputMatrix(B);
    matrixMultiply(A, B, C);
    cout << "Result is \n";
    showMatrix(C);
    return 0;
}

void inputMatrix(double matrix[][N])
{
    for (int i = 0; i < N; i++)
    {
        cout << "Row " << i + 1 << ": ";
        for (int j = 0; j < N; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

void showMatrix(const double matrix[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void matrixMultiply(const double matrixA[][N], const double matrixB[][N], double resultMatrix[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < N; k++)
            {
                resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
}
