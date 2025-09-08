// Container with most water problem 
// Brute Force Approach

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
        for (int i = 0; i < height.size(); i++)
        {
            for (int j = i + 1; j < height.size(); j++)
            {
                int wdt = j - i;
                int ht = min(height[i], height[j]);
                int currWater = wdt * ht;

                maxWater = max(maxWater, currWater);
            }
        }
        return maxWater;
    }
};

int main()
{
    Solution sol;
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    cout << sol.maxArea(height) << endl;

    return 0;
}