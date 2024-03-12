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
    Rect a = {0,7,5,5};
    Rect b = {2,5,2,3};
    Rect c = merge(a,  b);
    cout << c.x << " " << c.y << " " << c.w << " " << c.h;
}