// สร้างฟังก์ชั่นที่รับ string 2 ตัว แล้ว return string ที่เกิดจากการผสม string ทั้ง 2 ที่รับมาแบบสลับ แต่ถ้าเกิด string มีความยาวไม่เท่ากัน 
// ให้เอาตัวที่เหลือของตัวที่ยาวกว่ามาต่อท้าย (โจทย์ lab5 ใส่ไข่)
#include <iostream>
#include<string>
using namespace std;

string combineString(string a, string b){
    int size = a.size();
    if(b.size() > size) size = b.size();

    string result = "";
    int i = 0;
    while(i < size){
        if(i <= a.size()) result += a[i];
        if(i <= b.size()) result += b[i];
        i++;
    }
    return result;
}

int main(){
    cout << combineString("Dragon", "Cat");
    return 0;
}