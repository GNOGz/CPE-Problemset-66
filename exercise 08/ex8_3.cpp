#include<iostream>
using namespace std;
int main(){
    int num,min;
    
    //รับค่าครั้งแรกสุด
    cout <<"Input number: " ;
    cin >> num;
    min = num; // ให้ตัวแรกที่กรอกเป็นค่าต่ำสุดไปก่อน

    if( num <= 0) cout<<"Minimum = N/A";  // ถ้าเจอ 0 หรือติดลบตัวแรก ให้ cout Minimum = N/A ถ้าไม่เจอไปต่อที่ else
    else{
        while(num > 0){ //รับค่าเรื่อยๆจนกว่าจะเจอ 0 หรือติดลบ
            cout <<"Input number: " ;
            cin >> num;            
        if(num < min && num > 0) min = num; //Updateค่าตัวที่น้อยที่สุด
        }
        cout << "Minimum = " << min ;
    }

    return 0;
}