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

int numRandom(int num,int prob,int n){
    if(num <= n)
        return (numRandom(num*2,prob,n-1));
    else 
        return n;
}


int main(){
    srand(time(0));
    int n;
    cout << "Enter n : " ;
    cin >> n;
    int count[n];
    if( n > 1){
        int samplespace = prob(n);
        int num,data;
        num = rand()%samplespace+1;
        for(int i = 1;i<= 100;i++){
            num = rand()%samplespace+1;
            data = numRandom(num,samplespace,n);
            cout << data << endl;
            count[data-1]++;
        }
    }
    for (int i = 0; i < sizeof(count)/sizeof(count[0]) ; i++){
        cout << "Number of " << i+1 <<" : " << count[i] << endl ; 
    }
}
