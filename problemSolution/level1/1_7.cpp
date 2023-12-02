// สร้างฟังก์ชั่นที่รับจำนวนเต็ม 2 จำนวน แทน อายุของ พ่อ(A) และ ลูก(B) แล้วแสดงผลบอกว่า อายุของพ่อจะเป็น 2 เท่าของลูกเมื่อผ่านไปกี่ปีหรือผ่านมาแล้วกี่ปี
// คณิต ให้ อายุพ่อ = A, อายุลูก = B, ปีที่ผ่าน = Y
// (B + Y) * 2 = A + Y
// 2B + 2Y = A + Y
// Y = A - 2B
#include <iostream>
using namespace std;

int sameAgeIn(int A, int B){
    return A - 2 * B;
}

int main(){
    cout << sameAgeIn(8, 6);
    return 0;
}
