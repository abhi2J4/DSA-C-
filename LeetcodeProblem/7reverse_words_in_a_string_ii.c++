


#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  void reverseWords(vector<char>& s) {
    reverse(s.begin(), s.end());     // Step 1: reverse whole string
    reverseEachWord(s, s.size());    // Step 2: reverse each word
  }

 private:
  void reverseEachWord(vector<char>& s, int n) {
    int i = 0, j = 0;

    while (i < n) {
      // skip spaces
      while (i < j || (i < n && s[i] == ' '))
        ++i;
      // find end of word
      while (j < i || (j < n && s[j] != ' '))
        ++j;
      // reverse current word
      reverse(s.begin() + i, s.begin() + j);
    }
  }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;

    string input;
    getline(cin, input);  // take full sentence
    vector<char> s(input.begin(), input.end());

    sol.reverseWords(s);

    // print vector<char> as string
    for (char c : s) cout << c;
    cout << "\n";

    return 0;
}


// //leetcode
// class Solution {
//  public:
//   void reverseWords(vector<char>& s) {
//     ranges::reverse(s);         // Reverse the whole string.
//     reverseWords(s, s.size());  // Reverse each word.
//   }

//  private:
//   void reverseWords(vector<char>& s, int n) {
//     int i = 0;
//     int j = 0;

//     while (i < n) {
//       while (i < j || i < n && s[i] == ' ')  // Skip the spaces.
//         ++i;
//       while (j < i || j < n && s[j] != ' ')  // Skip the spaces.
//         ++j;
//       reverse(s.begin() + i, s.begin() + j);  // Reverse the word.
//     }
//   }
// };