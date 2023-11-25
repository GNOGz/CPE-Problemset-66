#include<iostream>
using namespace std;

int findDivisor(int n){
    int i = 2;
    while (i <= n+1){
        if(n%i == 0){
            break;
        }
        i++;
    }
    return i ;
}

int main(){
    cout << findDivisor(221);
    return 0;
}