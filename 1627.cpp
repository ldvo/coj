#include <iostream>
#include <vector>
#include <stdio.h>
#include <ctype.h>
#include <string>

using namespace std;

int main()
{
    long long tests, number, power, zeros;
    cin >> tests;
    for (int x = 0; x < tests; x++)
    {
        zeros = 0;
        power = 5;
        cin >> number;
        while (power < number)
        {
            zeros += number / power;
            power *= 5;
        }
        cout << zeros << endl;
    }

    return 0;
}
