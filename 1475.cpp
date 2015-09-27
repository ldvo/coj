#include <iostream>
#include <vector>
#include <stdio.h>
#include <ctype.h>
#include <string>

using namespace std;

int main()
{
    string phrase;
    int key;
    //decode strings until # char
    while (getline(cin, phrase) && phrase[0] != '#')
    {
        //get key
        key = phrase[phrase.size()-1] - 'A';

        //decode chars
        for (int x = 0; x < phrase.size()-1; x++)
        {
            if (isupper(phrase[x]))
            {
                phrase[x] -= 64 + key;
                while (phrase[x] < 1)
                    phrase[x] += 26;
                phrase[x] += 64;
            }
            else if (islower(phrase[x]))
            {
                phrase[x] -= 96 + key;
                while (phrase[x] < 1)
                    phrase[x] += 26;
                phrase[x] += 96;
            }
            putchar(phrase[x]);
        }
        printf("\n");

    }

    return 0;
}
