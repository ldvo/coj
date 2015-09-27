#include <iostream>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
using namespace std;


int main()
{
    int number, counter;
    scanf("%d", &number);
    counter = number;
    vector<string> keys(number);
    for (int x = 0; x < number; x++)
    {
        cin >> keys[x];
        sort(keys[x].begin(), keys[x].end());
    }
    sort(keys.begin(), keys.end());
    for (int x = 1; x < keys.size(); x++)
    {
        if (keys[x-1] == keys[x])
            counter--;
    }
    printf("%d", counter);


}
