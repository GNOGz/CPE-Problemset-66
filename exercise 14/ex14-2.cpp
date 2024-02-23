#include <iostream>

void myfunc(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int A = 7, B = 11;
    std::cout << "Before: " << A << " " << B << std::endl;
    myfunc(&A,&B);
    std::cout << "After: " << A << " " << B;
    return 0;
}