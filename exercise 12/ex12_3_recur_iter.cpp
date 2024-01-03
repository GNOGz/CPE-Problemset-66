#include <iostream>
using namespace std;

int N;

double determinant(double matrix[], int N);

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

double determinant(double matrix[], int N)
{
    if (N == 1)
        return matrix[0];

    double det = 0;
    for (int i = 0; i < N; i++)
    {
        double submatrix[(N - 1) * (N - 1)] = {};
        int subPos = 0;
        for (int p = N; p < N * N; p++)
        {
            if (p % N != i)
            {
                submatrix[subPos] = matrix[p];
                subPos++;
            }
        }
        double val = i % 2 ? -1 : 1;
        val *= matrix[i] * determinant(submatrix, N - 1);
        det += val;
    }
    return det;
}

