#include <iostream>
using namespace std;

int main()
{
    char grade;
    cin >> grade;
    switch (grade)
    {
    case 'A':
        cout << "Awesome";
        break;
    case 'B':
        cout << "Great";
        break;
    case 'C':
        cout << "Good";
        break;
    case 'F':
        cout << "Noob";
        break;

    default:
        cout << "Error: Invalid Input";
        break;
    }

    return 0;
}