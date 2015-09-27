#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int w;
    scanf("%d", &w);
    bool found = false;


    for (int y=1; y <= w/2; y++)
    {
        if ( ((w - y) % 2 == 0) && (y%2 == 0) )
            {
                printf("YES");
                found = true;
                break;
            }

    }
    if (!found)
    {
        printf("NO");
    }
    return 0;

}