#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int lengthOfLongestSubstringTwoDistinct(string s) {
    int ans = 0;
    int distinct = 0;            // number of unique characters in window
    vector<int> count(128, 0);   // ASCII character counts

    for (int l = 0, r = 0; r < s.length(); ++r) {
      if (++count[s[r]] == 1)    // first occurrence of s[r]
        ++distinct;

      // shrink window if we have > 2 distinct characters
      while (distinct == 3) {
        if (--count[s[l++]] == 0)
          --distinct;
      }

      // update max length
      ans = max(ans, r - l + 1);
    }

    return ans;
  }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    string s;
    cin >> s;

    cout << sol.lengthOfLongestSubstringTwoDistinct(s) << "\n";
    return 0;
}

// input : eceba
// Output :3
// input : ccaabbb
// Output :5
