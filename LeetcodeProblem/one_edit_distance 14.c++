#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  bool isOneEditDistance(string s, string t) {
    const int m = s.length();
    const int n = t.length();
    if (m > n)  // Ensure s is the shorter string
      return isOneEditDistance(t, s);

    for (int i = 0; i < m; ++i)
      if (s[i] != t[i]) {
        if (m == n)
          return s.substr(i + 1) == t.substr(i + 1);  // Replace
        return s.substr(i) == t.substr(i + 1);        // Insert/Delete
      }

    return m + 1 == n;  // Extra char at the end
  }
};

int main() {
    Solution sol;

    // Example test cases
    cout << boolalpha;  // print true/false instead of 1/0

    cout << "Case 1: " << sol.isOneEditDistance("abc", "abXc") << endl; // true
    cout << "Case 2: " << sol.isOneEditDistance("abc", "adc") << endl;  // true
    cout << "Case 3: " << sol.isOneEditDistance("abc", "abc") << endl;  // false
    cout << "Case 4: " << sol.isOneEditDistance("a", "") << endl;       // true
    cout << "Case 5: " << sol.isOneEditDistance("", "") << endl;        // false
}
