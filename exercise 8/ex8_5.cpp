#include<iostream>
using namespace std;

void printPattern2(int row){
    if(row <= 0) cout <<"Invalid input";
    else {
        int oCount = 1,xCount = row-1;
        for(int i = 1;i <= row; i++ ){
            for(int j = 1 ; j <= oCount ; j++){
                cout<<"O";
            }
            for(int j = 1 ; j <= xCount ; j++){
                cout<<"x";
            }
            oCount++;
            xCount--;
            cout << endl;
        }
    }
}

int main(){
    printPattern2(3);
    cout << endl;
    printPattern2(4);
    cout << endl;
    printPattern2(5);
    cout << endl;
    printPattern2(0);
    cout << endl;
    printPattern2(-1);
    return 0;
}