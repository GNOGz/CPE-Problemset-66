#include<iostream>
#include<math.h>
using namespace std;


int main(){
    long sum = 0;
    for(long i = 3;i <= 333 ; i += 6) sum = sum+(pow(i,3)); //แยกเลขชุดที่เป็นยกกำลัง3แล้วเอามาบวกกับชุดที่เป็นยกกำลัง2(เพราะการบวกสลับที่กันได้)
    for(long j = 6;j <= 330 ; j += 6) sum = sum+(pow(j,2));
    cout << sum;
    return 0;
}