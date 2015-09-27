#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
using namespace std;


int main()
{
    int tests, q1times, q2times;
    scanf("%d", &tests);
    vector<int> numbers(tests);
    for (int x = 0; x < tests; x++)
    {
        scanf("%d", &numbers[x]);
    }
    sort(numbers.begin(), numbers.end());
    scanf("%d", &q1times);
    scanf("%d", &q2times);
    vector<int> q1(q1times);
    vector<int> q2(q2times);
    for (int x = 0; x < q1times; x++)
    {
        scanf("%d", &q1[x]);
    }
    for (int x = 0; x < q2times; x++)
    {
        scanf("%d", &q2[x]);
    }
    for (int x = 0; x < q1times; x++)
    {
        if (binary_search(numbers.begin(), numbers.end(), q1[x]))
        {
            printf(":)\n");
        }
        else
        {
            printf(":(\n");
        }
    }
    for (int x = 0; x < q2times; x++)
    {
        printf("%d\n", numbers[q2[x]-1]);
    }
    return 0;
}
