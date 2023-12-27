#include <iostream>
#include <cmath>
using namespace std;

long double superFraction(int);

int main(){
    cout << superFraction(5);
    return 0;
}

long double superFraction(int n){
    if( n == 0 ) return 0;
    else {
        return 1+n/(superFraction(n-1));
    }
    
}