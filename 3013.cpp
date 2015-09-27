#include <iostream>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
using namespace std;


int main()
{
    int tests, number, people;
    cin >> tests;
    for (int x = 0; x < tests; x++)
    {
        people = 1;
        cin >> number;
        for (int y = 1; y < number; y++)
        {
            people = (people * 2)+1;
        }
        cout << people << endl;
    }


}
