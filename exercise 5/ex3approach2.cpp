#include <iostream>
#include <chrono> // ใช้จับเวลา
using namespace std;
using namespace std::chrono; //ใช้จับเวลา

int cheetah(int money){
    int amount = money / 10;
    int label  = amount;

    while(label >= 3){
        int newCheetah = label / 3;
        amount += newCheetah;
        label %= 3;
        label += newCheetah;
    }

    return amount;
}

int main(){
    auto start = system_clock::now(); // ใช้จับเวลาเริ่ม

    cout << cheetah(3000000) << endl;

    // ใช้จับเวลาล้วนๆ ไม่ต้องสน
    auto end = system_clock::now(); // ใช้จับเวลาตอนจบ
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    
    std::cout << "finished computation at " << std::ctime(&end_time)
              << "elapsed time: " << elapsed_seconds.count() << "s\n";
    // approch 2 จะไวกว่าเมื่อ input มีค่ามากๆ
    // แต่ถ้า input น้อยๆความไวจะไม่ต่างกัน
    return 0;

}