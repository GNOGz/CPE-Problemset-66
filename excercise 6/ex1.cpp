#include<iostream>
#include<string>
using namespace std;

int function1(string xy){
    int i = 0, output = 0;
    while (i < xy.size()){
        if( xy[i] == 'x'){
            output++;
        }
        else{
            output--;

        }
        i++;
    }
    if(output == 0){ // มี x = y
        return 0;
    }
    else if(output > 0) // มี x มากกว่า y
    {
        return 1;
    }
    else{ //มี y มากกว่า x
        return -1;
    }
    return 0;
}

int main(){

    cout << function1("xxyyyyyyyyyxxxxxxxxxxxxx");
    return 0;
}