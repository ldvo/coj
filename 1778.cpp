#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    int tests;
    double total, ladoa, ladob;
    cin >> tests;
    for (int x = 0; x < tests; x++)
    {
        cin >> ladoa >> ladob;
        total = (((ladob/2.0)*(ladoa/4.0))/2) + (ladoa/2.0)*(ladob/4.0);
        cout << fixed << setprecision(8) << total << endl;
    }




    return 0;
}