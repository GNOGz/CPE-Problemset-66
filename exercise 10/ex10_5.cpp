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

int numRandom(int num,int i,int n){
    if(num <= pow(2,i))
        return n;
    else 
        return (numRandom(num,i+1,n-1));
}


int main(){
    srand(time(0));
    int n;
    cout << "Enter n : " ;
    cin >> n;
    int count[n] = {0};
    if( n > 1){
        int samplespace = prob(n);
        int num,data;
        num = rand()%samplespace+1;
        cout << "Please wait for the code to run...............";
        for(int i = 1;i<= 1000000000;i++){
            num = rand()%samplespace+1;
            data = numRandom(num,0,n);
            //cout << data << endl;
            count[data-1]++;
        }
    }
    for (int i = 0; i < sizeof(count)/sizeof(count[0]) ; i++){
        cout << "Number of " << i+1 <<" : " << count[i] << endl ; 
    }
}
