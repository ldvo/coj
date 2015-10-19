#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    string s;
    bool fix = false;
    cin >> s;
    for (int x = 1; x < s.size(); x++)
    {
        if (isupper(s[x]))
        {
            fix = true;
            break;
        }

    }
    if (fix)
    {
        for (int x = 0; x < s.size(); x++)
        {
            if (isupper(s[x]))
                s[x] = tolower(s[x]);
            else
                s[x] = toupper(s[x]);
        }

    }
    cout << s << endl;
    return 0;

}

