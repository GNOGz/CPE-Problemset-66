#include<iostream>
#include<iomanip>
using namespace  std;
int main(){
    cout << fixed << setprecision(10) ; // ตั้งให้แสดงทศนิยม10ตำแหน่ง
    double sum = 0;
    for(double i = 2;i <= 222 ;i+=2){
        sum = sum+(1/i);
    }
    cout << "sum = " << sum;
}