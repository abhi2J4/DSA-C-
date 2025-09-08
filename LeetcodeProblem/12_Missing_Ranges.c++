#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  vector<vector<int>> findMissingRanges(vector<int>& nums, int lower, int upper) {
    if (nums.empty())
      return {getRange(lower, upper)};

    vector<vector<int>> ans;

    // Check gap before first element
    if (nums.front() > lower)
      ans.push_back(getRange(lower, nums.front() - 1));

    // Check gaps between numbers
    for (int i = 1; i < nums.size(); ++i)
      if (nums[i] > nums[i - 1] + 1)
        ans.push_back(getRange(nums[i - 1] + 1, nums[i] - 1));

    // Check gap after last element
    if (nums.back() < upper)
      ans.push_back(getRange(nums.back() + 1, upper));

    return ans;
  }

 private:
  vector<int> getRange(int lo, int hi) {
    if (lo == hi)
      return {lo, lo};  // single number missing
    return {lo, hi};    // range missing
  }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    vector<int> nums = {0, 1, 3, 50, 75};
    int lower = 0, upper = 99;

    vector<vector<int>> result = sol.findMissingRanges(nums, lower, upper);

    cout << "Missing ranges:\n";
    for (auto &r : result) {
        if (r[0] == r[1]) {
            cout << r[0] << "\n";
        } else {
            cout << r[0] << "->" << r[1] << "\n";
        }
    }
    return 0;
}

//input:
// nums = [0,1,3,50,75], lower = 0, upper = 99

//output:
// 2
// 4->49
// 51->74
// 76->99
