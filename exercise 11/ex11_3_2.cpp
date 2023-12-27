#include<iostream>
#include<cmath>
using namespace std;
double superSquareRoot(int); //ตอนประกาศPrototype Function ละชื่อตัวแปรได้จร้า
int main(){
    cout << superSquareRoot(3);
    return 0;
}

double superSquareRoot(int n){
    double sum = 1.0;
    if( n >= 1){
        return 1*sqrt(n*superSquareRoot(n-1));
    }
    else return 1.0;
}