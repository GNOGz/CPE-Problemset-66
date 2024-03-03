#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int N, M;
    cin >> M >> N;
    int* V = new int[N + M -1];
    V[0] = 1;
    for(int i = 1; i < M + N - 1; i++){
        if(i < max(N, M)) V[i] = V[i - 1] + min(i + 1, min(N, M));
        else V[i] = V[i - 1] + min(N, M) - (i - max(N, M) + 1);
        if(i % 2 == 0) V[i-1] = V[i - 2] + 1;
    }
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j ++){
            if((i+j) % 2) cout<< setw(8) << V[i + j]++;
            else cout<< setw(8) << V[i + j]-- ;
        }
        cout << "\n";
    }
    delete [] V;
}