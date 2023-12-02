// สร้างฟังก์ชั่นที่รับ string 1 ตัวแล้ว เช็คว่า string นั้นเป็น palindrome หรือไม่ โดย return เป็นค่าจริงหรือเท็จ
// (palindrome คือตัวที่อ่านจากหน้าไปหลังหรือหลังมาหน้าได้ตัวเดิม เช่น pop, mom, jkokj โดยไม่จำเป็นต้องมีความหมาย)
#include <iostream>
#include <string>
using namespace std;

// 0 1 2 3 4 5

bool isPalindrome(string text){
    int textSize = text.size();
    int i = 0;
    while(i < textSize / 2){
        //cout << text[i] << " " << text[textSize - 1 - i] << endl; ใช้ Debug >v<
        if(text[i] != text[textSize - 1 - i]) return false;
        i++;
    }
    return true;
}

int main(){
    cout << isPalindrome("jkokj");
    return 0;
}