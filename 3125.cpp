#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    string bnums;
    cin >> bnums;
    int start = 0;
    if (bnums.size()% 3 == 1)
    {
        cout << "1";
        start = 1;
    }
    else if (bnums.size()%3 == 2)
    {
        if (bnums[1] == '0')
        {
            cout << "2";
        }
        else
        {
            cout << "3";
        }
        start = 2;
    }
    for (int x = start; x < bnums.size(); x= x+3)
    {
        if (bnums[x] == '0')
        {
            if (bnums[x+1] == '0')
            {
                if (bnums[x+2] == '0')
                {
                    cout << "0";
                }
                else
                {
                    cout << "1";
                }
            }
            else
            {
                if (bnums[x+2] == '0')
                {
                    cout << "2";
                }
                else
                {
                    cout << "3";
                }
            }
        }
        else
        {
            if (bnums[x+1] == '0')
            {
                if (bnums[x+2] == '0')
                {
                    cout << "4";
                }
                else
                {
                    cout << "5";
                }
            }
            else
            {
                if (bnums[x+2] == '0')
                {
                    cout << "6";
                }
                else
                {
                    cout << "7";
                }
            }
        }
    }
    return 0;
}