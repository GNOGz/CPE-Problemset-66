#include<cstdlib>
#include<iostream>
#include<ctime>
#include<cmath>
using namespace std;

int main(){
    srand(time(0));
    double num;
    for(int i = 0 ; i < 10001 ; i++){
        num  = rand()%10000/1000.0000;
        cout << num << endl;
    }
    return 0;
}