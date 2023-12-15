#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int X, Y, Z;
    cin >> X >> Y;
    if(X >= 20 && Y >= 20 && X + Y >= 50){
        if(Y > X) Y *= 2;
        Z = (X + Y) / 2;
        cout << Z;
        return 0;
    }

    Z = sqrt(X * X + Y * Y);
    Z = min(50, Z);
    cout << Z;
    return 0;
}