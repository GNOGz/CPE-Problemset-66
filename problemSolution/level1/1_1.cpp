// สร้างฟังก์ชั่นที่รับค่าจำนวนเต็ม 2 จำนวนแทนด้านของสามเหลี่ยมให้ return จำนวนเต็มที่แทนด้านของสามเหลี่ยมที่เหลือที่ยาวมากที่สุดที่จะเป็นไปได้
#include <iostream>
using namespace std;

int longestLength(int a, int b){
    return a + b - 1;
}

int main()
{
    cout << longestLength(3, 4);
    return 0;
}

