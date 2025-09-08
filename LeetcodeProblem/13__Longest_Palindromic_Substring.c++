#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool isPalindrome(string &s, int start, int end) {
        while (start < end) {
            if (s[start] != s[end])
                return false;
            start++;
            end--;
        }
        return true;
    }

public:
    string longestPalindrome(string s) {
        string ans = "";
        for (int i = 0; i < s.size(); i++) {
            for (int j = i; j < s.size(); j++) {
                if (isPalindrome(s, i, j)) {
                    string t = s.substr(i, j - i + 1);
                    if (t.size() > ans.size())
                        ans = t;
                }
            }
        }
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    string s = "babad";
    cout << "Longest Palindrome: " << sol.longestPalindrome(s) << "\n";
    return 0;
}
