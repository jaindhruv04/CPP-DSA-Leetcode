#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int koko(vector<int>& piles, int h)
{
    int left = 1;
    int right = *max_element(piles.begin(), piles.end());
    int ans = right;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        long long hours = 0;

        for (int i = 0; i < piles.size(); i++)
        {
            hours += piles[i] / mid;

            if (piles[i] % mid != 0)
            {
                hours++;
            }
        }

        if (hours <= h)
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return ans;
}