#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cmath>

using namespace  std;

int prob(int p){
    int sum = 0;
    for(int i = 0; i< p ;i++){
        sum += pow(2,i);
    }
    return sum;
}
int numRandom(int i,int prob,int n){
    if(i <= n)
        return (numRandom(i*2,prob,n-1));
    else 
        return n;
}


int main(){
    srand(time(0));
    int n;
    cout << "Enter n : " ;
    cin >> n;
    if( n > 1){
        int probability = prob(n),num,value; 
        num = rand()%probability+1;
        for(int i = 1;i<= 1000000000;i++){
            num = rand()%probability+1;
            cout << numRandom(num,probability,n) << endl;
        }
    }
}
