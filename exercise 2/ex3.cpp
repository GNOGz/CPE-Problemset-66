#include<iostream>
#include <string>
using namespace std;

int main(){
    int a = 3;
    int sum = 0;
    while (a <= 300){
        sum = sum + (a*a);
        a = a+3;
    }
    cout << "total = "<< sum;
    return 0;
}