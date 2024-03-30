#include<iostream>
#include <string>
using namespace std;
int main(){
    float a = 1;
    float b = 2;
    float sum = 0;
    while (b <= 1000){
        sum = sum + (a/b);
        a = a+2;
        b = b+2;
    }
    cout << "total = "<< sum ;
    return 0;
}