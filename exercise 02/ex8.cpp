#include<iostream>
using namespace std;
int main(){
    int n,result=1,i = 1;
    cout << "Enter n: ";
    cin >> n;
    while (i <= n){
        result = result * i;
        i++;
    }
    cout << n <<"! = "<< result;
    return 0;
}