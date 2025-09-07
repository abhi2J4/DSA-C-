#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();  // length of text
        int m = needle.size();    // length of pattern

        for (int i = 0; i <= n - m; i++) {    // try every possible starting position
            for (int j = 0; j < m; j++) {     // check each character of needle
                if (needle[j] != haystack[i + j]) {
                    break; // mismatch → stop checking this position
                }
                if (j == m - 1) {
                    return i; // if we reached end of needle → match found
                }
            }
        }
        return -1; // no match found
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;

    string haystack, needle;
    cin >> haystack >> needle;  // input two strings

    int ans = sol.strStr(haystack, needle);

    cout << ans << "\n";  // print the result (starting index or -1)

    return 0;
}

// Input: haystack = "sadbutsad", needle = "sad"
// Output: 0
// Explanation: "sad" occurs at index 0 and 6.
// The first occurrence is at index 0, so we return 0.

// Time complexity = O(n*m)
// Sapce complexity = O(1)