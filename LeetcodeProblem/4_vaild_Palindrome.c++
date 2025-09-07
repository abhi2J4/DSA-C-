#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.size() - 1;
        while (i < j) {
            if (!isalnum(s[i])) {       // skip non-alphanumeric left
                ++i;
            } else if (!isalnum(s[j])) { // skip non-alphanumeric right
                --j;
            } else if (tolower(s[i]) != tolower(s[j])) { // mismatch
                return false;
            } else { // characters match → move both pointers
                ++i;
                --j;
            }
        }
        return true; // all matched
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;

    string s;
    getline(cin, s); // read full line including spaces & punctuation

    bool ans = sol.isPalindrome(s);

    cout << (ans ? "true" : "false") << "\n";

    return 0;
}

// A man, a plan, a canal: Panama  
//  Time complexity- O(n)
//  Space complexity- O(1)
