#include<iostream>
#include<ctime>
#include<cmath>
#include<cstdlib>
using namespace std;

int main(){
    srand(time(0));
    cout << "Rand 1,2,3,4,....,100 :"  << rand()%100+1 << endl ; 
    cout << "Rand 2,4,6,8,....,24 : " << (rand()%12+1)*2 << endl ;
    cout << "Rand -5,-4,-3,-2,....,5 : " << rand()%11-5 << endl;
    cout << "Rand 2,4,8,16,....,1024 : " << pow(2,rand()%10+1);
    return 0;
}

