#include <iostream>
#include <map>
using namespace std;
map<int, int> stars;

int main()
{
    int A, B;
    int i = 1;
    int group = 1;
    int count = 0;
    cout << "Input link [" << i++ << "]: ";
    cin >> A >> B;
    while (A > 0 && B > 0)
    {
        if (stars[A] && stars[B])
        {
            if (stars[A] != stars[B])
            {
                int mergeToGroup = min(stars[A], stars[B]);
                int mergeGroup = max(stars[A], stars[B]);
                for (auto &star : stars)
                {
                    if (star.second == mergeGroup)
                    {
                        star.second = mergeToGroup;
                    }
                }
                count--;
            }
        }
        else if (stars[A] || stars[B])
        {
            int toGroup = max(stars[A], stars[B]);
            stars[A] = toGroup;
            stars[B] = toGroup;
        }
        else
        {
            stars[A] = group;
            stars[B] = group;
            group++;
            count++;
        }
        cout << "Input link [" << i++ << "]: ";
        cin >> A >> B;
    }

    cout << "#Constellation = " << count;
}