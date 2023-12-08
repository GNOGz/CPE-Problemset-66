#include <iostream>
#include <string>
using namespace std;

int main(){
    int N, count = 0;
    string text1, text2;
    cout << "Enter the first text: ";
    cin >> text1;
    cout << "Enter the second text: ";
    cin >> text2;
    cout << "Enter N: "; 
    cin >> N;
    while(count < N){
        if(count % 2 == 0) cout << text1 + " ";
        else cout << text2 + " ";
        count++;
    }
    return 0;
}