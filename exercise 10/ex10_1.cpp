#include <iostream>
using namespace std;

int gcd(int x,int y,int z){
    int i = 2,ans = 1;
    while(true){
        if(i>x || i>y || i>z) break ;
        if (x%i==0 && y%i == 0 && z%i ==0) ans = i ;
        i++;
    }

    return ans;
}

int main(){
 cout << "test" << '\n';
 cout << "gcd(18,17,16) = " << gcd(18,17,16) << '\n';
 cout << "gcd(480,320,1024) = " << gcd(480,320,1024) << '\n';
 cout << "gcd(255,51,765) = " << gcd(255,51,765) << '\n';
 cout << "gcd(15,1,9) = " << gcd(15,1,9) << '\n';
 cout << "gcd(2,6,222) = " << gcd(2,6,222) << '\n';
 return 0;
}