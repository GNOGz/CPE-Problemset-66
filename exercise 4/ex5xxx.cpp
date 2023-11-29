#include<iostream>
using namespace std;

int main(){
    int A[10];
    int i = 0;
    while(i < 10){
        if (i%2 == 0) A[i++] = i;
        else          A[i++] = -1 * i;
    }

    while(i > 0){
        cout << A[10 - i--] << " ";
    }
    return 0;
}