#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <stdlib.h>
#include <cmath>
using namespace std;

int main()
{
    double originalside, tside, area;
    cin >> originalside;
    while (originalside != 0)
    {
        tside = originalside - 2*(originalside/(2.0*sqrt(2.0)));
        tside = tside*tside*2;
        area = (originalside*originalside) - tside;
        cout << fixed << setprecision(3) << area << endl;
        cin >> originalside;
    }




    return 0;
}