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

int function2(string xy){
    // Optimize Concept
    // ถ้าเรานับ x หรือ y ได้เกินครึ่งนึงของความยาว
    // สมมติ string xy ยาว 10 ถ้าเราเจอ x เกินครึ่งคือ 6 ตัวขึ่นไปก็แปลว่า x มันต้องมากกว่า y
    // เราเลย return 1 บอกได้เลยว่าเยอะกว่าแน่ๆ
    // ของ y ก็เหมือนกันถ้าเจอมากกว่าครึ่งนึงก็แปลว่า y มากกว่า
    // สุดท้ายถ้ามันเท่ากันยังไงจำนวน x กับ y ก็จะไม่มีทางเกินครึ่งนึงของความยาว string xy
    int index = 0, countX = 0, size = xy.size();
    while (index < size){
        if( xy[index] == 'x'){
            countX++;
        }
        index++;
        if(countX > size / 2) return 1;
        if(index - countX > size / 2) return -1;
    }
    return 0;
}

int main(){

    cout << function1("xxyyyyyyyyyxxxxxxxxxxxxx") << endl;
    cout << function2("xxyyyyyyyyyxxxxxxxxxxxxx");
    return 0;
}