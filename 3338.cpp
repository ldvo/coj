#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int cases;
    string message, key;
    cin >> cases;
    cin.ignore();
    for (int x = 0; x < cases; x++)
    {
        getline(cin, message);
        getline(cin, key);
        for (int y = 0; y < message.size(); y++)
        {
            if (message[y] != ' ')
                message[y] = key[message[y] - 65];
        }
        cout << x+1 << " " << message << endl;

    }
    return 0;
}
