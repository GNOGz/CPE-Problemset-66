#include<iostream>
using namespace std;

char function1 (char x){
    
    if ( x == 'A'||x == 'E' || x == 'I'||x == 'O'||x == 'U'||x == 'a'||x == 'e' || x == 'i'||x == 'o'||x == 'u'){
        return 'y';
    }
    else{
        return 'n';
    }
}

int main(){
    cout << function1('A')<<endl;
    cout << function1('b');
    return 0;
}