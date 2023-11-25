#include<iostream>
using namespace std;

int findDivisor(int n){
    int i = 1;
    while (i <= n){
        if(i%n == 0){
            break;
        }
        i++;
    }
    return i ;
}

int main(){
    cout << findDivisor(10);
    return 0;
}