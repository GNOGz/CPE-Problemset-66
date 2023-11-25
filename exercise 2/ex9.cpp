#include<iostream>
using namespace std;
int main(){
    int x = 5;
    if (x >= x){
        cout << x ;
        x -= 2; // หรือจะเขียน x = x-2 ; ก็ได้
        }
    else{
        x += 2; // หรือจะเขียน x = x+2 ; ก็ได้
        cout << 2*x ;
    }
    if (x < 3){

    }
    else{
        cout << x;
    }
}