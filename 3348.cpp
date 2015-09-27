#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;


int main()
{
    int pcombats = 0, people, wins, tcombats;
    cin >> people >> wins;
    for (int x = 1; x < people; x++)
    {
        for (int y = x+1; y <= people; y++)
        {
            pcombats++;
        }
    }
    tcombats = people * wins;
    if (tcombats > pcombats)
        cout << "-1" << endl;
    else
        cout << tcombats << endl;

    return 0;
}
