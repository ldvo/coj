#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main()
{
    int tests, players, squares, throws, currentplayer, finishedplayers;
    scanf("%d", &tests);

    for (int x = 0; x < tests; x++)
    {

        cin >> players >> squares >> throws;
        vector<int> squarevalue(squares);
        vector<int> playerpos(players);
        vector<int> throwvalues(throws);
        currentplayer = 0;
        finishedplayers = 0;

        //stores values of each square
        for (int x = 0; x < squares; x++)
        {
            cin >> squarevalue[x];
        }

        //stores values of each dice throw
        for (int x = 0; x < throws; x++)
        {
            cin >> throwvalues[x];
        }

        //executes moves
        for (int x = 0; x < throws; x++)
        {
            //check if current player has finished
            while (playerpos[currentplayer] == squares-1)
            {
                currentplayer++;
                if (currentplayer == players)
                    currentplayer = 0;
            }

            //moves player position according to dice value
            playerpos[currentplayer] += throwvalues[x];

            //moves player according to value of square
            playerpos[currentplayer] += squarevalue[playerpos[currentplayer]];

            //check if player finished
            if (playerpos[currentplayer] == squares-1)
            {
                cout << currentplayer + 1 << " ";
                finishedplayers++;
            }

            //next player
            currentplayer++;
            if ( currentplayer == players )
                currentplayer = 0;

            //exit loop if everyone has finished
            if (finishedplayers == players)
                break;


        }

        //if no one finished
        if (finishedplayers == 0)
        {
            cout << "-1";
        }

        cout << endl;

    }
    return 0;
}
