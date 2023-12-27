#include<iostream>
#include<cmath>
using namespace std;
long SumOfTwoPow(int,long &);
long sum = 0; 
int main(){
    cout << SumOfTwoPow(3,sum) << endl;
    return 0;
}

long SumOfTwoPow(int n,long &sum){
    if(n >= 1){
        sum += pow(2,n);
        SumOfTwoPow(n-1,sum);
    }
    else return sum;
}