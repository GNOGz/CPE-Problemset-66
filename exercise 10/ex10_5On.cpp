#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int N = 15;
    long long S = 1000000000;
    int M = RAND_MAX;
    cout << "Input N: ";
    cin >> N;
    unsigned int count[N] = {0};
    cout << "------------- N = " << N << " ----------------" << endl;
    cout << "------------- S = " << S << " ----------------" << endl;
    for (long long i = 0; i < S;)
    {
        int n = 0;
        int r = 0;
        do
        {
            r = rand() < M / 2 ? 0 : 1;
            n++;
        } while (n < N && r == 0);
        if (r == 1)
        {
            count[n - 1]++;
            i++;
        }
    }

    for (int j = 0; j < N; j++)
    {
        cout << j + 1 << ": " << count[j];
        cout << endl;
    }

    cout << "------------------------------------" << endl
        << endl;
    return 0;
}