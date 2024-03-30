#include<iostream>
using namespace std;
int main(){
    int N,M;
    cout << "Enter N: ";
    cin >> N;
    cout << "Enter M: ";
    cin >> M;
    int i = N, ans = 0;
    while(i <= M){
        ans = ans+i;
        i++; // หรือจะเขียน i = i+1 ; ก็ได้ เหมือนกัน
        // cout << ans << endl ;
    }
    cout << "ans = " << ans;
    return 0;
}