#include<iostream>
using namespace std;

int main(){
    int N;
    cout << "please input board size: " ;
    cin >> N;

    for (int i = 1;i <= N;i++){
        for(int j = 1 ; j <= N;j++){
            cout <<"   ";
            if(j < N ) cout <<"|";
        }
    
    cout << "\n";
    if(i < N){
        for(int j = 1;j<=N;j++){
            cout << "---" ;
            if(j < N) cout << "+";
        }
        cout << '\n';
    }
    }
    return 0;
}