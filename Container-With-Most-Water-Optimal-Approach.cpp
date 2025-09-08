// Container with most water problem
// Optimal Approach (Two pointer approach)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxWater = 0;
    int maxArea(vector<int> &height)
    {
        int lp = 0, rp = height.size() - 1;

        while (lp < rp)
        {
            int wdt = rp - lp;
            int ht = min(height[lp], height[rp]);
            int currWater = wdt * ht;
            maxWater = max(maxWater, currWater);

            height[lp] < height[rp] ? lp++ : rp--;
        }
        return maxWater;
    }
};

int main()
{
    Solution sol;
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << sol.maxArea(height) << endl;

    return 0;
}