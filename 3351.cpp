#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
#include <ctype.h>

using namespace std;


int main()
{
    int words;
    cin >> words;
    string word;
    for (int w = 0; w < words; w++)
    {
        bool possible = true;
        cin >> word;
        for (int x = 0; x < word.size(); x++)
        {
            if ( !(isupper(word[x])) || (word[x] >= 66 && word[x] <= 71) || (word[x] >= 74 && word[x] <= 76) || (word[x] == 'N') || (word[x] >= 80 && word[x] <= 83) || (word[x] == 'Z'))
            {
                possible = false;
                break;
            }
        }
        if (possible)
        {
            if (word != string(word.rbegin(), word.rend()))
            {
                possible = false;
            }

        }

        if (possible)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;

}