#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int testCases, total, removed;
    string type;
    cin >> testCases;
    for (int x = 0; x < testCases; x++)
    {
        cin >> total >> type >> removed;
        if (type == "odd")
        {
            removed *= 2;
        }
        else
        {
            removed = (removed*2) -1;
        }
        cout << removed << endl;
    }
    return 0;
}
