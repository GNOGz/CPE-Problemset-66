#include <iostream>
#include <cmath>
using namespace std;
double eq(double x){
    double y = sin(pow(x,3))/log((2*x+1)/pow(x,2)); 
    return y;
}
int main(){
    cout<< eq(20.0);
    return 0;
}