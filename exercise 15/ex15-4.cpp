// Pass All Example Testcase but don't not guaranteed to work in everycase
// It use too many data structure and DFS graph algorithm
#include <list>
#include <map>
#include <iostream>
#include <stack>
using namespace std;

map<int, list<int>> stars;
int constella = 0;
int A, B, count = 0;

void Traverse(int index, map<int, bool> &log)
{
    if (log[index] == 0)
    {
        log[index] = 1;
        for (auto star : stars[index]) Traverse(star, log);
    }
}

int main()
{
    do
    {
        cout << "Input link [" << ++count << "]: ";
        cin >> A >> B;
        
        if(A > 0 && B > 0){
            stars[A].push_back(B);
            stars[B].push_back(A);
        }
    } while (A > 0 && B > 0);

    map<int, bool> isVisited;

    for (auto star = stars.begin(); star != stars.end(); star++) 
    { 
        if (!isVisited[star->first])
        {
            constella++;
            Traverse(star->first, isVisited);
        }     
    }

    cout << "#Constellation = " << constella;
}