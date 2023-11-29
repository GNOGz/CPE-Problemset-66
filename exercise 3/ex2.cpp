#include<iostream>
using namespace std;

int findDivisor(int n){
    // Goal -> หาจำนวนเต็ม i ที่น้อยที่สุดที่ n หาร i ลงตัว โดยเลขที่ i ต้องมากกว่า 1 ด้วย
    // Concept 
    // ในเมื่อเราหาเลขที่น้อยที่สุดที่มากกว่า 1 ที่ n หารลงตัว เราก็เริ่มที่เลข i = 2 ซึ่งมากกว่า 1 และน้อยสุดเท่าที่เป็นไปได้
    int i = 2; 
    
    // ต่อไปเราก็ต้องเช็คว่า n / i ลงตัวไหม หารลงตัวแปลว่า หารแล้วต้องไม่มีเศษ
    // ในภาษา c++ ก็คือ n % i ต้องได้ 0    <--------------------------  
    // โดย ถ้าเกิดหารไม่ลงตัว n % i ไม่เท่ากับ 0 เราก็ต้องหา i ตัวใหม่       ^
    // เราก็เลยจะเพิ่ม i ขึ้น 1 แล้วก็กลับไปลองหารใหม่  -------------------^ 
    // โดยเราสามารถลูปไปเลยๆจนเจอ i ที่ n / i ลงได้ได้เลยโดยใช้ while(true) ซึ่งจะลูปไม่หยุด
    // แต่ถ้าดูในทางคณิตศาสต์ ถ้า i เพิ่มขึ้นจนเท่ากับ n ยังไง n / i ก็จะเท่ากับ n / n ซึ่งลงตัวแน่ๆ
    // แปลว่าเราสามารถลูปได้จน i มีค่าเท่ากับ n ซึ่งก็คือ i <= n 

    while (i <= n){ // < ลูปเรื่อยถ้า i ยังไม่เกิน n

        if(n%i == 0){ // < เช็คดูว่าหารลงตัวไหม
            return i; // < ถ้าลงตัวแล้วก็ไม่รออะไร return เลขนั้นเลย แล้วก็จบการทำงานเพราะเจอ return
                      //   ฟังก์ชั่น จะหยุดทำงานทันทีถ้าเจอ return
                      //   ลองเขียนโค้ดหลัง return 0 ใน main
        }
        i++; // < เพิ่มค่า i ขึ้น 1
    }
    return i ; // < return ค่า i ออกไป แต่ตาม logic ของโค้ดเราแล้วยังไงจะไม่รันถึงบรรทัดนี้ถ้า n > 1 ซึ่งตามโจทย์ n ต้อง > 1
               //   แต่เหตุผลที่ใส่คือมันเป็น best practice 555 ตามที่เค้าว่ากัน
               //   แต่มันก็อาจทำงานได้
}


// มาลอง optimize code เราดูสักหน่อย
int findDivisor2(int n){
    // Concept 
    // ง่ายๆอย่างแรกคือ เลขคู่ ยังไงก็ต้องหาร 2 ลงตัว แปลว่าถ้า n เป็นเลขคู่ return 2 ได้เลยแบบไม่ต้องคิด
    if(n % 2 == 0) return 2;

    // พอเราเช็คเลขคู่ไปแล้วเราก็เช็คแค่เลขคี่ต่อก็พอ ก็เริ่มที่ 3
    int i = 3; 
    while(i <= n){                  // < เหมือนเดิมลูปจน i ไม่เกิน n
        if(n % i == 0) return i;    // < ถ้าหาร n หาร i ลงตัวก็ retutn i ได้เลย
        i += 2;                     // < เพิ่มค่า i ขึ้น 2
                                    //   เหตุผลคือถ้าเพิ่มทุกๆ 1 i ก็จะเป็นเลขคู่ได้ซึ่งถ้าเป็นเลขคู่
                                    //   ยังไงก็ต้องหาร 2 ลงตัวซึ่งเราตัดช้อยไปแล้วตอนแรก
    }
    return i;
}

// optimize ต่อจาก findDivisor2 อีกหน่อย
int findDivisor3(int n){

    // จริงๆโจทย์ข้อนี้เป็นโจทย์ที่แก้เหมือนกับ โจทย์คลาสสิคเช็คว่าเป็นจำนวนเฉพาะไหม

    if(n % 2 == 0) return 2;

    int i = 3; 
    while(i <= n / 2){                  // < เปลี่ยนเงื่อนไขนิดหน่อยโค้ดเราทำงานลดลง
                                        //   Concept คือ จะไม่มีเลข i ที่มากกว่าครึ่งนึงของ n ที่หาร n ลงตัวยกเว้นตัว n เอง
                                        // ลองๆ 8 ครึ่งนึงของ 8 คือ 4 เลขที่มากกว่า 4 แค่ไม่ใช่ 8 คือ 5 6 7 ซึ่งหาร 8 ไม่ลงแน่ๆ
                                        //      17 ครึ่งนึงคือ 8.5 แต่เป็น int เลยได้ 8 เลขที่มากกว่า 8 ก็คือ 9 10 11 .. 16 หาร 17 ไม่ลงตัวแน่ๆ
                                        // เลข i ที่มากกว่าครึ่งนึงของ n พอเอา n ไปหาร i จะได้ 1.xxxx ซึ่งไม่มีทางลงตัว
                                        // ดังนั้นเราเช็คแค่ครึ่งที่น้อยกว่า n / 2 ก็เพียงพอ แล้วถ้าเกิดครึ่งนั้นไม่มีเลขไหนหารลงตัว
                                        // แปลว่า n เป็นจำนวนเฉพาะ ก็จะมีแค่ 1(ไม่เอา) หรือ n เองเท่านั้นที่หาร n ลงตัว
        if(n % i == 0) return i;    
        i += 2;                     
    }
    // ในเมื่อ i เราจะมีค่าสูงสุดที่ n / 2 แล้วก็จะหลุดออกจากลูป ** จริงน่าจะเกินแต่เราไม่สน
    // ซึ่งถ้าหลุดออกมาก็แปลว่าไม่มีเลขไหนหาร n ลงตัวนอกจาก 1 และตัวมันเอง แต่เราไม่เอา 1
    // เราเลย return n เพราะ n / n ลงตัวและน้อยที่สุดละเพราะเลขอื่นหารไม่ลงตัว
    return n;
}

// optimize ต่อจาก findDivisor3 อีกหน่อย
// คำเตือนคณิต!!
int findDivisor4(int n){
    if(n % 2 == 0) return 2;

    int i = 3; 
    while(i * i <= n){                  // < Concept คือ ยังไงเลข i ที่หาร n ลงตัวจะมีคู่ k ของมันที่ i * k = n อยู่
                                        //   ลองดูคู่ i k ของเลข n = 24   ของ n = 16    n = 21     n = 49    n = 13             
                                        //   1 * 24                      1 * 16      1 * 21      1 * 49   1 * 13
                                        //   2 * 12                      2 * 8       3 * 7       7 * 7 
                                        //   3 * 8                       4 * 4
                                        //   4 * 6
                                        //   ลองเขียนเพิ่มดูเองได้ถ้ายังไม่ค่อยชัด
                                        //   อย่างแรกจะเห็นว่า ไม่มีที่มากกว่าครึ่งนึงของ n อยู่เลข ยกเว้น n เองซึ่งตรงกับที่เรา optimize ใน findDivisor3
                                        //   อย่างที่ 2 จะเห็นได้ว่าเลขที่น้อยที่สุดในคู่จะไม่เกิน sqrt(n)
                                        //   แปลว่าถ้ามีเลข i (ที่ไม่ใช่ 1 กับ n) ที่ n หาร i ลงตัวไม่ว่าเราจะเช็คยังไงจะไม่มีทางเกิน sqrt(n)
                                        //   นั่นคือเราเช็คแค่ i <= sqrt(n) ก็พอ แต่ ขก. include<cmath> เลข ยกกำลังสองทั้งสองด้านของอสมการ
                                        //   i * i <= n โดยที่ i กับ n เรามากกว่า 1 อยู่แล้วตามโจทย์ยกกำลังทั้งสองข้างชองอสมการเลยจะเป็นจริง(เนื้อหาคณิต)
        
        if(n % i == 0) return i;    
        i += 2;                     
    }
    // เหมือนเดิม i เราจะมีค่าไม่เกิน sqrt(i) ** จริงน่าจะเกินแต่เราไม่สน
    // แล้วก็หลุดจากลูปซึ่งเหมือนเดิมแปลว่าไม่มีเลขไหนหาร n ลงตัวยกเว้น n กับ 1 ที่โดนเมิน
    // เราเลย return n ได้เลย
    return n;
}

int main(){
    cout << findDivisor(2465857) << endl;
    cout << findDivisor2(2465857) << endl;
    cout << findDivisor3(2465857) << endl;
    cout << findDivisor4(2465857) << endl;
    return 0;
}