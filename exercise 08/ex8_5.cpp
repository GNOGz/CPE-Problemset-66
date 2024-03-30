#include <iostream>
using namespace std;

void printPattern2(int row)
{
    if (row <= 0)
        cout << "Invalid input";
    else
    {
        int oCount = 1, xCount = row - 1;
        for (int i = 1; i <= row; i++)
        {
            for (int j = 1; j <= oCount; j++)
            {
                cout << "O";
            }
            for (int j = 1; j <= xCount; j++)
            {
                cout << "x";
            }
            oCount++;
            xCount--;
            cout << endl;
        }
    }
}

void printPattern2ButOtherApproach(int N)
{
    if (N <= 0)
    {
        cout << "Invalid input" << endl;
        return;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j <= i)
                cout << "O";
            else
                cout << "X";
        }
        cout << endl;
    }
    // เหมือนข้อ 4 สร้าง แต่ตาราง i, j ดู
    // 0, 0 | 0, 1 | 0, 2        O | X | X
    // 1, 0 | 1, 1 | 1, 2   =>   O | O | X มันคือ ถ้า i <= j จะได้ "O" ถ้าไม่ใช่ก็ได้ "X"
    // 2, 0 | 2, 1 | 2, 2        O | O | O

}

int main()
{
    printPattern2(3);
    cout << endl;
    printPattern2ButOtherApproach(3);
    cout << "______________" << endl;

    printPattern2(4);
    cout << endl;
    printPattern2ButOtherApproach(4);
    cout << "______________" << endl;
    printPattern2(5);
    cout << endl;
    printPattern2ButOtherApproach(5);
    cout << "______________" << endl;
    printPattern2(0);
    cout << endl;
    printPattern2ButOtherApproach(0);
    cout << "______________" << endl;
    printPattern2(-1);
    cout << endl;
    printPattern2ButOtherApproach(-1);
    cout << "______________" << endl;
    return 0;
}