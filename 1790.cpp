#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    int c, maxi, mini, counter = 0, score;
    cin >> c;
    cin >> score;
    maxi = score;
    mini = score;
    c--;
    for (int x = 0; x < c; x++)
    {
        cin >> score;
        if (score > maxi)
        {
            maxi = score;
            counter++;
        }
        else if (score < mini)
        {
            mini = score;
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}