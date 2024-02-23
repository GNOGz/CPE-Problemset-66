#include <iostream>
using namespace std;

int sumNonZero(int *d, int **s, int **e);

int main()
{
    int A[] = {0, 0, 0, 0, 0, 1, 3, 2, 1, 1, 0, 0, 0, 1, 6, 9, 0, 0, 0, 1, 1, 0, 0};
    int sum;
    int *start, *end;
    sum = sumNonZero(A, &start, &end);
    cout << "sum = " << sum << "\n";
    cout << "start = " << start << "\n";
    cout << "end = " << end << "\n";
    cout << "length = " << end - start + 1 << "\n";
    cout << "--------------------------------------\n";
    sum = sumNonZero(end + 1, &start, &end);
    cout << "sum = " << sum << "\n";
    cout << "start = " << start << "\n";
    cout << "end = " << end << "\n";
    cout << "length = " << end - start + 1 << "\n";
    cout << "--------------------------------------\n";
    sum = sumNonZero(end + 1, &start, &end);
    cout << "sum = " << sum << "\n";
    cout << "start = " << start << "\n";
    cout << "end = " << end << "\n";
    cout << "length = " << end - start + 1 << "\n";
    cout << "--------------------------------------\n";
}

int sumNonZero(int *d, int **s, int **e)
{
    int sum = 0; //หาผลรวมให้เริ่มต้นเป็น 0
    bool foundNonZero = false; //ตัวแปรไว้เก็บว่าเราเจอสักเลขที่ != 0 รึยัง
    // เราหาผลรวมของเลขกลุ่มแรกที่ไม่ใช่ 0 ที่เราเจอ
    /* สมมติ
    0 0 1 1 0 0
    เราจะเมิน 0 0 สองตัวแรก
    พอเจอ 1 แปลว่าเราเจอกลุ่มเลขที่ต้องการแล้ว เราก็บอกว่าเราเจอแล้ว foundNonZero = true
    เจอ 1 อีกก็บวกต่อ
    แต่พอเจอ 0 อีกรอบแปลว่าหมดแล้ว
    ดังนั้นเราหาไปเรื่อยๆจนกว่า
    เลขที่เจอเป็น 0 และเราเจอเลขที่ไม่ใช่ 0 แล้ว
    !(เลขที่เจอ == 0 && เจอเลขที่ไม่ใช่ 0 แล้ว) 
    ถ้าเราเจอเลข 0 แล้วเราเคยเจอเลขที่ไม่ใช่ 0 แล้วก็แปลว่าออกเขตค้นหา
    ยืมความรู้ตรรกศาสตร์ !(*d == 0 && foundNonZero) =>  (*d != 0 || !foundNonZero)
    */
    while (*d != 0 || !foundNonZero)
    {
        if(*d != 0){ // ถ้าเจอเลขที่ไม่ใช่ 0 
            sum += *d; //ก็จับบวก
            if(!foundNonZero){ // แล้วถ้ามันเป็นเลขแรกที่เจอ
                *s = d; // ก็ตั้งค่าตำแหน่งแรกที่เจอ
                foundNonZero = true; // แล้วก็บอกว่าเคยเจอแล้ว
            }
        }
        d++; //ส่องคนต่อไป
    }
    *e = --d; // ถ้าเราเจอเลข 0 อีกรอบแปลว่าออกเขตแล้ว ดังนั้นเลขที่ไม่ใช่ 0 ตัวสุดท้ายก็คือเลขก่อนหน้าเลข 0 
    return sum; 
}