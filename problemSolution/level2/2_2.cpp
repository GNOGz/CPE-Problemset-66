// สร้างฟังก์ชั่นที่รับ Binary String 1 ตัวเป็น input 
// (Binary String คือ string ที่มีแค่เลข 0 กับ 1 เช่น “1001011”) แล้วแปลง Binary String นั้นให้เป็นเลขฐาน 10 แล้ว return ค่าออกมา
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int binary2decimal(string binary){
    int size = binary.size();
    int i = 0;
    int result = 0;
    while (i < size)
    {
        cout << binary[i] << endl;
        if(binary[size - 1 - i] == '1') result += pow(2, i);
        i++;
    }
    return result;
}

int main(){
    cout << binary2decimal("11010010");
    return 0;
}