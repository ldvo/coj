#include <iostream>

using namespace std;

int main()
{
    string candyLine, maxCandyS;
    char maxCandyType = 'F';
    int maxCandy = 0, currentCount = 1;
    cin >> candyLine;
    for (int x = 0; x < ( candyLine.size()); x++)
    {
        if (candyLine[x] == candyLine[x+1])
        {
            currentCount++;
        }
        if (currentCount > maxCandy)
        {
            maxCandy = currentCount;
            maxCandyType = candyLine[x];
        }
        else if (currentCount == maxCandy)
        {
            if (candyLine[x] == 'R')
            {
                maxCandyType = 'R';
            }
            else if (candyLine[x] == 'M' && maxCandyType != 'R')
            {
                maxCandyType = 'M';
            }
            if (candyLine[x] != candyLine[x+1])
            {
                currentCount = 1;
            }
        }
        else if (candyLine[x] != candyLine[x+1])
        {
            currentCount = 1;
        }
    }
    if (maxCandyType == 'R')
    {
        maxCandyS = "Rat";
    }
    else if (maxCandyType == 'M')
    {
        maxCandyS = "Milk";
    }
    else
    {
        maxCandyS = "Fish";
    }
    cout << maxCandy << " " << maxCandyS << endl;
    return 0;
}