#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;


int main()
{
    vector<int> mamount(8);
    int cmax = 0, next1, next2, next3;
    for (int x = 0; x < 8; x++)
    {
        cin >> mamount[x];
    }
    for (int x = 0; x < 8; x++)
    {
        next1 = x+1;
        if (next1 > 7)
            next1 -= 8;
        next2 = x+2;
        if (next2 > 7)
            next2 -= 8;
        next3 = x+3;
        if (next3 > 7)
            next3 -= 8;
        if (mamount[x]+mamount[next1]+mamount[next2]+mamount[next3] > cmax)
            cmax = mamount[x]+mamount[next1]+mamount[next2]+mamount[next3];
    }
    printf("%d\n", cmax);

    return 0;
}
