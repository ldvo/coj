#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n, counter = 0;
    cin >> n;
    vector<int> nums(n);
    for (int x = 0; x < n; x++)
    {
        cin >> nums[x];
    }
    sort(nums.begin(), nums.end());
    for (int x = 0; x < n; x++)
    {
        if (!(binary_search(nums.begin(), nums.end(), x+1)))
            counter++;

    }
    cout << counter << endl;


}

