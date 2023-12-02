// สร้างฟังก์ชั่นที่รับค่าจำนวนเต็มและแสดงแม่สูตรคูณของเลขนั้นคูณ 1 จนถึงคูณ 12
#include <iostream>
using namespace std;

void MTable(int number){
    int i = 1;
    while(i <= number){
        cout << i * number << " ";
        i++;
    }
}

int main()
{
    MTable(9);
    return 0;
}