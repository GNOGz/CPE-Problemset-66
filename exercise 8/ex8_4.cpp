#include<iostream>
using namespace std;

void printPattern1(int N,int M){
    if(N <= 0 || M <= 0){
       cout <<"Invalid input"; 
    }
    else{
        for(int i = 1;i <= N ; i++){
            if(!(i%2)){
                for(int j = 1 ; j<= M; j++){ //บรรทัดที่เป็นเลขคี่จะเริ่ม x
                    if(!(j%2)) cout << 'O'; 
                    else cout << 'x';
                }
                    }
            else{
                for(int j = 1 ; j<= M; j++){ //บรรทัดที่เป็นเลขคู่จะเริ่มด้วย O
                    if(!(j%2)) cout << 'x';
                    else cout << 'O';
                }
            }
            cout << endl;
        }

    }
}

int main(){
    printPattern1(2,2);
    cout << endl;
    printPattern1(3,5);
    cout << endl;
    printPattern1(5,3);
    cout << endl;
    printPattern1(0,3);
    cout << endl;
    printPattern1(7,-1);
    return 0;
}