#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
    int seedNum, tmp, cons;
    scanf("%d", &seedNum);
    vector<int> seeds(seedNum);
    for (int x = 0; x < seedNum; x++)
    {
        scanf("%d", &seeds[x]);
    }
    bool possible = true;
    sort(seeds.begin(), seeds.end());
    cons = seeds[1] - seeds[0];
    for (int x = 0; x < seedNum-1; x++)
    {
        if ( seeds[x+1] - seeds[x] != cons)
        {
            possible = false;
        }

    }
    if (possible)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
