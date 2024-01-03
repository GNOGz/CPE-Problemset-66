#include <iostream>
using namespace std;

template <typename Type>
void insert(const Type[], Type[], int, Type, int);

int main()
{
    int N = 4;
    int x[N] = {1, 4, 9, 7}, y[N + 1], z[N + 1];
    insert(x, y, N, 69, 2); // insert value 69 at index 2
    insert(x, z, N, 77, 0); // insert value 77 at index 0
    cout << "x = ";

    for (int i = 0; i < N; i++)
        cout << x[i] << " "; 
    cout << "\ny = ";
    for (int i = 0; i < N + 1; i++)
        cout << y[i] << " ";
    cout << "\nz = ";
    for (int i = 0; i < N + 1; i++)
        cout << z[i] << " ";
    return 0;
}
template <typename Type>

//ทำไว้ 2 วิธีคล้ายๆกัน
/*
void insert(const Type source[], Type output[], int N ,Type value,int i_value)
{
    for(int j = 0 ; j < N ; j++ ){
        if(j == i_value) {
            output[j] = value;
            output[j+1] = source[j];
            }
        else if ( j < i_value)
        {
            output[j] = source[j];
            

        }
         else {
            output[j+1] = source[j];
        }
    }
}
*/


void insert(const Type source[], Type output[], int N ,Type value,int i_value)
{
    int i = 0;
    for(int j = 0 ; j < N ; j++ ){
        if(j == i_value) {
            output[j] = value;
            output[j+1] = source[j];
            i++;
            }
         else {
            output[j+i] = source[j];
        }
    }
}


