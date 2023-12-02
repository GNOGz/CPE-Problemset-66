// ให้รับจำนวนเต็ม 1 ตัวแล้วถ้าเลขนั้นหารเฉพาะ 3 ลงตัวให้แสดง “Fizz” ถ้าการเฉพาะ 5 ลงตัวให้แสดง “Buzz” 
// ถ้าหารทั้ง 3 และ 5 ลงตัวให้แสดง “FizzBuzz” ถ้าไม่ลงตัวเลยให้แสดงเลขที่รับเข้าไปแทน
#include <iostream>
#include <string>
using namespace std;

void FizzBuzz(int num){
    string txt = "";
    if(num % 3 == 0) txt += "Fizz";
    if(num % 5 == 0) txt += "Buzz";

    if(txt == "") cout << num << endl;
    else cout << txt << endl;
}

int main(){
    int i = 1;
    while(i <= 100){
        FizzBuzz(i++);
    }
    return 0;
}