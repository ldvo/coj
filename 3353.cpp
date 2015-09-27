#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
    int objectnum, guards, sum = 0, guard;
    cin >> objectnum >> guards;
    vector<int> objects(objectnum);
    for (int x = 0; x < objectnum; x++)
    {
        cin >> objects[x];
    }
    sort(objects.begin(), objects.end());
    guard = guards;
    for (int x = 0; x < guards; x++)
    {
        if (objects[x] >= 0 || guard == 0)
            break;
        else
        {
            sum += objects[x];
            guard--;
        }
    }
    cout << abs(sum) << endl;
    return 0;

}