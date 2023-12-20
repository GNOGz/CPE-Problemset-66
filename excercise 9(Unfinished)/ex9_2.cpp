#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    string textline;
    double min ,max,num;
    int count = 0;
    cout << "Enter range of the scores [min, max] for counting: ";
    cin >> min;
    cin >> max;
    if(min > max){
        cout << "Invalid input. (max >= min)";
    }
    else{
        while(getline(source,textline)){
            num = atof(textline.c_str());
            //cout << num << endl;
            if(num >= min && num <= max)count ++;
        }
        cout << "The number of students who have scores in this range = " << count ;
        }
    return 0;
}