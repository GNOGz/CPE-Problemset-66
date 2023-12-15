#include <iostream>
using namespace std;

int main()
{
    double userInput = 0;
    double burnTime = 0;
    double previous = 0;
    double factor = 0.1;
    bool endLine = 0;
    bool firstInput = 0;
    while(!endLine)
    {
        cout << "Input the burner location: ";
        cin >> userInput;
        if (userInput > 100 || userInput < 0)
        {
            factor = 0.1;
            userInput = 100;
            endLine = 1;
        }
        else if (userInput == 100)
            endLine = 1;
            
        if (userInput <= previous && firstInput)
        {
            cout << "Next location must be greater than " << previous << "." << endl;
            continue;
        }
        double newBurnTime = (userInput - previous) * factor;
        if (newBurnTime > burnTime)
            burnTime = newBurnTime;
        factor = 0.05;
        previous = userInput;
        firstInput = 1;
    }
    cout << "Burning completes in " << burnTime << " sec." << endl;
    return 0;
}