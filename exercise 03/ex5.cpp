#include<iostream>
using namespace std;

double findKineticEnergy (double m,double v){

    return 0.5*m*v*v ;
}
int main (){

    cout << findKineticEnergy(1,4);
    return 0;
}