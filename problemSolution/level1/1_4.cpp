// สร้างฟังก์ชั่นที่รับค่าเป็น string ภาษาอังกฤษ 1 ตัวแล้ว return ค่าจำนวนสระภาษาอังกฤษที่อยู่ใน string นั้น
#include <iostream>
#include <string>
using namespace std;

int countVowel(string text){
    string vowel = "aeiouAEIOU";
    int i = 0;
    int textSize = text.size();
    int count = 0;
    while(i < textSize){
        int j = 0;
        while(j < 10){                                    // จริงๆใช้ if(text[i] == 'a' || text[i] == 'e' ...) ได้เหมือนกันเช็ค 10 ตัว
            if(text[i] == vowel[j]) count++;              // แต่เหนื่อยพิมพ์
            j++;
        }
        i++;
    }
    return count;
}

int main()
{
    cout << countVowel("sleep") << endl;
    cout << countVowel("I wanna sleep forever!!") << endl;
    return 0;
}