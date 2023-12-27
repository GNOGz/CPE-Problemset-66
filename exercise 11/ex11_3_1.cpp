#include<iostream>
#include<cmath>
using namespace std;
long SumOfTwoPow(int);
int main(){
    cout <<"Sum of 2^1 to 2^6 = "<<SumOfTwoPow(6) << endl;
    return 0;
}

long SumOfTwoPow(int n){
    if(n == 1){
        return 2;
    }
    return pow(2,n)+SumOfTwoPow(n-1);
}