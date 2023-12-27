#include <iostream>
#include <ctime> 
using namespace std;

unsigned long long recurFibo(int n){
    if(n < 2) return n;
    return recurFibo(n - 1) + recurFibo(n - 2);
}

unsigned long long iterArrayFibo(int n){
    if(n < 2) return n;
    unsigned long long fib[n + 1] = {0, 1};
    for(int i = 2; i < n + 1; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib[n];
}

unsigned long long iterConstFibo(int n){
    if(n < 2) return n;
    unsigned long long a = 0, b = 1;
    for(int i = 2; i < n + 1; i++){
        unsigned long long temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

int main(){
    cout << "-----Iter Array-----" << endl;
    clock_t start = clock();
    cout << "Result: " << iterArrayFibo(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds." << endl << endl;
     
    cout << "-----Iter Const-----" << endl;
    start = clock();
    cout << "Result: " << iterConstFibo(50) << "\n";
    end = clock();
    elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds." << endl << endl;
    return 0;
}