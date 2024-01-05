#include<iostream>
using namespace std;

template <typename T>
void swap(T d[], int x, int y)
{
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}
//   SelectionSort ---> https://www.youtube.com/watch?v=g-PGLbMth_g
template <typename T>
void selectionSort(T d[], int N)
{
    for(int i = 0 ;i < N ; i++){
        int min = i;
        for(int j = 0+i ; j < N ;j++){
            if(d[j] < d[min]){
                min = j;
            }
        }
        swap(d,i,min);

        /*cout << "Pass " << i+1 << " : " ;
        for(int k = 0; k < N ; k++) cout << d[k] << " ";
        cout << endl; */
        
        // เอาคอมเม้นออกถ้าอยากเห็นการทำงานทีละขั้นตอน มุงิ

    }
}
int main(){
    double x[] = {1,31.56,69.2,203.3,4,3,22};
    cout << "Before Sorting : ";
    for(int i = 0;i < sizeof(x)/sizeof(x[0]) ;i++) cout << x[i] << " ";
    cout << endl;
    selectionSort(x,sizeof(x)/sizeof(x[0]));
    cout << "After Sorting : ";
    for(int i = 0;i < sizeof(x)/sizeof(x[0]) ;i++) cout << x[i] << " ";

    return 0;
}