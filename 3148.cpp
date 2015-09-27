#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main()
{
    int tests;
    string cell;
    cin >> tests;
    for (int x = 0; x < tests; x++)
    {
        cin >> cell;
        if ((cell[0]-96)%2 == 0 )
        {
            if ( (cell[1]-'0')% 2 == 0)
            {
                cout << "WHITE" << endl;
            }
            else
            {
                cout << "BLACK" << endl;
            }
        }
        else
        {
            if ( (cell[1]-'0')% 2 == 0)
            {
                cout << "BLACK" << endl;
            }
            else
            {
                cout << "WHITE" << endl;
            }
        }
    }




    return 0;
}