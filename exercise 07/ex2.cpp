#include <iostream>
#include <string>
using namespace std;

string pTu(int faceLevel, int personalityLevel)
{
    if(personalityLevel < 50) return faceLevel >= 50 ? "One-night-stand" : "Unfriend";

    return faceLevel >= 80 ? "Girlfriend" : "Friend";
}

int main()
{
    cout << pTu(50,50);
}