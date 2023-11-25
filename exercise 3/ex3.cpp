#include <iostream>
using namespace std;

int greatDivior (int n){
    int i = n-1;
    while ( i > 1){
        if (n%i == 0){
            break;
        }
    i--;
    }
    return i;
}

int main (){
    cout<< greatDivior(91);
    return 0;
}