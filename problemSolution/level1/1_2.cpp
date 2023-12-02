// สร้างฟังก์ชั่นที่รับค่าจำนวนเต็มที่มากกว่า 1 และแสดงผลตั่งแต่เลข 1 ถึงเลขนั้นๆ แต่ถ้าเลขที่แสดงผลหาร 5 ลงตัวให้แสดง “X” แทนเลขนั้น
#include <iostream>
using namespace std;

void oneToNumber(int number){
    int i = 1;
    while(i <= number){
        if(i % 5 == 0) cout << "X";
        else cout << i;
        i++;
    }
}

int main()
{
    oneToNumber(11);
    return 0;
}