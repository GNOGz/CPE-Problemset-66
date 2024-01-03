#include <iostream>
#include <cmath>
using namespace std;

int N;

double determinant(double matrix[], int N, int x = 0);

int main()
{
    cout << "Please input matrix size: ";
    cin >> N;
    double matrix[N * N] = {};
    for (int i = 0; i < N; i++)
    {
        cout << "Input elements of row " << i + 1 << ": ";
        for (int j = 0; j < N; j++)
        {
            cin >> matrix[i * N + j];
        }
    }
    cout << determinant(matrix, N);
}

double determinant(double matrix[], int N, int x)
{
    if (N == 1)
        return matrix[0];

    double submatrix[(N - 1) * (N - 1)] = {};
    int subPos = 0;
    for (int p = N; p < N * N; p++)
    {
        if (p % N != x)
        {
            submatrix[subPos] = matrix[p];
            subPos++;
        }
    }

    if (x == N - 1)
        return pow(-1, x) * matrix[x] * determinant(submatrix, N - 1);

    return determinant(matrix, N, x + 1) + pow(-1, x) * matrix[x] * determinant(submatrix, N - 1);
}