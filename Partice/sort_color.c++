#include <iostream>
#include <vector>
#include <algorithm> // for sort
using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
    }
};

int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    Solution s;
    s.sortColors(nums);

    for (int num : nums)
    {
        cout << num << " ";
    }
    return 0;
}

