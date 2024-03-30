#include <iostream>
#include <cmath>

using namespace std;

struct Rect{
    int x, y, w, h;
};

Rect merge(const Rect & a, const Rect & b){
    int x = min(a.x, b.x);
    int y = max(a.y, b.y);
    int w = max(a.x + a.w, b.x + b.w) - x;
    int h = y - min(a.y - a.h, b.y - b.h);
    return Rect{x,y,w,h};
}

int main(){
    Rect R1 = {1,1,1,1};
    Rect R2 = {2,2,2,2};
    Rect R3 = {4,1,2,3};
    Rect R4 = {3,3,1,4};
    Rect R5 = merge(merge(R1,R2), merge(R3,R4));
    cout << R5.x << " " << R5.y << " " << R5.w << " " << R5.h; 
}