#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  bool isNumber(string s) {
    trim(s);
    if (s.empty())
      return false;

    bool seenNum = false;
    bool seenDot = false;
    bool seenE = false;

    for (int i = 0; i < s.length(); ++i) {
      switch (s[i]) {
        case '.':
          if (seenDot || seenE)  // only one dot allowed, before 'e'
            return false;
          seenDot = true;
          break;
        case 'e':
        case 'E':
          if (seenE || !seenNum)  // only one e allowed, must follow number
            return false;
          seenE = true;
          seenNum = false;  // need a number after e
          break;
        case '+':
        case '-':
          // sign can only appear at start or just after 'e'
          if (i > 0 && s[i - 1] != 'e' && s[i - 1] != 'E')
            return false;
          seenNum = false;  // reset, must have number after sign
          break;
        default:
          if (!isdigit(s[i]))
            return false;
          seenNum = true;
      }
    }

    return seenNum;
  }

 private:
  void trim(string& s) {
    s.erase(0, s.find_first_not_of(' '));           // leading spaces
    s.erase(s.find_last_not_of(' ') + 1);           // trailing spaces
  }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    string s;
    getline(cin, s);

    cout << (sol.isNumber(s) ? "true" : "false") << "\n";
    return 0;
}
